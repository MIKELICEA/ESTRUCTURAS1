#include <stdio.h>

int main()
{
	int op1, op2, suma, resta;

	printf("Operando 1: ");
	scanf("%d" ,&op1);
	printf("Operando 2: ");
	scanf("%d", &op2);

	suma = op1 + op2;
	resta = op1 - op2;

	printf("El resultado de la suma es: %d\n",suma);
	printf("El resultado de la suma es: %d\n",resta);

return 0;

}