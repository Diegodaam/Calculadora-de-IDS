# include <stdio.h>

int main(){

    int opcion, num1, num2;
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
        case 3: printf("Ingrese el primero numero: ");
                scanf("%f",&num1);
                printf("Ingrese el segundo numero: ");
                scanf("%f",&num2)
                if (num2 != 0) {
                    printf("Resultado: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
                } else {
                    printf("Error: No se puede dividir por cero.\n");
                }
        break;
        //Divicion
        case 4: printf("Dijita el primer dijito: ");
        break;
        //salir     
