#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define MAXN 500

typedef struct no_pilha {
	int info;
	struct no_pilha *prox;
} *def_pilha;

typedef struct no_pilhaCh {
	char info;
	struct no_pilhaCh *prox;
} *def_pilhaCh;

void inicializaCh(def_pilhaCh *pilha) {
	*pilha = NULL;
}

bool vaziaCh(def_pilhaCh pilha) {
	return (pilha == NULL);
}

void empilhaCh(def_pilhaCh *pilha, char info) {
	def_pilhaCh p = (def_pilhaCh)malloc(sizeof(struct no_pilhaCh));
	p->info = info;
	p->prox = *pilha;
	*pilha = p; 
}

bool desempilhaCh(def_pilhaCh *pilha, char *k) {
	if (vaziaCh(*pilha)) return 0;
	def_pilhaCh p = *pilha;
	*pilha = p->prox;
	*k = p->info;
	free(p);
	return 1;
}

int precedencia(char c) {
	switch (c) {
		case '^': return 3;
		case '*': case '/': return 2;
		case '+': case '-': return 1;
	}
}

void ImprimeIn(char s[]) {
	def_pilhaCh op;
	inicializaCh(&op);
	int i, k, j = 0;
	char c;
	for (i = 0; i < strlen(s); i++) {
		if (isalnum(s[i])) putchar(s[i]);
		else if (s[i] == '^' || s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-') {
			while (!vaziaCh(op) && precedencia(op->info) >= precedencia(s[i]) && op->info != '(') {
				desempilhaCh(&op, &c);
				putchar(c);
			}
			empilhaCh(&op, s[i]);
		}
		else if (s[i] == '(') empilhaCh(&op, '(');
		else if (s[i] == ')') {
			while (op->info != '(') {
				desempilhaCh(&op, &c);
				putchar(c);
			}
			desempilhaCh(&op, &c);
		}
	}
	while (!vaziaCh(op)) {
		desempilhaCh(&op, &c);
		putchar(c);
	}
	putchar('\n');
}

int main() {
	int n;
	char s[MAXN];
	scanf("%d\n", &n);
	while (n--) {
		gets(s);
		ImprimeIn(s);
	}
	return 0;	
}