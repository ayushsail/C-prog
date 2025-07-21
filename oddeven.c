#include<stdio.h>

int main()
{
    int a;
    printf("\nEnter a number:");
    scanf("%d", &a);
    if (a==0){
        printf("\nThe number is zero.");
        return 0;
    }
    else if((a%2)==0){
        printf("\nThe number is even.");
    }
    else if((a%2)!=0){
        printf("\nThe number is odd.");
    }
    else{
        printf("\nInvalid input");
    }
    return 0;
}

