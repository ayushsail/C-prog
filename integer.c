#include <stdio.h>

int main()
{
    int a;
    printf("\nEnter a number:");
    scanf("%d", &a);
    if(a==0){
        printf("\nThe number is zero.");
    }
    else if(a>0){
        printf("\nThe number is positive.");
    }
    else if(a<0){
        printf("\nThe number is negative.");
    }
    else{
        printf("\nInvalid number.");
    }
    return 0;
}

