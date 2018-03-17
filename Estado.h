#ifndef ESTADO_H_INCLUDED
#define ESTADO_H_INCLUDED
#define N 20

typedef struct{
    char *calle;
    int numero;
    char *colonia;
}Direccion;

typedef struct{
    char *nombres;// Nombre y apellido como apuntadores
    char *apellidos;
    Direccion *dir_persona; //La estructura Direccion dentro de ciudadano se creara de manera dinamica
    char CURP[18]; //El numero de cartacteres del curp y la clave de elector es igual siempre
    char clave_de_elector[18];
    int genero;
    int voto;
}Ciudadano;

typedef struct{
    char nombreMunicipio[N];
    Ciudadano *votantes; //El numero de votantes se creara de manera dinamica
}Municipio;

typedef struct{
    char nombreEstado[N];
    Municipio municipios[10];
}Estado;

void inicializarSistema(Estado *mexico);
Ciudadano *crearCiudadano(int numVotantes);
void liberarMemoria(Estado *mexico);

#endif // ESTADO_H_INCLUDED
