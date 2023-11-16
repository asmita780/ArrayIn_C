// 15. Write a program in C to delete an element at a desired position from an array.
// Test Data :
// Input the size of array : 5
// Input 5 elements in the array in ascending order:
// element - 0 : 1
// element - 1 : 2
// element - 2 : 3
// element - 3 : 4
// element - 4 : 5
// Input the position where to delete: 3
// Expected Output :
// The new list is : 1 2 4 5

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int l[n];
    for (int i=0; i<n; i++){
        scanf("%d", &l[i]);
    }
    int k;
    scanf("%d", &k);
    // possion of delet element....
    int a=k-1;
    for (int j=a; j<n; j++){
        l[j]=l[j+1];
    }
    for (int i=0; i<n-1; i++){
        printf("%d ", l[i]);
    }
    return 0;
}