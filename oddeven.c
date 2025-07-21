#include <stdio.h>

int main() {
    int a;
    printf("\nEnter a number:");
    scanf("%d", &a);
    if((a%2) == 0)
    {
        printf("The number is even.");
        
    }
    else if(a != 0)
    {
        printf("The number is Zero");
    }
    else
    {
        printf("Thr number is odd.");
    }
    return 0;
}
