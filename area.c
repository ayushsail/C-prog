#include <stdio.h>
#define pi 3.14
void main(){
    printf("AREA CALCULATOR\n");
    float l, b, r, s, a;
    // Calculating area of rectangle
    printf("Enter the length of rectangle:");
    scanf("%f",&l);
    printf("\nEnter the breadth of rectangle:");
    scanf("%f",&b);
    a=l*b;
    printf("\nArea of rectangle is %f", a);
    // Calculating area of circle
    printf("\nEnter the radius of circle:");
    scanf("%f",&r);
    a=pi*r*r;
    printf("\nArea of circle is %f", a);
    // Calculating area of square
    printf("\nEnter the side of square:");
    scanf("%f",&s);
    a=s*s;
    printf("\nArea of square is %f", a);
    
}
