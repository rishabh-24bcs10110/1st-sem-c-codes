//WAP to print fibonacii series
//Fibonacii series is 0 1 1 2 3 5 8 13 21 34 55 89...

#include <stdio.h>

int main()
{
    int n,i;
    int f0 = 0, f =0;
    int f1 = 1;
    
    printf("Enter till when to end series: ");
    scanf("%d", &n);
    
    printf("%d %d ",f0,f1);
    
    for (i=1; i<=n; i++)
    {
        f = f0 + f1;
        
        printf("%d ", f);
        
        f0=f1;
        f1=f;
    }
    
    return 0;
}