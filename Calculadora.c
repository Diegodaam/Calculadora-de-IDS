# include <stdio.h>

int main(){
    int opcion;
    float  num1, num2;
    while(1){
    printf("1-Suman\n2-Resta\n3-Multiplicacion\n4-Divicion\n5-salir\n");
    printf("Selecciona el numero de la funcion que quieres hacer (1-4): ");
    scanf("%d", &opcion);

    if(opcion > 5 || opcion < 1){
        printf("Error. Selecciona un numero que si este dentro del rango (1-5)\n");
    }
    if(opcion == 5){
                    printf("Saliendo del programa...");
            break;
        }

    switch(opcion){
        //suma
        case 1: printf("Dijita el primer dijito: ");
        break;
        //resta
        case 2: printf("Dijita el primer dijito: ");
        break;
        //multiplicacion 
        case 3: printf("Dijita el primer dijito: ");
                scanf("%f", &num1);
                printf("Dijita el segundo dijito: ");
                scanf("%f", &num2);

                printf("EL resultado de %.2f * %.2f es: %.2f", num1, num2, num1 *num2);
        break;
        //Divicion
        case 4: printf("Dijita el primer dijito: ");
        break;
        //salir     









        }
    }

    return 0;
}