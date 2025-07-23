#include<stdio.h>
int main()
{
    int n, i=1, m;
    printf("\nEnter a number:");
    scanf("%d", &n);
    while(i <=10)
    {
        m = n*i;
        printf("\n%d * %d = %d", n, i, m);
        i++;
    }

}