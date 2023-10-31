//Write a function to add two matrices of order m x n. also write the main program
//which can read the values of the matrices and print the resultant matrix.

#include<stdio.h>
void add(int mat1[3][3],int mat2[3][3],int ,int );
 
void main()
{
    int mat1[3][3],mat2[3][3];
    int i,j,k,m,n;
    printf("Enter the number of rows and columns for 1st and 2nd matrix\n");
    scanf("%d%d",&m,&n);
    
    printf("Enter the elements of the 1st matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the elements of the 2nd matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    
    printf("The 1st matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }
    printf("The 2nd matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }
    add(mat1,mat2,m,n);
}
 
void add(int mat1[3][3],int mat2[3][3],int m,int n)
{
    int addition[3][3],i,j,k;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                addition[i][j]=mat1[i][j]+mat2[i][j];
            }
        }
    }
    printf("The resultant matrix formed on multiplying the two matrices\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",addition[i][j]);
        }
        printf("\n");
    }
}
