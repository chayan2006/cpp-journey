#include <iostream>
using namespace std; 
class  Student {
private :
    string name ; 
    int roll ; 
    int marks;

    public :

    void get_data(){
        cin>>name>>roll>>marks;

    }

    void print_data(){
        cout<<"Name:" <<name<<endl <<"Roll no:" <<roll <<endl <<"Marks:" <<marks<<endl;
    }


    int main(){
        Student s1 ; 
        s1.name ; 
        s1.roll;
        s1.marks;
        s1.get_data();
        s1.print_data();

    }
    
};