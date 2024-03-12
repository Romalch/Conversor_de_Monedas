#include <stdio.h>
int main() {
    int opcion_conversor = 0;
    do {
        float tasa_cambio, cantidad_dinero, mi_resultado = 0.00;
        char* titulo_conversor = "" ;
        char* titulo_resultado = "";
        printf("***** Conversor de Monedas *****\n");
        printf("1. Quetzales a Dolares\n");
        printf("2. Quetzales a Euros\n");
        printf("--------------------\n");
        printf("3. Dolares a Quetzales\n");
        printf("4. Dolares a Euros\n");
        printf("--------------------\n");
        printf("5. Euros a Quetzales\n");
        printf("6. Euros a Dolares\n");
        printf("\n");
        printf("0. Salir del Conversor de monedas\n");
        scanf("%d",&opcion_conversor);
        printf("\n");
        switch (opcion_conversor)
        {
            case 1:
                printf("*** Quetzales a Dolares ***\n");
                printf("Ingrese Cantidad de Quetzales: Q.");
                scanf("%f",&cantidad_dinero);
                printf("Ingrese Tasa de Cambio Q.");
                scanf("%f",&tasa_cambio);
                printf("\n");
                titulo_resultado = "Total Dolares USD $.";
                mi_resultado = cantidad_dinero / tasa_cambio ;
                break;
            case 2:
                printf("*** Quetzales a Euros ***\n");
                printf("Ingrese Cantidad de Quetzales: Q.");
                scanf("%f",&cantidad_dinero);
                printf("Ingrese Tasa de Cambio Q.");
                scanf("%f",&tasa_cambio);
                printf("\n");
                titulo_resultado = "Total Euros USD $.";
                mi_resultado = cantidad_dinero / tasa_cambio ;                
                break;
            case 3:
                printf("*** Dolares a Quetzales ***\n");
                printf("Ingrese Cantidad de Dolares : $.");
                scanf("%f",&cantidad_dinero);
                printf("Ingrese Tasa de Cambio Q.");
                scanf("%f",&tasa_cambio);
                printf("\n");
                titulo_resultado = "Total Quetzales Q.";
                mi_resultado = cantidad_dinero * tasa_cambio ;                
                break;
            case 4:
                printf("*** Dolares a Euros ***\n");
                printf("Ingrese Cantidad de Dolares : $.");
                scanf("%f",&cantidad_dinero);
                printf("Ingrese Tasa de Cambio E.");
                scanf("%f",&tasa_cambio);
                printf("\n");
                titulo_resultado = "Total Euros E.";
                mi_resultado = cantidad_dinero / tasa_cambio ;                
                break;
            case 5:
                printf("*** Euros a Quetzales ***\n");
                printf("Ingrese Cantidad de Euros : E.");
                scanf("%f",&cantidad_dinero);
                printf("Ingrese Tasa de Cambio Q.");
                scanf("%f",&tasa_cambio);
                printf("\n");
                titulo_resultado = "Total Quetzales Q.";
                mi_resultado = cantidad_dinero * tasa_cambio ;                
                break;
            case 6:
                printf("*** Euros a Dolares ***\n");
                printf("Ingrese Cantidad de Euros : E.");
                scanf("%f",&cantidad_dinero);
                printf("Ingrese Tasa de Cambio $.");
                scanf("%f",&tasa_cambio);
                printf("\n");
                titulo_resultado = "Total Euros E.";
                mi_resultado = cantidad_dinero / tasa_cambio ;                
                break;


            default:
                if (opcion_conversor !=0)
                {
                    printf("\n*** Valor NO válido ***\n\n");
                }
                break;
        }
        if (opcion_conversor > 0 && opcion_conversor < 7)
        {
            printf("%s",titulo_resultado);
            printf("%f",mi_resultado);
            printf("\n\n");
        }    
    } while (opcion_conversor !=0) ;
}   