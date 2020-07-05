#include <stdio.h>
#include <string.h>

int main() {
    char c1[] = "vertebrado", c11[22] = "ave", c12[] = "mamifero";
    char c111[] = "carnivoro", c112[] = "onivoro", c124[] = "herbivoro";
    char a1[] = "aguia", a2[] = "pomba", a3[] = "homem", a4[] = "vaca";
    char c2[] = "invertebrado", c21[] = "inseto", c22[] = "anelideo";
    char c211[] = "hematofago", a5[] = "pulga", a6[] = "lagarta";
    char a7[] = "sanguessuga", a8[] = "minhoca";
    char a[22], b[22], c[22];

    scanf("%s", a);
    if (strcmp(a, c1) == 0) {
        scanf("%s", b);
        if (strcmp(b, c11) == 0) {
            scanf("%s", c);
            if (strcmp(c, c111) == 0)
                printf("%s\n", a1);
            else if (strcmp(c, c112) == 0)
                printf("%s\n", a2);
        }
        if (strcmp(b, c12) == 0) {
            scanf("%s", &c);
            if (strcmp(c, c112) == 0)
                printf("%s\n", a3);
            else if (strcmp(c, c124) == 0)
                printf("%s\n", a4);
        }
    }
    else if (strcmp(a, c2) == 0) {
        scanf("%s", b);
        if (strcmp(b, c21) == 0) {
            scanf("%s", &c);
            if (strcmp(c, c211) == 0)
                printf("%s\n", a5);
            else if (strcmp(c, c124) == 0)
                printf("%s\n", a6);
        }
        if (strcmp(b, c22) == 0) {
            scanf("%s", &c);
            if (strcmp(c, c211) == 0)
                printf("%s\n", a7);
            else if (strcmp(c, c112) == 0)
                printf("%s\n", a8);
        }
    }
    return 0;
}