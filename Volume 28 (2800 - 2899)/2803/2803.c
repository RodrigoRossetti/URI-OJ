#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    gets(s);
    if (strcmp(s, "roraima") == 0 ||
        strcmp(s, "acre") == 0 ||
        strcmp(s, "amapa") == 0 ||
        strcmp(s, "amazonas") == 0 ||
        strcmp(s, "para") == 0 ||
        strcmp(s, "rondonia") == 0 ||
        strcmp(s, "tocantins") == 0) printf("Regiao Norte\n");
    else printf("Outra regiao\n");
    return 0;
}