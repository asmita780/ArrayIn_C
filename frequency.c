// 8. Write a program in C to count the frequency of each element of an array.
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 25
// element - 1 : 12
// element - 2 : 43
// Expected Output :
// The frequency of all elements of an array :
// 25 occurs 1 times
// 12 occurs 1 times
// 43 occurs 1 times 

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int l[n];
    for (int i=0;i<n;i++){
        scanf("%d", &l[i]);
    }
    for (int j=0;j<n;j++){
        if(l[j]!=100){
            int c=1;
            for (int k=j+1;k<n;k++){
                if (l[j]==l[k]){
                    l[k]=100;
                    c++ ;
                }
            }
            printf("%d\n", c);

        }
    }      
    return 0;
}