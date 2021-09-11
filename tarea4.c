#include <stdio.h> 
void cicloWhile(int numero1, int numero2);

int main()
{
    int num1;
    int num2;

    printf("Digite dos números para imprimir los números entre estos 2\n");
    printf("Digite el primer número: ");
    scanf("%d", &num1);
    printf("Digite el segundo número: ");
    scanf("%d", &num2);

    cicloWhile(num1, num2);

    return 0;
}

void cicloWhile(int numero1, int numero2)
{
    int i = numero1;
    int m = numero2;

    while(i<m)
    {
    i++;
    printf("%d\n", i);
    }

}