//a program to find sum of five numbers
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a1;
    int a2;
    int a3;
    int a4;
    int a5;
    int sum;


    printf("enter first number\n");
    scanf("%d",&a1);

    printf("enter second number\n");
    scanf("%d",&a2);

    printf("enter third number\n");
    scanf("%d",&a3);

    printf("enter fourth number\n");
    scanf("%d",&a4);

    printf("enter fifth number\n");
    scanf("%d",&a5);

    sum = a1 + a2 + a3 + a4 + a5 ;
    printf("the sum of the five digits is %d",sum);
    return 0;
}
