//function to convert degrees to Fahrenheit
#include<stdio.h>
float degrees(float temp);
float fahrenheit(float temp);
int main ()
{
float input,output,output_2;
printf("enter the temp number\n");
scanf("%f",&input);
output=degrees(input);
output_2=fahrenheit(input);
printf("\n temp of %.2f in degrees is%.2f",input,output);
printf("\n temp of %.2f in Fahrenheit is%.2f",input,output_2);
return 0;
}
float degrees(float temp)
{ 
float degrees_temp;
degrees_temp=temp;
return degrees_temp;
}
float fahrenheit(float temp)
{
float fahrenheit_temp;
fahrenheit_temp=temp*9/5+32;
return fahrenheit_temp;
}