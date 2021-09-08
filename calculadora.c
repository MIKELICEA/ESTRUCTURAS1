#include <stdio.h>
#include <math.h>

int main()
{
    char operacion;
    float numero1, numero2, resultado;
    int num1, num2, resul,i;
    
    do{

    printf("\n¿Que operacion deseas realizar? (+)suma, (-)resta, (x)multiplicacion, (/)division, (^)potencia, (m)modulo, (r)raiz?:" );
    scanf(" %c", &operacion);
    
    switch(operacion)
    {
    
    case '+':
    
    printf("Digita un numero: ");
    scanf("%f", &numero1);
    printf("Digita otro numero: ");
    scanf("%f", &numero2);
    
    resultado = numero1+numero2;
    
    printf("%.3f + %.3f = %.3f ", numero1, numero2, resultado);
    break;
    
    case '-':
    
    printf("Digita un numero: ");
    scanf("%f", &numero1);
    printf("Digita otro numero: ");
    scanf("%f", &numero2);
    
    resultado = numero1-numero2;
    
    printf("%.3f - %.3f = %.3f ", numero1, numero2, resultado);
    break;
    
    case 'x':
    
    printf("Digita un numero: ");
    scanf("%f", &numero1);
    printf("Digita otro numero: ");
    scanf("%f", &numero2);
    
    resultado = numero1*numero2;
    
    printf("%.3f x %.3f = %.3f ", numero1, numero2, resultado);
    
    break;

    case '/':
    printf("Digita un numero: ");
    scanf("%f", &numero1);
    printf("Digita otro numero: ");
    scanf("%f", &numero2);
    
    resultado = numero1/numero2;
    
    printf("%.3f / %.3f = %.3f ", numero1, numero2, resultado);
    break;
    
    case '^':
    
    printf("Digita un numero a elevar: ");
    scanf("%f", &numero1);
    printf("Digita la potencia: ");
    scanf("%f", &numero2);
    
    resultado = pow(numero1, numero2);
    
    printf("(%.3f)^%.3f = %.3f ", numero1, numero2, resultado);
    
    break;
    
    case 'm':

    printf("Digita un numero: ");
    scanf("%f", &numero1);
    printf("Digita otro numero: ");
    scanf("%f", &numero2);

    num1= (int)numero1;
    num2= (int)numero2;
    
    resul= (num1)%(num2);
    
    printf("mod (%d, %d) = %d ", num1, num2, resul);
    break;
    
    case 'r':
    printf("Escriba el numero a sacar raiz cuadrada: ");
    scanf("%f", &numero1);
  
    
    resultado = sqrt(numero1);
    
    printf("√%.3f = %.3f ", numero1,resultado);
    break;
    
    default:

    printf("Esa no es una opción correcta");

    break;
}
    printf("\n¿Quieres realizar otra operación?(yes=1, no=0)");
    scanf("%d", &i);

    if (i==0)
    printf("\nGracias por usar la calculadora de Mike Licea");

    }while(i!=0);

    }
