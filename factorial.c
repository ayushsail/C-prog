#include<stdio.h>
int main()
{
    float n, i=1, f=1;
    printf("\nEnter a number:");
    scanf("%f", &n);
    while(i<=n)
    {
        f = f*i;
        i++;
    }
    printf("%f", f);
    return 0;
    
}   