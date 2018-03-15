#ifndef ESTADO_H_INCLUDED
#define ESTADO_H_INCLUDED
#define N 20

typedef struct{
    char calle[N];
    int numero;
    char colonia[N];
}Direccion;

typedef struct{
    char nombres[N];// Nombre y apellido no tienen longitud definida
    char apellidos[N];
    Direccion dir_persona;
    char CURP[18]; //El numero de cartacteres del curp y la clave de elector es igual siempre
    char clave_de_elector[18];
    int genero;
}Ciudadano;

typedef struct{
    char nombreMunicipio;
    Ciudadano votantes[50]; //50 votantes por cada municipio
}Municipio;

typedef struct{
    char nombreDistrito[N];
    Municipio municipios[10];
}Distrito;

typedef struct{
    char nombreEstado[N];
    Distrito distritos[300];
}Estado;

#endif // ESTADO_H_INCLUDED
