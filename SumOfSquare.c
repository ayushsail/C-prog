#include <stdio.h>
int main() {
    int n, rem, sq = 0;
    printf("\nEnter a number:");
    scanf("%d", &n);
    while (n!=0)
    {
        rem=n%10;
        sq = sq + rem*rem;
        n = n/10;
    }
    printf (" sum of square of digits is %d", sq);

    return 0;
}