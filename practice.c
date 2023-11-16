// 1. Write a program in C to store elements in an array and print them.
// Test Data :
// Input 10 elements in the array :
// element - 0 : 1
// element - 1 : 1
// element - 2 : 2
// .......
// Expected Output :
// Elements in array are: 1 1 2 3 4 5 6 7 8 9 

/*#include <stdio.h>

int main(){
    int length;
    scanf("%d", &length);
    int array[length];
    for (int i=0; i<length; i++){
        scanf("%d", &array[i]);
    }
    for (int j=0; j<length; j++){
        printf("%d,", array[j]);
    }
    return 0;
}*/



/*2. Write a program in C to read n number of values in an array and display them in reverse order.
Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2 */

/*#include <stdio.h>

int main(){
    int n;
    int array[n];
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    for (int j=n-1; j>=0; j--){
        printf("%d ", array[j]);
    }
    return 0;
}*/



/*3. Write a program in C to find the sum of all elements of the array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15 */


/*#include <stdio.h>

int main(){
    int length, sum=0;
    scanf("%d", &length);
    int array[length];
    for (int i=0; i<length; i++){
        scanf("%d", &array[i]);
        // sum+=array[i];
    }
    // printf("%d", sum);
    for (int j=0; j<length; j++){
        sum+=array[j];
    }
    printf("%d", sum);
    return 0;

}*/




/*4. Write a program in C to copy the elements of one array into another array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12 */

/*#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arrayone[n],arraysecond[n];
    for(int i=0; i<n; i++){scanf("%d", &arrayone[i]);}
    for (int j=0;j<n; j++){arraysecond[j]=arrayone[j];}
    for (int i=0; i<n; i++){printf("%d,", arrayone[i]);}
    printf("\n");
    for (int i=0; i<n; i++){printf("%d,", arraysecond[i]);}
    return 0;


}
*/



/*5. Write a program in C to count the total number of duplicate elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1 */

/*#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i=0; i<n; i++){scanf("%d", &array[i]);}
    int count=0;
    for (int j=0; j<n; j++){if (array[j]!=-0){int check=0;for (int k=j+1; k<n; k++){if (array[j]==array[k]){array[k]=-0;check = -100;}}if (check==-100){count++;}}}
    printf("%d", count);
    return 0;
}*/



/*6. Write a program in C to print all unique elements in an array.
Test Data :
Print all unique elements of an array:
------------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array :
element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5
Expected Output :
The unique elements found in the array are:
3 5*/

