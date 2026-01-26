// wap to find sum and avg of odd integers b/w 1 - 300 which are divisible by 7

#include <stdio.h>

int main()
{
    int i;
    int sum = 0, count = 0;
    float x;
    
    
    for(i=1; i<300; i++)
    {
        if(i%2 == 0)
        continue;
        
        else if(i%7 == 0)
        {
            sum = sum + i;
            count++;
        }
    }
    
    x = sum/count;
    
    printf("The sum is: %d\n", sum);
    printf("The avg is: %.1f", x);
    

    return 0;
}