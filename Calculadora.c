# include <stdio.h>

int main(){
    int opcion;
    float  num1, num2;
    while(1){
    printf("Hola mundo");
    printf("1-Suma\n2-Resta\n3-Multiplicacion\n4-Division\n5-Salir\n");
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
        case 1: printf("Ingrese el primero numero: ");
                scanf("%f",&num1);
                printf("Ingrese el segundo numero: ");
                scanf("%f",&num2);
                printf("El resultado de %.2f + %.2f = %.2f\n", num1,num2, num1 + num2);
                 
        break;
        //resta
        case 2:  printf("Ingrese el primero numero: ");
                scanf("%f",&num1);
                printf("Ingrese el segundo numero: ");
                scanf("%f",&num2);
                printf("El resultado de %.2f - %.2f = %.2f\n", num1,num2, num1 - num2);
        break;
        //multiplicacion 
        case 3: printf("Ingrese el primer dijito: ");
                scanf("%f", &num1);
                printf("Ingrese el segundo dijito: ");
                scanf("%f", &num2);

                printf("EL resultado de %.2f * %.2f es: %.2f\n", num1, num2, num1 *num2);
        break;
        //Division
        case 4: printf("Ingrese el primero numero: ");
                scanf("%f",&num1);
                printf("Ingrese el segundo numero: ");
                scanf("%f",&num2);
                if (num2 != 0) {
                    printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, (float)num1 / num2);
                } else {
                    printf("Error: No se puede dividir por cero.\n");
                }
        break;

        //salir     









        }
    }
    printf("Hola mundo");
    printf("Hola mundo x2");

    return 0;
}