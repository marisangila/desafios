#include <stdio.h>
#include <math.h>
int main()
{
    int n, fib1, fib2, fibAtual, ehPrimo;
    fib1 = fib2 = 1;
    printf("Digite um numero:\n");
    scanf("%d", &n);
    printf("%d eh primo!\n", fib1);
    printf("%d eh primo!\n", fib2);
    for(int i=2;i<n;i++)
    {
        fibAtual = fib1 + fib2;
        fib1 = fib2;
        fib2 = fibAtual;
        ehPrimo = 1;
        for(int j=2;j<sqrt(fibAtual);j++)
        {
            if(fibAtual % j == 0)
            {
                ehPrimo = 0;
                break ;
            }
        }
        if(ehPrimo)
            printf("%d eh primo!\n", fibAtual);
        else
            printf("%d nao eh primo!\n", fibAtual);
    }
    return 0;
}