//
// Created by lego on 3/07/19.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char nombre[20];
    int edad;
} Data;
typedef int mi_int;
typedef char string[100];
typedef int boolean;
Data* createData(char nombre[20], int edad){
    Data *p_data;
    p_data = (Data*) malloc(sizeof(Data)); // Reservaci ́on de memoria para un registro
    if (p_data != NULL)                    // Verificaci ́on de reservaci ́on
    {
        stpcpy(p_data->nombre,nombre);
        p_data->edad=edad;
    }
    return p_data;
}
int main(){
    Data *p_data= createData("Luis Granada",20);
    printf("Direccion en memoria %u con lenght %d",p_data, sizeof(*p_data));
    printf("\nNombre: %s, edad: %d",p_data->nombre,p_data->edad);
    free(p_data);
    string asd="dsds";
    boolean es=0;
}
