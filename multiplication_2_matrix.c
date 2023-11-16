// 21. Write a program in C for the multiplication of two square matrices.
// Test Data :
// Input the rows and columns of first matrix : 2 2
// Input the rows and columns of second matrix : 2 2
// Input elements in the first matrix :
// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [1],[0] : 3
// element - [1],[1] : 4
// Input elements in the second matrix :
// element - [0],[0] : 5
// element - [0],[1] : 6
// element - [1],[0] : 7
// element - [1],[1] : 8
// Expected Output :
// The First matrix is :
// 1 2
// 3 4
// The Second matrix is :
// 5 6
// 7 8
// The multiplication of two matrix is :
// 19 22
// 43 50 

#include <stdio.h>
int main(){
    
    int r,c;
    int l[r][c];
    scanf("%d %d", &r, &c);
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            scanf("%d", &l[i][j]);
        }
    }
    int r1,c1;
    scanf("%d %d", &r1, &c1);
    int l1[r1][c1];
    for (int i=0; i<r1; i++){
        for (int j=0; i<c1; j++){
            scanf("%d", &l1[i][j]);
        }
    }
    int array[r][c1];
    for (int i=0;i<r; i++){
        int sum=0;
        for (int j=0; j<c1; j++){
            for (int k=0; k<r1; k++){
                int mul= l[i][k]*l1[k][j];
                sum+=mul;

            }
        }
        array[i][i]=sum;
    }
    for (int i=0; i<r; i++){
        for(int j=0; j<c1; j++){
            printf("%d", array[i][j]);
        }
    }
    return 0;
}