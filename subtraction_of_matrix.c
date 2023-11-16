// 20. Write a program in C for the subtraction of two matrices.
// Test Data :
// Input the size of the square matrix (less than 5): 2
// Input elements in the first matrix :
// element - [0],[0] : 5
// element - [0],[1] : 6
// element - [1],[0] : 7
// element - [1],[1] : 8
// Input elements in the second matrix :
// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [1],[0] : 3
// element - [1],[1] : 4
// Expected Output :
// The First matrix is :
// 5 6
// 7 8
// The Second matrix is :
// 1 2
// 3 4
// The Subtraction of two matrix is :
// 4 4
// 4 4

#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d ", &r, &c);
    int array[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    int array2[r][c];
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            scanf("%d", &array2[i][j]);
        }
    }
    // subtracet arrar, array2 and storated in seprate matrix
    int sub[r][c];
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            sub[i][j]=array[i][j]- array2[i][j];

        }

    }
    for (int k=0; k<r; k++)
    {
        for (int p=0; p<c; p++)
        {
            printf("%d ", sub[k][p]);
        }
        printf("\n");
    }
    return 0;

}