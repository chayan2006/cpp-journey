#include <iostream> // # is pre processor directive which is used to include the header file in the program and include defined the I/0 library in the program and iostream is a header file which is used to perform input and output operation in the program
using namespace std; // This is a namespace which is used to avoid the ambiguity(ambiguity means confusion) in the program and it is used to access the standard library in the program
int main(){
    // Q1. Write Simple Statement in C++
    cout << "My name is Chayan ";
    cout << "I  am a CS Student";
    cout << " Now i  am learning C++ programming language";
 // to run the code in the terminal we have frist make a compailer file and then run the code in the terminal 
 // to make a compiler file we have to use the command g++ 1lec.cpp -o 1lec
 // to run the code we have to use the command ./1lec


 // Q2. Write  Multiple Statement in C++ 
    cout << "My name is Chayan " << endl;
    cout << "I  am a CS Student" << endl;
    cout << " Now i  am learning C++ programming language" << endl;
    // << endl is used to print the next statement in the next line

    //Q3. Enter a number then print its value 
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The number you entered is :" << num <<endl;


    // Q4. Enter Two no. then print its add, sub 
    int a , b ;
    cout<<"Enter num 1 : ";
    cin>>a;
    cout<<"Enter num 2 : ";
    cin>>b;
    int add = a + b;
    int sub = a - b;
    cout<<"Addition of two number is : "<<add<<endl;
    cout<<"Subtraction of two number is : "<<sub<<endl;
    //Q5. Enter 5Subject marks Print Average of it .
    int m1, m2, m3, m4, m5;
    cout<<"Enter marks of 5 subjects : ";
    cin>>m1>>m2>>m3>>m4>>m5;
    float avg = (m1 + m2 + m3 + m4 + m5) / 5.0;
    cout<<"Average of 5 subjects is : "<<avg<<endl;
return 0;
}
