#include <stdio.h>

int main()
{
    int opcion;
    printf("\nDame un número entre 0 y 9: ");
    scanf("%i", &opcion);
    
    switch (opcion)
    {
        case 0:
        printf("\nCero");
        break;
        case 1:
        printf("\nUno");
        break;
        case 2:
        printf("\nDos");
        break;
        case 3:
        printf("\nTres");
        break;
        case 4:
        printf("\nCuatro");
        break;
        case 5:
        printf("\nCinco");
        break;
        case 6:
        printf("\nSeis");
        break;
        case 7:
        printf("\nSiete");
        break;
        case 8:
        printf("\nOcho");
        break;
        case 9:
        printf("\nNueve");
        break;
        default:
        if(opcion > 9 ) 
        
        printf("\nIncorrecto, número mayor que 9");
       
        else if (opcion < 0) 
        printf("\nIncorrecto, número menor que 0");
       
        }

    return 0;
}
