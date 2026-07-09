#include <stdio.h>
int main()
{
  int hindi, english, math, physics, sum;
  printf("enter the marks of hindi:");
  scanf("%d", &hindi);
  printf("enter the marks of english:");
  scanf("%d", &english);
  printf("enter the marks of math:");
  scanf("%d", &math);
  printf("enter the marks of physics:");
  scanf("%d", &physics);
  sum = hindi + english + math + physics;
  printf("the total marks of %d", sum);
}