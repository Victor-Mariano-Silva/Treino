// 22. Crie uma funcao que receba como parametro um valor inteiro e gere como saida n linhas
// com pontos de exclamacao, conforme o exemplo abaixo (para n = 5):

#include <stdio.h>

void criar(int n);

int main () {
    int n;
    
    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    criar(n);

    return 0;
}

void criar(int n) {
    int i,j;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("!");
        }
        printf("\n");
    }
}