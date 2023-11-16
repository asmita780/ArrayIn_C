// 19. Write a program in C for adding two matrices of the same size.
// Test Data :
// Input the size of the square matrix (less than 5): 2
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
// The Addition of two matrix is :
// 6 8
// 10 12 

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int l[n][n];
    int l1[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%d", &l[i][j]);
        }
    }
    // printf("\n");
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%d", &l1[i][j]);
        }
        // printf("\n");
    }
    for (int k=0; k<n; k++){
        for (int p=0; p<n; p++){
            int sum=l[k][p]+l1[k][p];
            printf("%d ", sum);
        }
        printf("\n");
    }
    return 0;
}