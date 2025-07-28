#include <stdio.h>

int main() {
    int n, sum=0, i=0;
    printf("\nEnter a number:");
    scanf("%d", &n);
    while(i<=n)
    {
        sum = sum + i;
        i++;
        
    }
    printf("%d", sum);

    return 0;
}