#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    
    char i='A';
    
    cout<<"Masukkan angka sesuai dengan urutan alfabet: ";
    cin>>a;

    if(a>0 and a<=26) {
        for(b=a; b>=1; b--) {
            if(b==a) {
                for(c=2; c<=b; c++) {
                    cout<<i++;
                }
                for(c=1; c<=b; c++) {
                    cout<<i--;
                } 
                i--;
            } else {
                for(c=1; c<=b; c++) {
                    cout<<i++;
                }   
                i--;
                for(c=1; c<=(a-b)*2-1; c++) {
                    cout<<" ";
                }
                for(c=1; c<=b; c++) {
                    cout<<i--;
                }
            }
            i='A';
        cout<<endl;
        }
    }

    return 0;
}