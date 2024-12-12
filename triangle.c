//
// Created by lf843 on 11/12/2024.
//
#include <stdio.h>


int trianglear(int base, int height)
{
int area;

    area = (base  * height)/2;

    return area;
}


int main() {
int b, h, a;
    printf("Base: ");
    fflush(stdout);
    scanf("%d", &b);

    printf("Height: ");
    fflush(stdout);
    scanf("%d", &h);

    a = trianglear(b, h);
    printf("The area is %d\n", a);
    return 0;
}

