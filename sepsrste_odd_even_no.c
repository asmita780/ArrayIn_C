// 10. Write a program in C to separate odd and even integers into separate arrays.
// Test Data :
// Input the number of elements to be stored in the array :5
// Input 5 elements in the array :
// element - 0 : 25
// element - 1 : 47
// element - 2 : 42
// element - 3 : 56
// element - 4 : 32
// Expected Output :
// The Even elements are :
// 42 56 32
// The Odd elements are :
// 25 47
#include <stdio.h>
int main(){                     
    int n;
    scanf("%d", &n);
    int l[n];
    int a[n],b[n];
    for (int i=0;i<n;i++){
        scanf("%d", &l[i]);
    }
    int p=0,q=0;
    for (int j=0; j<n; j++){
        if (l[j]%2==0){
            a[p]=l[j];
            p++;
        }
        else{
            b[q]=l[j];
            q++;
        }
    }
    for (int i=0; i<p; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    for(int i=0;i<q;i++){
        printf("%d ", b[i]);
    }
    return 0;
}
