#include <stdio.h>
#define NUMERO_SECRETO 42
#define TENTATIVAS 10
int main()
{
    int i, palpite;
    for(i = 1; i <= 10;i++)
    {
        printf("Tentativa %d de %d.\n", i,TENTATIVAS);
        printf("Digite um numero inteiro:\n");
        scanf("%d", &palpite);
        if(palpite < NUMERO_SECRETO)
            printf("Tente um numero maior!\n");
        else if(palpite > NUMERO_SECRETO)
            printf("Tente um numero menor!\n");
        else {
            printf("Voce Acertou!");
            break;
        }
    }
    if(i > TENTATIVAS)
        printf("Numeros de tentativas esgotadas!\nO numero secreto eh %d", NUMERO_SECRETO);
    return 0;
}
