//a program that accepts two integers from the user and calculate the product
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int integer1;
    int integer2;
    int product;


    printf("enter first integer\n");
    scanf("%d",&integer1);

    printf("enter second number\n");
    scanf("%d",&integer2);

    product = integer1 * integer2 ;
    printf("the product of the integers is %d",product);
    return 0;
}
