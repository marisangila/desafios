#include <stdio.h>
#include <math.h>
int main()
{
    int n, fib1, fib2, fib_atual, eh_primo;
    fib1 = fib2 = 1;
    printf("Digite um numero:\n");
    scanf("%d", &n);
    printf("%d eh primo!\n", fib1);
    printf("%d eh primo!\n", fib2);
    for(int i=2;i<n;i++)
    {
        fib_atual = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib_atual;
        eh_primo = 1;
        for(int j=2;j<sqrt(fib_atual);j++)
        {
            if(fib_atual % j == 0)
            {
                eh_primo = 0;
                break ;
            }
        }
        if(eh_primo)
            printf("%d eh primo!\n", fib_atual);
        else
            printf("%d nao eh primo!\n", fib_atual);
    }
    return 0;
}