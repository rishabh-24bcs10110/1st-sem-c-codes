// wap to count no of vovels in a string
// a, e, i, o, and u are 97, 101, 105, 111, and 117,
#include <stdio.h>

int main()
{
    int i,n;
    char a[10];
    int count = 0;
    
    printf("Enter string length:\n");
    scanf("%d", &n);
    
    printf("enter string:\n");
    
    for (i=0; i<n; i++)
    {
        scanf("%c", &a[i]);
    }
    
    for (i=0; i<10; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
        a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            count++;
        }
    }
    
    printf("number of vowels: %d", count);

    return 0;
}