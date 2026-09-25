/*
 25 Sept 2026 

 #Unit - 3 
 Topic : Files 
 -> Creat a file 
 -> Writing into file 
 -> Read from file 
 - By Token wise 
 - By line wise 
 - By char wise 
 
 -> File operations 
 -> Text / Binary

*/
/*

File Streams in cpp 

ifstream - for reading from file
ofstream - for writing into file
fstream - for both reading and writing into file




*/
#include <iostream>
using namespace std ;
#include <fstream>
int main(){
    // ofstream fobj;

    // fobj.open("student.txt");
    // fobj << "Name : Chayan Khatua "<<" " <<"Reg.no :12518616" <<" "<<"Email id: chayankhatua2006@gmail.com";
    // fobj.close();
 // Token wise reading 
 int main(){
    ifstream file ; 
    file.open("student.txt");
    string name ;
    int marks;

    file >> name >> marks ;
    cout << "Name : " << name << endl ;
    cout << "Marks : " << marks << endl ;   
    file.close();
    return 0 ;
 }
/*

line wise reading
int main()

{
    IFSTREAM FILE ; 
    string line ; 
    while(getline(file,line)){
        cout << line << endl ;
    }
    file.close();
    return 0 ;
}
*/
