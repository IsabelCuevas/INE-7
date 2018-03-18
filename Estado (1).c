#include<stdio.h>
#include<stdlib.h>
#include "Estado.h"

void inicializarSistema(Estado *mexico){
    int estado, numMunicipio, numVotante = 10;
     for(estado=0;estado<32;estado++){
        for(numMunicipio=0;numMunicipio<10;numMunicipio++){
                mexico[estado].municipios[numMunicipio].votantes = crearCiudadano(numVotante);
        }
     }
}

Ciudadano *crearCiudadano(int numVotantes){
    Ciudadano *c1;
    int i;
     c1 = (Ciudadano *) malloc (numVotantes*sizeof(Ciudadano));
    for(i=0;i<numVotantes; i++){
     c1[i].nombres = (char *) calloc (N, sizeof(char));
     c1[i].apellidos = (char *) calloc (N, sizeof(char));
     c1[i].dir_persona = (Direccion *) malloc (1*sizeof(Direccion));
     c1[i].dir_persona->calle = (char *) calloc (N, sizeof(char));
     c1[i].dir_persona->colonia = (char *) calloc (N, sizeof(char));
    }
    if(c1==NULL){
        printf("\nError al crear ciudadano");
        return NULL;
    }
    for(i=0;i<numVotantes; i++){
        if(c1[i].nombres==NULL||c1[i].apellidos|| c1[i].dir_persona==NULL||c1[i].dir_persona->calle==NULL||c1[i].dir_persona->colonia==NULL);
        printf("\nUn errorcito por ahi\n");
    }
    return c1;
}

void liberarMemoria(Estado *mexico){
   int estado, numMunicipio, numVotante;

   for(estado=0;estado<32;estado++){
        for(numMunicipio=0;numMunicipio<10;numMunicipio++){
            for(numVotante=0;numVotante<10;numVotante++){ // primero se liberan todas las variables creadas de manera dinamica
             free(mexico[estado].municipios[numMunicipio].votantes[numVotante].dir_persona->calle);
             free(mexico[estado].municipios[numMunicipio].votantes[numVotante].dir_persona->colonia);
             free(mexico[estado].municipios[numMunicipio].votantes[numVotante].dir_persona);
             free(mexico[estado].municipios[numMunicipio].votantes[numVotante].nombres);
             free(mexico[estado].municipios[numMunicipio].votantes[numVotante].apellidos);
            }
            free(mexico[estado].municipios[numMunicipio].votantes);
        }
     }
}

void buscarCiudadano(Ciudadano *c1){

      FILE *datos;

      printf("Digite la clave de elector: \n");
      gets(c1->clave_de_elector);

      datos=fopen(c1->clave_de_elector,"r");
      if (datos==NULL)
         printf("Error no se encontro el ciudadano...");
      else
      {
        printf("\n===DATOS DEL CIUDADANO===\n\n");
        while( !feof(datos) )
        printf("%c",getc(datos));
      }
      printf("\n");
}
