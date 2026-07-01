#include<stdio.h>
int main(){
    int num;
    printf("enter e number: ");
    scanf("%d",&num);
    if (num<0)
    {
      num=num*(-1);
    }
    printf("the absolute value is : %d",num);

}