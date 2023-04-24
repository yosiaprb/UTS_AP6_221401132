#include <iostream>
#include <string>

using namespace std;

int main() {
    int a;
    
    cout<<"Masukkan suatu integer : ";   //masukkan integer
    cin>>a;
    
    string i=to_string(a);  //mengubah string menjadi integer
    
    cout<<"Hasil menjadi string : "<<i<<endl;  //output string
    
    return 0;
}