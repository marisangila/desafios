#include <stdio.h>

int eh_primo(int candidato)
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
    int n, fib1, fib2, fib_atual;
    fib1 = fib2 = 1;
    printf("Digite um numero:\n");
    scanf("%d", &n);
    printf("%d eh primo!\n", fib1);
    printf("%d eh primo!\n", fib2);
    for(int i=1;i<n;i++)
    {
        fib_atual = fibonacci(&fib1,&fib2);
        if(eh_primo(fib_atual) == 1)
            printf("%d eh primo!\n", fib_atual);
        else
            printf("%d nao eh primo!\n", fib_atual);
    }
    return 0;
}