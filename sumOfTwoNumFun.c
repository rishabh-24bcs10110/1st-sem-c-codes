// wap to sum 2 numbers by making own function

#include <stdio.h>

int sum(int a, int b);

int main()
{
    int a,b,x;
    printf("Enter a and b: ");
    scanf("%d%d", &a,&b);
    
    x = sum(a,b);
    
    printf("The sum of a nd b is: %d", x);

    return 0;
}

int sum(int a, int b)
{
    int z;
    z = a+b;
    return z;
}