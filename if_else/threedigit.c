#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    if (n>99 && n<1000)
    {
        printf("it is the three digit number");
    }
    else{
        printf("it is not the three digit number");
    }
    
}