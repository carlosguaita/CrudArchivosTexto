#include <stdio.h>
#include <string.h>
#include "funciones.h"

int main (int argc, char *argv[]) {
    int opc=0, opc2=0, len, edad, notas[3]={0};
    char nombre[20];
    do
    {
        opc=menu();
        switch (opc)
        {
        case 1:
            printf("Ingrese el nombre: ");
            fflush(stdin);
            fgets(nombre, 20, stdin);
            printf("Ingrese la edad: ");
            scanf("%d", &edad);
            printf("Ingrese la Nota 1: ");
            scanf("%d", &notas[0]);
            printf("Ingrese la Nota 2: ");
            scanf("%d", &notas[1]);
            printf("Ingrese la Nota 3: ");
            scanf("%d", &notas[2]);
            createAlumno(nombre, edad, notas);
            break;
        case 2:
            readAlumno();
            break;
        case 3:
            int pos;
            printf("Ingrese el nombre a buscar: ");
            fflush(stdin);
            fgets(nombre, 30, stdin);
            //len = strlen(nombre) - 1;
            //nombre[len] = '\0';
            searchAlumnoByNombre(nombre,&pos,&pos);
            break;
        case 4:
            printf("Ingrese el nombre a buscar: ");
            fflush(stdin);
            fgets(nombre, 20, stdin);
            //len = strlen(nombre) - 1;
            //nombre[len] = '\0';
            updateAlumno(nombre);
            break;
        default:
            break;  
        }
        printf("Desea realizar otra operacion? 1-Si 2-No: ");
        scanf("%d",&opc2);
    } while (opc2==1);
    


    return 0;
}