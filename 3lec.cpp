#include <iostream>
using namespace std;

int add(int a , int b , int c , int d , int e){
    return a+b+c+d+e;

}

int mul(int a, int e){
    return a*e;
}
void SUB(int A , int M){
    cout<<"Sub is : "<<A-M<<endl;
}

int main()
{
int a,b,c,d,e;
cout<<"Enter the 5 number:";
cin>>a>>b>>c>>d>>e ; 
int A (add(a,b,c,d,e));
int M (mul(a,e));
SUB (A,M);

return 0 ;



}
    

