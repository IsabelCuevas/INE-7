#include <stdio.h>
#include "menu.h"

int crearMenu (char texto[], int n){
    // VARIABLE LOCAL
    int opcion;
    do{
        printf("%s", texto);
        scanf("%i", &opcion);
        if (opcion < 1 || opcion > n)
                printf("Error: opcion no valida...\n");
        }while (opcion < 1 || opcion > n);
        return opcion;

}
