//program to display cube of numbers
#include<stdio.h>
void main()
{
int i,ctr;
printf("input the number of terms\n:");
scanf("%d",&ctr);
for(i=1;i<=ctr;i++)
{
printf("number is :%d and cube of the %d is :%d\n",i,i,(i*i*i));;
}
}