// #include <iostream>
// using namespace std;
// int main(){
//     int A , B ;
//     cout<<"Enter the number A :" ; 
//     cout<<"Enter the number B : " ; 
//     cin>>A>>B;
//     // swapping the value of A and B
//     A = A+ B ; 
//     B = A - B ;
//     A = A - B ;
//     cout<<"After swapping, A = "<<A<<" and B = "<<B<<endl;
//     return 0;


// // Call by value 
// void swap(int a , int b , int c){
//     c = a ;
//     a = b ;
//     b = c ;
//     cout<<"After swapping, A = "<<a<<" and B = "<<b<<endl;

// }
//     // Call by reference
//  int swap(int &a , int &b , int &c){
//     c = a ;
//     a = b ;
//     b = c ;
//     cout<<"After swapping, A = "<<a<<" and B = "<<b<<endl;
//     return 0;
// }

//  // call by address 
//  int swap(int *a , int *b , int *c){
//     *c = *a ;
//     *a = *b ;
//     *b = *c ;
//     cout<<"After swapping, A = "<<*a<<" and B = "<<*b<<endl;

//     return 0;
// }

//     swap(a,b,c);
//     swap(&a,&b,&c);
//     swap(a,b,c);
// }
//Using array inster thr element at the end 
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[10],n,i,element;
//     cout<<"Enter the size of the array : ";
//     cin>>n;
//     cout<<"Enter the elements of the array : ";
//     for(i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter the element to be inserted at the end : "; 
//     cin>>element;
//     arr[n] = element;
//     n++;
//     cout<<"Array after insertion : ";
//     for(i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

