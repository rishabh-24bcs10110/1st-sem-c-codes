// wap to find factorial of number using recursion

#include <stdio.h>

int fact(int n);

int main()
{
    int n,x;
    printf("enter till when to find factorial: ");
    scanf("%d", &n);
    
    x = fact(n);
    
    printf("the factorial of %d is: %d", n,x);

    return 0;
}

int fact(int num)
{
    if(num <= 1)
    return 1;
    
    else
    return num*fact(num-1);
}
