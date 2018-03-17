#include<stdio.h>
#include<stdlib.h>
#include "menu.h"
#include "Estado.h"

int main(){;
    Estado mexico[32];
    Ciudadano *Auxiliar;
    inicializarSistema(mexico);
    Auxiliar = crearCiudadano(1);
    int opcion, interfaz;
  do{
     interfaz = crearMenu("\nElija la opcion que desee\n1)Votar\n2)Revisar estadisticas\n3)Salir\n", 3);
    switch(interfaz){
     case 1: //votar
         printf("\nIntroduzca su clave de elector por favor");
         scanf("%s", &Auxiliar->clave_de_elector);
         Auxiliar = buscarCiudadano(Auxiliar->clave_de_elector);
         if(!validarVoto(*Auxiliar)){
             capturarVoto();
         }else{
             printf("\nUsted ya ha votado\n");
         }
        break;
     case 2://Revisar estadisticas
	    do{
		opcion = crearMenu("\nElija la opcion que desee\n1)Insertar\n2)Listar\n3)Actualizar\n4)Borrar\n5)Buscar\n6)Salir\n", 6);
		switch(opcion){

	    case 1: //insertar
	    break;

		case 2: //listar
	    break;

		case 3: //actualizar
	    break;

		case 4: //borrar
	    break;

		case 5: //buscar
	    break;

		case 6: //salir
	    break;
	    }

	    }while(opcion>0&&opcion<6);
        break;
      }
      case 3: //salir
            break;
	}while(interfaz>0&&interfaz<3);
		liberarMemoria(mexico);
	return 0;

}
