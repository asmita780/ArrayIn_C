// #include <stdio.h>
// int main(){
//     int l[]={2,6,3,5,7,1,8,4};
//     int n=8;
//     for (int i=0; i<n-1; i++){
//         for (int j=0; j<n-1; j++){
//             int k=j+1;
//             if (l[j]>l[k]){
//               int a=l[k];
//                 l[k]=l[j];
//                 l[j]=a;
//             }
//         }
//     }
//     for (int i=0; i<n; i++)
//       printf("%d ", l[i]);
//     return 0;
// }

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