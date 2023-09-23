#include <stdio.h>

int ehPrimo(int candidato)
{
    for(int i=2;i<candidato/2;i++)
        if(candidato % i == 0)
            return 0;
    return 1;
}
int fibonacci(int *fib1, int *fib2)
{
    int fibonacci = *fib1 + *fib2;
    *fib1 = *fib2;
    *fib2 = fibonacci;
    return fibonacci;
}
int main()
{
    int n, fib1, fib2, fibAtual;
    fib1 = fib2 = 1;
    printf("Digite um numero:\n");
    scanf("%d", &n);
    printf("%d eh primo!\n", fib1);
    printf("%d eh primo!\n", fib2);
    for(int i=1;i<n;i++)
    {
        fibAtual = fibonacci(&fib1,&fib2);
        if(ehPrimo(fibAtual) == 1)
            printf("%d eh primo!\n", fibAtual);
        else
            printf("%d nao eh primo!\n", fibAtual);
    }
    return 0;
}