#include<stdio.h>
int main()
{
    int n, i=1, f=1;
    printf("\nEnter a number:");
    scanf("%d", &n);
    while(i<=n)
    {
        f = f*i;
        i++;
    }
    printf("%d", f);
    return 0;
    
}   