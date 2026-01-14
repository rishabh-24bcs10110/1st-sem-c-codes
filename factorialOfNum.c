//WAP to find factorial of a number
#include <stdio.h>

int main()
{
    int n,i;
    int ft=1;
    
    printf("Enter till when to find factorial: ");
    scanf("%d", &n);
    
    if(n<0)
    {
        printf("Invalid! \nEnter value greater or equal to 0");
    }
    
    else
    {
        for (i=1; i<=n; i++)
        {
            ft = ft*i;
        }
        
        printf("The factorial of %d is: %d", n,ft);
    }

    return 0;
}