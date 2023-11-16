// 16. Write a program in C to find the second largest element in an array.
// Test Data :
// Input the size of array : 5
// Input 5 elements in the array :
// element - 0 : 2
// element - 1 : 9
// element - 2 : 1
// element - 3 : 4
// element - 4 : 6
// Expected Output :
// The Second largest element in the array is : 6

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int l[n];
    for (int i=0; i<n; i++){
        scanf("%d", &l[i]);
    }
    int max=l[0];
    int smax=l[0];
    for (int j=0; j<n; j++){
        if (max<l[j]){
            smax=max;
            max=l[j];
        }
        else{
            if (smax<l[j]){
            smax=l[j];
            }
        }
    }
    printf("%d", smax);
    return 0;
}