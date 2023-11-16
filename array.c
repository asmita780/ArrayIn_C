// 1. Write a program in C to store elements in an array and print them.

// #include <stdio.h>
// int main(){
//     int k;
//     scanf("%d", &k);
//     int n[k];
//     for(int i=0;i<k;i++){
//         scanf("%d", &n[i]);
//     }
//     printf("%ls", n);
//     for(int j=0; j<k; j++){
//         printf("%d ", n[j]);
//     }
//     return 0;
// }

// 2. Write a program in C to read n number of values in an array and display them in reverse order.
// Test Data :
// Input the number of elements to store in the array :3
// Input 3 number of elements in the array :
// element - 0 : 2
// element - 1 : 5
// element - 2 : 7
// Expected Output :
// The values store into the array are :
// 2 5 7
// The values store into the array in reverse are :
// 7 5 2

// #include <stdio.h>
// int main(){
//     int n;
//     int l[n];
//     scanf("%d", &n);
//     for (int i=0;i<n;i++){
//         scanf("%d", &l[i]);
//     }
//     for (int j=n-1;j>=0;j--){
//         printf("%d", l[j]);
//     }
//     return 0;
// }

// 3. Write a program in C to find the sum of all elements of the array.
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 2
// element - 1 : 5
// element - 2 : 8
// Expected Output :
// Sum of all elements stored in the array is : 15

// #include <stdio.h>
// int main(){
//     int n;
//     int sum;
//     scanf("%d", &n);
//     int l[n];
//     for (int i=0;i<n;i++){
//         scanf("%d", &l[i]);
//     }
//     for(int j=0;j<n;j++){
//         sum+=l[j];
//     }
//     printf("%d",sum);
//     return 0;
// }

// 4. Write a program in C to copy the elements of one array into another array.
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 15
// element - 1 : 10
// element - 2 : 12
// Expected Output :
// The elements stored in the first array are :
// 15 10 12
// The elements copied into the second array are :
// 15 10 12

// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int l[n];
//     int l1[n];
//     for (int i=0; i<n; i++){
//         scanf("%d", &l[i]);
//     }
//      for (int k=0; k<n; k++){
//         printf("%d ", l[k]);
//     }
//     for (int j=0; j<n; j++){
//         l1[j]=l[j];
//     }
//     printf("\n");
//     for (int k=0; k<n; k++){
//         printf("%d ", l1[k]);
//     }
//     return 0;
// }

// 5. Write a program in C to count the total number of duplicate elements in an array.
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 5
// element - 1 : 1
// element - 2 : 1
// Expected Output :
// Total number of duplicate elements found in the array is : 1

// #include <stdio.h>
// int main(){
//     int n;
//     int count=0;
//     scanf("%d", &n);
//     int l[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &l[i]);
//     }for (int j=0; j<n; j++){
//         if(l[j]!=100){
//             int c=0;
//             for (int k=j+1;k<n;k++){
//                 if(l[j]==l[k]){
//                     l[k]=100;
//                     c=1;
//                 }
//             }if (c==1){
//                 count+=1;
//             }
//         }
//     }
//     printf("%d", count);
//     return 0;
// }

// 6. Write a program in C to print all unique elements in an array.
// Test Data :
// Print all unique elements of an array:
// ------------------------------------------
// Input the number of elements to be stored in the array: 4
// Input 4 elements in the array :
// element - 0 : 3
// element - 1 : 2
// element - 2 : 2
// element - 3 : 5
// Expected Output :
// The unique elements found in the array are:
// 3 5

// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n);
//     int l[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &l[i]);
//     }for (int j=0; j<n; j++){
//         if(l[j]!=100){
//             int c=0;
//             for (int k=j+1;k<n;k++){
//                 if(l[j]==l[k]){
//                     l[k]=100;
//                     c=1;
//                 }
//             }if (c==0){
//                 printf("%d ", l[j]);
//             }
//         }
//     }
//     return 0;
// }

// issue***
// 7. Write a program in C to merge two arrays of the same size sorted in descending order.
// Test Data :
// Input the number of elements to be stored in the first array :3
// Input 3 elements in the array :
// element - 0 : 1
// element - 1 : 2
// element - 2 : 3
// Input the number of elements to be stored in the second array :3
// Input 3 elements in the array :
// element - 0 : 1
// element - 1 : 2
// element - 2 : 3
// Expected Output :
// The merged array in decending order is :
// 3 3 2 2 1 1

// #include <stdio.h>
// int main(){
//     int n;
//     scanf("size %d", &n);
//     int l[n];
//     int l1[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&l[i]);
//     }
//     for(int j=0;j<n;j++){
//         scanf("%d ,&l1[j]);
//     }
//     int a=n+n;
//     int c[a];
//     for(int k=0; k<a;k++){
//         c[k]=l[k];
//     }
//     for(int m=0;m<a;m++){
//         c[m]=l1[m];
//     }for (int p=0;p<a;p++){
//         for (int q=0;q<a;q++){
//             if(c[p]<c[q]){
//                 c[p]=c[q];
//             }
//         }
//     }
//     for (int r=0;r<a;r++){
//         printf("%d",c[r]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n;
//     scanf("size %d", &n);
//     int l[n];
//     int l1[n];
//     for(int i=0;i<n;i++){
//         scanf("%d", &l[i]);
//     }
//     for(int j=0;j<n;j++){
//         scanf("%d", &l1[j]);
//     }
//     int a=n+n;
//     int c[a];
//     for(int k=0; k<a;k++){
//         c[k]=l[k];
//     }
// for(int m=0;m<a;m++){
//     c[m]=l1[m];
// }for (int p=0;p<a;p++){
//     for (int q=0;q<a;q++){
//         if(c[p]<c[q]){
//             c[p]=c[q];
//         }
//     }
// }
// for (int r=0;r<a;r++){
//     printf("%d",c[r]);
// }
//     return 0;
// }

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
