#include <stdio.h>

void main()
{
    float m1, m2, m3, m4, m5, r;
    printf("Enter marks in ENG:");
    scanf("%f", &m1);
    printf("Enter marks in MATH:");
    scanf("%f", &m2);
    printf("Enter marks in SCI:");
    scanf("%f", &m3);
    printf("Enter marks in HIST:");
    scanf("%f", &m4);
    printf("Enter marks in GEO:");
    scanf("%f", &m5);
    
    if ((m1 < 0 || m1 > 100) || 
        (m2 < 0 || m2 > 100) || 
        (m3 < 0 || m3 > 100) || 
        (m4 < 0 || m4 > 100) || 
        (m5 < 0 || m5 > 100)) 
    {
        printf("Invalid marks entered. Please enter marks between 0 and 100.");
    } 
    else 
    {
        r = (m1 + m2 + m3 + m4 + m5) / 5;
        printf("Percentage is %f",r);
        if(r>=60)
        printf("Grade A");
        else if(r>=50)
        printf("Grade B");
        else if(r>=40)
        printf("Grade C");
        else
        printf("Fail");

    }
}