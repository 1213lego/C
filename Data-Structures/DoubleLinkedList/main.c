//
// Created by lego on 3/07/19.
//
#include <stdio.h>
#include "double-linked-list.h"
typedef struct {
    char *nombre;
    int edad;
} Data;
void testInt();
void intIterator(void *data);
void testStruct();
void structIterator(void *data);
void testChar();
void charIterator(void *data);
int main(){
    //testInt();
    //testChar();
    testStruct();
    return 0;
}
void testInt(){
    printf("Testing DoubleLinkedList with int\n");
    int element=9;
    DoubleLinkedList *list=createList(sizeof(element));

    printf("\tTesting adding at first\n");
    printf("\tAdding at first int= %d, result= %s \n",element,addAtFirst(list,&element)==true? "true": "false");
    printf("\tListSize %d\n",getSize(list));
    int *data=getFirst(list);
    printf("\tFirst element %d\n",*data);
    int element1=50;
    printf("\tAdding at first int= %d, result= %s\n",element1,addAtFirst(list,&element1)==true? "true": "false");
    printf("\tListSize %d\n",getSize(list));
    data=getFirst(list);
    printf("\tFirst element %d\n",*data);

    printf("\n\tTesting adding append\n");
    int element2=100;
    printf("\tAdding at append int= %d, result= %s\n",element2,addAtAppend(list,&element2)==true? "true": "false");
    printf("\tListSize %d\n",getSize(list));
    data=getAppend(list);
    printf("\tLast element %d\n",*data);
    int element3=200;
    printf("\tAdding at append int= %d, result= %s\n",element3,addAtAppend(list,&element3)==true? "true": "false");
    printf("\tListSize %d\n",getSize(list));
    data=getAppend(list);
    printf("\tLast element %d\n",*data);

    printf("\n\tIterating the DoubleLinkedList\n\t");
    interateList(list,intIterator);
}
void intIterator(void *data){
    printf("%d ",*(int*)data);
}
void testStruct(){
    printf("Testing DoubleLinkedList with struct\n");
    DoubleLinkedList *list=createList(sizeof(Data));
    Data element;
    element.nombre="sdsd";
    element.edad=20;
    printf("\tTesting adding at first\n");
    printf("\tAdding at first struct{ nombre= %s, edad= %d}, result= %s \n",element.nombre,element.edad,addAtFirst(list,&element)==true? "true": "false");
    printf("\tListSize %d\n",getSize(list));
    Data *data=getFirst(list);
    printf("\tFirst element Nombre: %s, edad: %d \n",data->nombre,data->edad);

}
void structIterator(void *data){
    Data *dataStruct=data;
    printf("Nombre: %s, edad: %d; ",dataStruct->nombre,dataStruct->edad);
}
void testChar(){
    printf("Testing DoubleLinkedList with char\n");
    char *element="asd";
    DoubleLinkedList *list=createList(sizeof(element));

    printf("\tTesting adding at first\n");
    printf("\tAdding at first char= %s, result= %s \n",element,addAtFirst(list,&element)==true? "true": "false");
    printf("\tListSize %d\n",getSize(list));
    void *data=getFirst(list);
    printf("\tFirst element %s\n",*(char **)data);
    void *element1="ghj";
    printf("\tAdding at first char= %s, result= %s\n",element1,addAtFirst(list,&element1)==true? "true": "false");
    printf("\tListSize %d\n",getSize(list));
    data=getFirst(list);
    printf("\tFirst element %s\n",*(char **)data);

    printf("\n\tTesting adding append\n");
    void *element2="piiuuu";
    printf("\tAdding at append char= %s, result= %s\n",element2,addAtAppend(list,&element2)==true? "true": "false");
    printf("\tListSize %d\n",getSize(list));
    data=getAppend(list);
    printf("\tLast element %s\n",*(char **)data);
    void *element3="rty";
    printf("\tAdding at append char= %s, result= %s\n",element3,addAtAppend(list,&element3)==true? "true": "false");
    printf("\tListSize %d\n",getSize(list));
    data=getAppend(list);
    printf("\tLast element %s\n",*(char **)data);

    printf("\n\tIterating the DoubleLinkedList\n\t");
    interateList(list,charIterator);
}
void charIterator(void *data){
    printf("%s ",*(char **)data);
}

