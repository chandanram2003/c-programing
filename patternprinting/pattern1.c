#include<stdio.h>
int main(){
    int n;
    printf("enter the no of rows and column: ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int i = 1; i <=n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}