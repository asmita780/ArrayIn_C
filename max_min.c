// 9. Write a program in C to find the maximum and minimum elements in an array.
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 45
// element - 1 : 25
// element - 2 : 21
// Expected Output :
// Maximum element is : 45
// Minimum element is : 21

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int l[n];
    for(int i=0;i<n;i++){
        scanf("%d", &l[i]);
    }
    int max=l[0];
    for (int j=1;j<n;j++){
        if (max<l[j]){
            max=l[j];
        }
    }int min=l[0];
    for (int j=0;j<n;j++){
        if (min>l[j]){
            min=l[j];
        }
    } 
    printf("%d %d", max,min);
    return 0;                                                                                                                                                                                                                                                 
}