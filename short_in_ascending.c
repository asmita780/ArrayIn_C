// 11. Write a program in C to sort elements of an array in ascending order.
// Test Data :
// Input the size of array : 5
// Input 5 elements in the array :
// element - 0 : 2
// element - 1 : 7
// element - 2 : 4
// element - 3 : 5
// element - 4 : 9
// Expected Output :
// Elements of array in sorted ascending order:
// 2 4 5 7 9
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
            if (l[j]>l[k]){
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