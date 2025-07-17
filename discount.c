#include<stdio.h>

void main()
{
    int q;
    float p, tp, d;
    printf("\nEnter the quantity of Pens:");
    scanf("%d", &q);
    printf("\nEnter the price of One Pen:");
    scanf("%f", &p);
    tp = p*q;
    if(tp < 1000)
    {
        printf("\nFinal Price is %f", tp);
    }
    else
    {
        d=0.20;
        printf("\nYou get a discount of 20 percent ");
        printf("\nTotal price before discount is %f", tp);
        printf("\nFinal price is %f", tp*(1-d));

    }

}