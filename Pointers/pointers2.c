//
// Created by lego on 3/07/19.
//
#include <stdio.h>
void suma(int a, int b, int *r)
{
    r = a + b;
}
void main()
{
    int x;
    suma(7, 5, &x);
    printf("7 + 5 = %d",x);
}

