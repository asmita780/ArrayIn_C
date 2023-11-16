#include <stdio.h>

int main (void)
{
    float a;
    int q;

    printf("\nInsert number\t");
    scanf("%f",&a);

    q=(int)a;
    ++q;

    if((q - a) != 1)
        printf("\nThe number is not an integer\n\n");
    else
        printf("\nThe number is an integer\n\n");

    return 0;
}