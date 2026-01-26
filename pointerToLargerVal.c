//  Write a function code that is returning pointer to the larger value out of two passed values.

#include <stdio.h>

int grat(int *, int * );

int main()
{
    int a,b;
    int *p;
    int *q;
    
    p = &a;
    q = &b;
    
    printf("Enter values for a & b: ");
    scanf("%d %d", &a,&b);
    
    grat(p,q);

    return 0;
}
int grat(int *p, int *q)
{
    if (*p > *q)
    {
        printf("greater is %d:\n",*p);
        printf("memory location is: %d", p);
    }
    else
    {
        printf("greater is: %d:\n",*q);
        printf("memory location is: %d",q);
    }
}