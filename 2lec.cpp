// Create a mini calculater using Conditional Statements  and use Menu - Drive Prog 

#include <iostream>
using namespace std;
int main (){
    // int a , b ;
    // cout<< "Enter the  two num:";
    // cin >> a >> b ;
    // char A ,S,M,D,MO;
    // cout << "Which Arthemetic operation u want , A = add , S = sub , M = Mul , D = Div , MO = Mod" <<endl ; 
    // cin >>A>>S>>M>>D>>MO;
    // if ( A == 'A' || A == 'a'){
    //     cout << "Addition of two number is : "<< a + b <<endl;
    // }
    // else if (S == 'S' || S == 's'){
    //     cout << "Subtraction of two number is : "<< a - b <<endl;
    // }
    // else if (M == 'M' || M == 'm'){
    //     cout << "Multiplication of two number is : "<< a * b <<endl;
    // }
    // else if (D == 'D' || D == 'd'){
    //     cout << "Division of two number is : "<< a / b <<endl;
    // }
    // else if (MO == 'MO' || MO == 'mo'){
    //     cout << "Modulus of two number is : "<< a % b <<endl;
    // }
    // else {
    //     cout << "Invalid Input" <<endl;
    // }


    // if and take more time complexity so best way to approc is to use Switch case 
    int a, b , ch ;
    cin >>a>>b;
    cout<<"Enter the choice : 1 = add , 2 = sub , 3 = mul , 4 = div , 5 = mod "<<endl;
    cin >> ch;
    switch(ch){
    case 1 :
    cout<<"Sum is " <<a+b<<endl;
    case 2:
    cout <<"Sub id : " <<a-b<<endl;

    case 3:
    cout <<"Mul is : " <<a * b <<endl;

    case 4 :
    cout<<"Div is: " << a / b <<endl;

    case 5 :
    cout <<"Mod is : " << a % b <<endl;
    break;


     }

/ //  ODD & EVEN

int c , d;
cout << "Enter the value of a and b :";
cin >> c >> d;
 int result = c + d ;
 if (result % 2 == 0){
    cout << "The result is even number "<<endl ;
    cout<< "Lucky pair";


 }
 else {
    cout<< "The result is ODD"<<endl;

 }



 /*
 Simple interest 
 WAP to calculate Simple Interest and then check when S.I earned is above RS100 or not 
 if INterest is above 100 print " Good Earning"
 If Interest is Between 50 - 100 print "average earning"
 If interest is < 50 print "low earning"
 
 */
float p , r , t ;
cout << "Enter the value of P , R , T :";
cin >> p >> r >> t ;
float SI = (p * r * t) / 100 ;
if (SI > 100){
    cout << "Good Earning" <<endl;
}
else if (SI >= 50 && SI <= 100){
    cout << "Average Earning" <<endl;
}
else {  
    cout << "Low Earning" <<endl;





// Print table of using loop 
int n,i;
cout <<"Enter num";
cin>> n ;

for ( i = 1 ; i  <= 10 ; i++){
    cout<<n <<" * " <<i << n* i  <<endl;
}





 return 0 ;
}
