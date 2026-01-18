//WAP to find elements is pressent in ayyar or not

#include <stdio.h>

int main()
{ 
    int a[5];
    int i,n;
    
    printf("Entter values of arays \n");
    
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Enter number to find: ");
    scanf("%d", &n);
    
    for (i=0; i<5; i++)
    {
        if(n != a[i]) {
        printf("It is not present \n"); }
        
        // else if (n == a[i] {
        //     printf("It is present \n");
        // }

        // break;
        
        // if(n != a[i]) {
        // printf("It is not present \n"); }
        // break;
    }
     
    return 0;
}