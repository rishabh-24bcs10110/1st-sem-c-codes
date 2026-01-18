// to find mx min inside array
#include <stdio.h>

int main()
{
    int i;
    int a[5];
    int min;
    
    printf("Enter vlaues for array \n");
    
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    
    min = a[0];
    
    for (i=0; i<5; i++)
    {
        if (min > a[i])
        {
            min = a[i];  // '=' working is left to right => valuenof a[i] will go to min
        }
    }
    
    printf("The minimum element of arry is %d", min);

    return 0;
}