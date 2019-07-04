//
// Created by lego on 3/07/19.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char *nombre;
    int edad;
} Data;
int main(){
    int x=8;
    char *texto = "Un texto";
    void *genericPointer;
    genericPointer=&x;
    printf("%d\n",*(int*)genericPointer);
    genericPointer=texto;
    printf("%s\n",(char*) genericPointer);


    //

    Data *data= (Data*)malloc(sizeof(Data));
    data->nombre=&("Luis Granada");
    data->edad=20;
    printf("Nombre %s\n",data->nombre);
    void *copy= malloc(sizeof(Data));
    memcpy(copy,data, sizeof(Data));
    printf("Nombre copy generic %s\n",((Data*)copy)->nombre);
}


