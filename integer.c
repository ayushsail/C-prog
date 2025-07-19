#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter a number:");
    scanf("%d", &a);
    if(a < 0)
        printf("\nThe number is negative");
        
    else if(a > 0)
        printf("\nThe number is positive");

    else
        printf("\nThe number is zero");  
    return 0;
}
