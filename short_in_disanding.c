// 12. Write a program in C to sort the elements of the array in descending order.
// Test Data :
// Input the size of array : 3
// Input 3 elements in the array :
// element - 0 : 5
// element - 1 : 9
// element - 2 : 1
// Expected Output :
// Elements of the array in sorted descending order:
// 9 5 1

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int l[n];
    for (int i=0; i<n; i++){
        scanf("%d", &l[i]);
    }
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-1; j++){
            int k=j+1;
            if (l[j]<l[k]){
                int a=l[k];
                l[k]=l[j];
                l[j]=a;
            }
        }
    }
    for (int i=0; i<n; i++){
        printf("%d ", l[i]);
    }
    return 0;
}