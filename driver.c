#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    char g[10], m[10];
    char fn[10], ln[10];
    printf("\nEnter your first name:");
    scanf("%s", fn);
    printf("\nEnter your last name:");
    scanf("%s", ln);
    printf("\nEnter your age:");
    scanf("%d", &a);
    printf("\nEnter your gender (male/female):"); 
    scanf(" %s", g);
    printf("\nAre you married? (yes/no):");
    scanf("%s", m);
    if((strcmp(m, "yes") == 0) || 
       (a>30 && strcmp(g, "male") == 0) || 
       (a>25 && strcmp(g, "female") == 0))
        printf("You are insured.");

    else
        printf("\nYou are not insure.");

    
    return 0;
}   
