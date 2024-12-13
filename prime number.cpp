// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a=1;
    
    if(a<2){
        cout<<"not a prime";
        return 0;
    }
    
    for(int i=2; i*i<a; i++){
        if(a%i==0){
            cout<<"not a prime number";
            return 0;
        }
    }
    cout<<"prime number";
}