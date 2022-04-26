//Function to find sum of 2 numbers
#include<stdio.h>
int add (int x,y);//function prototype
int main()
{
int a,b,sum;
printf("Enter the first number:\n");
scanf("%d",&a);
printf("Enter the second number:\n");
scanf("%d",&b);
sum= a+b;// calling function
printf("\n The sum of %d and %d is %d",a,b, add(a,b));
 return 0;
}
int add(int x, y)// function definition
{
int sum;
sum=x+y;
return( sum);
}