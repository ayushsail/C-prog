#include <stdio.h>

int main()
{
    int a, b, c;
    printf("\nEnter three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    if(a > b && a > c){
        printf("\n%d is greatest of three", a);
    }
    else if(b > a && b > c){
        printf("\n%d is greatest of three", b);
    }
    else if(c > a && c > b){
        printf("\n%d is greatest of three", c);
    }
    else{
        printf("\nInvalid statement");
    }
    return 0;
}
