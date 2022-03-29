//a program to find area of a circle
#include <stdio.h>
#define PIE 3.142
int main()
{
    float radius;
  float area;
  printf("input radius");
  scanf("%f",&radius);
  area = PIE*radius*radius;
    printf("area of the circle:%f",area);
    return 0;
  }
