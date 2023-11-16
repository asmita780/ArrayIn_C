// 17. Write a program in C to find the second smallest element in an array.
// Test Data :
// Input the size of array : 5
// Input 5 elements in the array (value must be <9999) :
// element - 0 : 0
// element - 1 : 9
// element - 2 : 4
// element - 3 : 6
// element - 4 : 5
// Expected Output :
// The Second smallest element in the array is : 4

// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n);
//     int l[n];
//     for (int i=0; i<n; i++){
//         scanf("%d", &l[i]);
//     }
//     int min=l[0];
//     int smin=l[0];
//     for (int j=0; j<n; j++){
//         if (min>l[j]){
//             smin=min;
//             min=l[j];
//         }
//         else{
//             if( smin>l[j] ){
//                 smin=l[j];
//             }
//         }
//     }
//     printf("%d", smin);
//     return 0;
// }

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int l[n];
    for(int i=0; i<n; i++){
        scanf("%d", &l[i]);
    }
    for (int i=0;i<n-1;i++){
    for (int j=0; j<n; j++){
        if (l[j]>l[j+1]){
            int a=l[j];
              l[j]=l[j+1];
              l[j+1]=a;
        }
    }
    }
     printf("%d", l[1]);
     return 0;
}