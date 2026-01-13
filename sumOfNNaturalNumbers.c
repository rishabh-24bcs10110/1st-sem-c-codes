//WAP to print sum of n Natural numbers
#include <stdio.h>

int main()
{
    int n,i;
    int sum =0;
    printf("Enter till when to print: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    
    printf("%d", sum);

    return 0;
}
