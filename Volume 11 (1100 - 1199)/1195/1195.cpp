#include<bits/stdc++.h>
using namespace std;

struct tree{
    int node;
    struct tree *left;
    struct tree *right;
};
    
tree *raiz;

tree * visita_raiz(tree *ra, tree *r, int valor){
    if(r == NULL){
        r = (tree *) malloc(sizeof(tree));

        r->left = NULL;
        r->right = NULL;    
        r->node = valor;

        if(ra == NULL){
            return r;
        }

        if(valor < ra->node){
            ra->left = r;
        }
        else{
            ra->right = r;
        }

        return r;
    }
    if(valor < r->node){
        visita_raiz(r,r->left,valor);
    }
    else{
        visita_raiz(r,r->right,valor);
    }
}
void incluir(int valor){
    if(raiz == NULL){
        raiz = visita_raiz(raiz,raiz,valor);
    }else{
        visita_raiz(raiz,raiz,valor);
    }
}

void preordem(tree *pNo){
    if (pNo != NULL){
       printf(" %d", pNo->node);
       preordem(pNo->left);
       preordem(pNo->right);
    }
}

void posordem(tree *pNo){
    if (pNo != NULL){
       posordem(pNo->left);
       posordem(pNo->right);
       printf(" %d", pNo->node);
    }
}

void emordem(tree *pNo){
    if (pNo != NULL){
       emordem(pNo->left);
       printf(" %d", pNo->node);
       emordem(pNo->right);
    }
}

int main(void) {
    int n, tam, cases = 0, valor;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        scanf("%i",&tam);
        while(tam--){
            scanf("%i",&valor);
            incluir(valor);
        }
        printf("Case %i:\n",i);
        printf("Pre.:");preordem(raiz);
        puts("");
        printf("In..:");emordem(raiz);
        puts("");
        printf("Post:");posordem(raiz);
        puts("\n");
        raiz = NULL;
    }

    return 0;
}