//------------------------------
//Arrays in C++
//------------------------------

#include <iostream>
using namespace std ; 
/*
 Arrays are non primitive data structure which is used to store multiple values of same data type in a single variable.
Arrays are fixed in size and can be of any data type.
Syntax : datatype array_name[size] ;
- contiguuous memory allocation
- Random access of elements
- Arrays are fixed in size
- Arrays can be of any data type
- liner data structure
*/

// int main(){
//     int marks[5] ; 
//     for ( int i = 0 ; i < 5 ; i++){
//         cin >> marks[i];

//     }

//     for ( int i = 0 ; i < 5 ; i++){
//         cout <<marks[i] <<"" << endl;

//     }
// }

// int main(){
//     int marks [5] = {10 , 20 , 30 , 40 , 50 };
    
//         cout << sizeof(marks) << endl ;
//         cout << sizeof(marks[0]) << endl ;
// }
//--------------------------------------
// {Loop on Array}
// Find smallest in Array 
//--------------------------------------
// int main(){
//    int   marks[] = {10 , 20 , 30 , 40 , 5};
//    int smallest = marks[0];
//    for ( int i  = 0 ; i < 5 ; i++)
//    {
//     if (marks[i] < smallest)
//     {
//         smallest = marks[i];
//     }
//    }
//    cout << "Smallest element in the array is: " << smallest << endl;
// }

// same goes for largest element in the array we have to change the condition in the if statement to find the largest element in the array. 

/*
---------------------------
Pass by reference in array 
---------------------------
When you pass an array to a function, it is passed by reference, meaning that the function receives a pointer to the first element of the array.    


*/
// now we are going to creating a function  in which array element will multiply by 2 and then print the array element in the main function.
// void changeArray(int arr[], int size){
//     cout << "Array elements after multiplying by 2: ";
//     for ( int i = 0 ; i < size ; i++){
//         arr[i] = 2 * arr[i];
//     }

// }

// int main(){
//     int arr[] = { 1,2,3};
//     int size = 3; 
//     changeArray(arr, size);
//     for (int i = 0 ; i < size ; i++){
//         cout << arr[i]<< " ";
//     }


// } 


// ----------------------------------
  // Linear Search in Array 
// ----------------------------------
void findTarget(int arr[], int size , int target ){
    for(int i = 0 ; i < size ; i++){
        if ( arr[i] == target){
            cout << "Target found at index : " << i << endl ;
            return ;    
        }
    }
    cout << "Target not found" << endl ;
}
int main(){
    int arr[] = { 1,2,3,4,5};
    int size = 5 ; 
    findTarget(arr, size, 6);
}