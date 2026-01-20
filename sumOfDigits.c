//WAP to find sum of digits of a number
#include <stdio.h>

int main()
{
    int a;
    int sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &a);
        
    while(a!= 0)
    {
        sum = sum + (a%10);
        a = a/10;
    }
    
    printf("The sum of digits is: %d", sum);
    
    return 0;
}