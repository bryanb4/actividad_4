#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <stdio.h>
struct personaje
{
    char nombre[20];
    char tipo[20];
    float fuerza;
    int salud;
}personajes[5];
unsigned int cont =0;

void capturar_persona(){
    if(cont < 5){

        printf("nombre: ");
        scanf("%s", personajes[cont].nombre);
        printf("tipo: ");
        scanf("%s", personajes[cont].tipo);
        printf("fuerza: ");
        scanf("%f", &personajes[cont].fuerza);
        printf("salud: ");
        scanf("%i", &personajes[cont].salud);
        cont++;
    }
    else
    {
        printf("arreglo de personajes esta lleno\n");
    }

    
}

void mostrar_personajes(){
    for (size_t i = 0; i < cont; i++)
    {
        printf("nombre: %s \n", personajes[i].nombre);
        printf("tipo: %s \n", personajes[i].tipo);
        printf("fuerza: %f \n", personajes[i].fuerza);
        printf("salud: %i \n", personajes[i].salud);
    }
    
}

#endif PERSONAJE_H