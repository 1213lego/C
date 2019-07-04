#include <stdio.h>
void swap(int a, int b);
void swapWithPointers(int *a, int *b);
int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(x, y);
    //swapWithPointers(&x, &y);
    printf("x is %i, y is %i\n", x, y);
    int lista_arr[5] = {10, 20, 30, 40, 50};
    int *lista_ptr;
    lista_ptr = lista_arr;
    printf("Sizeof(lista_arr) %d", sizeof(lista_arr));
    printf("\nSizeof(lista_ptr) %d", sizeof(lista_ptr));
    printf("\nLenght de lista_arr %d", sizeof(lista_arr)/ sizeof(*lista_arr));
    printf("\nLenght de lista_ptr %d", sizeof(lista_ptr)/ sizeof(*lista_ptr));
    printf("\nImprimiendo lista_ptr\n");
    for (int i = 0; i < 5; ++i) {
        printf("Elemento %d con direccion en memoria %u , con el valor %d \n",i,lista_ptr+i,*(lista_ptr+i));
    }
}
void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
void swapWithPointers(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}