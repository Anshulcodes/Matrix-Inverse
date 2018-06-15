#include <stdio.h>
#include <math.h>

int main()
{
    int order;
    int i,j;
    float a[1][1], b[2][2], c[3][3];
    printf("Enter the order of matrix.\n");
    scanf("%d",&order);
    switch (order)
    {
    case 1:
        printf("Enter the element.\n");
        scanf("%f",&a[1][1]);
        if(a[1][1]== 0)
        {
            printf("Inverse doesn't exist.");
        }
        else{
            printf("Inverse of the matrix is %.2f ", 1/a[1][1]);
        }
    case 2:
        for(i=1; i<= 2; i++)
        {
            for(j=1; j<= 2; j++)
            {
                printf("Enter the element a%d%d \n ",i,j);
                scanf("%f",&a[i][j]);
            }
        }
    }
}
