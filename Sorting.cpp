// # include <iostream> 
// using namespace std;

// void bubbleSort(int arr[], int n ){ // O(n^2) time complexity
//     for (int i = 0 ; i < n-1 ; i++){
//         for (int j = 0 ; j < n-i-1 ; j++){
//             if ( arr[j] > arr[j+1]){
//                 swap( arr[j], arr[j+1]);
//             }
//         }

//     }
// }

// void printArray(int arr[], int n ){
//     for ( int i  = 0 ; i <  n ; i++){
//         cout<< arr[i]<< " ";
//     }
//     cout<< endl;
// }
//  int main (){
//     int n = 5 ;
//     int arr[] = { 64 , 34 , 25 , 12 , 22 , 11 , 90};
//     bubbleSort(arr , n);
//     cout<<"Sorted array : ";
//     printArray(arr , n);
//     return 0;
//  }
// deletion at the  beginning of array 
// deletion at the end of array 
// deletion at the k t5h position of the array ]
// insertion at the beginning of array 
// insertion at the end of array 
// Insertion at the k th position of the array 
// Unsorted Merging 
// Sorted Merging 
// Merge with Duplication (removing duplicate element[[[[[[[[[[[]]]]]]]]]]])
#include <iostream>
using namespace std;
// void deleteAtBeginning(int arr[], int &n) {
//     if (n <= 0) {
//         return;
//     }
//     for (int i = 0; i < n - 1; i++) {
//         arr[i] = arr[i + 1];
//     }
//     n--;
// }

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            swap(arr[++i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
void quickSort(int arr[], int low , int high ){
    if ( low < high){
        int pi = partition(arr , low , high);
        quickSort(arr , low , pi - 1);
        quickSort(arr , pi + 1 , high);
    }


int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
v
    return 0;

}


/*
a memmory leak occur when you dynamically allocate memory (e.g., using `
new` or `malloc`) and fail to deallocate it (e.g., using `delete` or `free`). In the 
provided code, there is no dynamic memory allocation, so there should not be any memory leaks. 
However, if you were to modify the code to use dynamic arrays or other dynamic structures, 
you would need to ensure that you properly free any allocated memory to avoid leaks.*/

/*



*/