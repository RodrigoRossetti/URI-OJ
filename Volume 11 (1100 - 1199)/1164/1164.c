# include <stdio.h>   

int main() {   
    int i, j, n, m, soma = 0;   
    scanf("%d", &m);
    for(j = 0; j < m; j++) {
        scanf("%d", &n);
        for(i = 1; i < n; i++) {   
            if(n % i == 0) {
                soma += i;  
            }
        }    
        if (soma == n) {
            printf("%d eh perfeito\n", n); 
        }  
        else {
            printf("%d nao eh perfeito\n", n); 
        }
        soma = 0;
    }
    return 0;   
}