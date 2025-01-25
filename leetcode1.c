#include <stdio.h>
#include <stdlib.h>


void insertion_sort(int array[], int length);




int main() {


    int n;
 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
 
    int arr[n]; // Declare an array of size n
 
    // Input values into the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]); // Read each element
    }
    insertion_sort(arr, n);
    }




void insertion_sort(int array[], int length) {
    for(int i = 0; i < length; i++) {
        int j = i + 1;

        while(j < length) {
        
            int sum = array[i] + array[j];
                if(sum == 9) {
                    printf("%d + %d = 9\n", array[j], array[i]);
                    break;                  
                } else {
                j++;
                }
        }
    }
 }
   
