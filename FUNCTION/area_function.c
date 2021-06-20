#include<stdio.h>
float findarea(float,float);
float findperimeter(float,float);
int main()
{
  float l,b,area,perimeter;
  printf("LENGTH: ");
  scanf("%f",&l);
  printf("BREADTH: ");
  scanf("%f",&b);
  area = findarea(l,b);
  printf("AREA = %f\n",area);
  perimeter = findperimeter(l,b);
  printf("PERIMETER = %f\n",perimeter);
}
float findarea(float l, float b)
{
  float area;
  area = l*b;
  return area;
}
float findperimeter(float l,float b)
{
  float perimeter;
  perimeter = 2*(l+b);
  return perimeter;
}
