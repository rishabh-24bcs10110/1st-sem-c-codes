#include<stdio.h>
int main() {
int i;
// Iterate from ASCII number 32 to 126
for (i = 32; i <= 126; i++)
    {
        printf("ASCII %d: %c\n", i, (char)i);

    }



    return 0;

}
