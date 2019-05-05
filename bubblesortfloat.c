#include <stdio.h> 
 #include<time.h> 
void swap(float *xp, float *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSort(float arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 
  
/* Function to print an array */
void printArray(float arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%f ", arr[i]); 
    printf("n"); 
} 
  
// Driver program to test above functions 
int main() 
{     float first_clock = clock();
    float arr[] = {172.4,2068.4,1093.86,1131.53,1289.35,51.17,1330.87,1410.7,1463.87,649.95,332.19,174.53,686.2,116,308.94,1377.94}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    bubbleSort(arr, n); 
    float second_clock = clock();
    float lala = (float)(second_clock - first_clock)/CLOCKS_PER_SEC;
    printf("Sorted array: \n"); 
    printArray(arr, n);
    printf("%f",lala); 
    return 0; 
} 