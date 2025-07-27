#include <stdio.h>



int main()

{

   int i, sum=0;

   printf("Numbers between 1 and 300, divisible by 7 : \n");

   for(i=1;i<=300;i++)

   {

     if(i%7==0)

     {

       printf("% 5d",i);

       sum+=i;

     }

   }

   printf("\n\nThe sum : %d \n",sum);

}
