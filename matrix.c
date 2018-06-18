#include <stdio.h>
#include <math.h>

int main()
{
    int order;
    int i,j;
    float a[1][1], b[2][2],iden2[2][2],iden3[3][3], c[3][3],det;
    iden2[1][1]== 1;
    iden2[1][2]== 0;
    iden2[2][1]== 0;
    iden2[2][2]== 1;
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
        // Filling elements in an array
        for(i=0; i< 2; i++)
        {
            for(j=0; j< 2; j++)
            {
                printf("Enter the element a[%d][%d]. \n ",i+1,j+1);
                scanf("%f",&b[i][j]);
            }
        }
        printf("Entered matrix is: \n");
        // Verification of the array given as an input
        for(i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
            {
                printf("%.2f \t",b[i][j]);
            }
            printf("\n");
        }
        // Checking if determinant is zero
        det = (b[1][1]*b[2][2]) - (b[2][1]*b[1][2]);
        if(det == 0)
        {
            printf("Inverse does not exist.");
        }
        else
            {
                // Applying First row transformation
                iden2[1][1]= iden2[1][1] / b[1][1];
                b[1][1]= b[1][1]/ b[1][1];
                b[1][2]= b[1][2]/ b[1][1];
                // Applying Second row transformation
                iden2[2][1]= iden2[2][1] - (b[2][1] * iden2[1][1]);
                iden2[2][2] = iden2[2][2] - (b[2][1] * iden2[1][2]);
                b[2][1]= b[2][1] - (b[2][1] * b[1][1]);
                b[2][2]= b[2][2] - (b[2][1]* b[1][2]);
                // Applying third row operation
                iden2[2][1]= iden2[2][1]/b[2][2];
                iden2[2][2]= iden2[2][2]/b[2][2];
                b[2][1]= b[2][1]/b[2][2];
                b[2][2]= b[2][2]/b[2][2];
                // Applying  Fourth row transformation
                iden2[1][1]= iden2[1][1]- (b[1][2]*iden2[2][1]);
                iden2[1][2]= iden2[1][2]- (b[1][2]*iden2[2][2]);
                b[1][2]= b[1][2] - b[1][2]*b[2][2];
                for(i=0;i<2;i++)
                {
                    for(j=0; j<2; j++)
                    {
                        printf("%.2f \t",iden2[i][j]);
                    }
                    printf("\n");
                }
        }
    }
}
