// add 2 array and store them in 3rd aaray (2d)

#include <stdio.h>

int main()
{
    int i,j;
    int a[2][2],b[2][2],c[2][2];
    
    printf("Enter matrix 1: \n");
    
    for(int i=0; i<2; i++) {
        for(int j = 0; j<2; j++) {
        scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter matrix 2: \n");
    for(int i=0; i<2; i++) {
        for(int j = 0; j<2; j++) {
        scanf("%d", &b[i][j]);
        }
    }
    
        printf("The addition is:\n");  
        for(int i=0; i<2; i++) {
            for(int j = 0; j<2; j++) {
                c[i][j] = a[i][j] + b[i][j];
                }
            }
                
             
        for(int i=0; i<2; i++) {
            for(int j = 0; j<2; j++) {
                printf("%d  ", c[i][j]);
                } printf("\n"); }

    return 0;
}