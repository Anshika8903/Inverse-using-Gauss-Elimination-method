#include<stdio.h>
void main()
{
    int i,j,k,n;
    float A[20][20],x[20],r;
    printf("enter the order of matrix: ");
    scanf("%d",&n);
    printf("\nenter the coefficient of matrix ");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%f",&A[i][j]);

        }
    }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i==j)
                {
                    A[i][j+n]=1;
                }
                else
                {
                    A[i][j+n]=0;
                }
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i!=j)
                {
                    r=A[j][i]/A[i][i];
                    for(k=1;k<=2*n;k++)
                    {
                        A[j][k]=A[j][k]-r*A[i][k];
                    }

                }

            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=n+1;j<=2;j++)
            {
                A[i][j]=A[i][j]/A[i][i];
            }
        }
            printf("\nINVERSE OF THE MATRIX IS\n:");
            for(i=1;i<=n;i++)
            {
                for(j=n+1;j<=2*n;j++)
                {
                    printf("%f\t",A[i][j]);
                }
                printf("\n");
            }
        }



