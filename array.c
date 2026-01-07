#include<stdio.h>

void display(int *a, int n);
void findsum(int *a, int n);
void findmax(int *a, int n);

void main(){
    int arr[50], n, choice;
    int *ptr;
    printf("Enter a number of elements:");
    scanf("%d", &n);
    
    printf("Enter elements:\n");
    for(int i=0;i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    ptr = arr; 
    do{
        printf("\n MENU");
        printf("\n 1.Display array");
        printf("\n 2.Find sum");
        printf("\n 3.find Maximum");
        printf("\n 4.Exit");
        printf("\n Enter choice:");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
            display(ptr, n);
            break;
            
            case 2:
            findsum(ptr, n);
            break;
            
            case 3:
            findmax(ptr, n);
            break;
            
            case 4:
            printf("Exiting...");
            break;
            
            default:
            printf("Invalid Choice");
            
        }
        
    }while(choice !=4);
    
}

// Display array using pointer
void display(int *a, int n){
    printf("Array elements:");
    for(int i=0;i<n;i++){
        printf("%d\t",*(a+i));
    }
    printf("\n");
}

// Find sum using pointer
void findsum(int *a,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + *(a+i);
    }
    printf("Sum = %d\n",sum);
}

// Find maximum using pointer
void findmax(int *a,int n){
    int max=*a;
    for(int i=1;i<n;i++){
        if(*(a+i)>max)
            max = *(a+i);
    }
    printf("Maximum Elements = %d\n", max);
}
