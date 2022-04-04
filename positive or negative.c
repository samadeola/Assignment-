//program to show a number is positive or negative
#include<stdio.h>
int main()
{
double num;
printf("enter a number:");
scanf("%if",&num);
if(num <=0.0)
{
if(num==0.0)
printf("enter 0");
else
printf("enter a negative number.");
}
else
printf("enter a positive number.");
return 0;
}
    