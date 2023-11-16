// 13. Write a program in C to insert the values in the array (sorted list).
// Test Data :
// Insert New value in the sorted array :
// -----------------------------------------
// Input the size of array : 5
// Input 5 elements in the array in ascending order:
// element - 0 : 2
// element - 1 : 5
// element - 2 : 7
// element - 3 : 9
// element - 4 : 11
// Input the value to be inserted : 8
// The exist array list is :
// 2 5 7 9 11
// After Insert the list is :
// 2 5 7 8 9 11
// --------------------------------

#include <stdio.h>
int main(){
    int n;
    int a,c=0;
    scanf("%d", &n);
    int l[n+1];
    // creat a list l........
    for (int i=0; i<n; i++){
        scanf("%d", &l[i]);
    }
    int k;
    scanf("%d", &k);
    // finded indax of k.......
  for (int j=0; j<n; j++){
        if (k<l[j]){
          a=j;
          j+=n;
          c=1;
        }
    }
    // chake k indax is between the list elements or end of the list..........
    if (c==1){
      int j=n;
    //   swiping elements from last.........
      while (j!=a){
        l[j]=l[j-1];
        j--;
      }
      l[j]=k;
    }
    else{
      l[n]=k;
    }
    // print all elements in new list..........
    for (int i=0; i<n+1; i++){
      printf("%d ", l[i]);
    }
    return 0;
}