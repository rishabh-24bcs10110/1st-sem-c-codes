// pow no of digit
#include <stdio.h>
#include <math.h>
int main()
{
        int t,c=0,nl,ul,r=0;
         int arm=0;
        printf("Enter Lower Limit:-");
        scanf("%d",&nl);
        printf("Enter Upper Limit:-");
        scanf("%d",&ul);
        for(int i=nl;i<=ul;i++)
        {
            t=i;
            arm=0;
            c=0;
            for(int k=i;k!=0;k=k/10)
            {
                c=c+1;
            }
            int j=i;
            while(j!=0)
            {
                r=j%10;
                arm=arm+(pow(r,c));

                j=j/10;
            }
            if(arm==t)
                printf("%d \n",arm);

        }

}
