// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a;
    int b;
    cin>>a;
    cin>>b;
    if(a==1){
        if(b==1){
            cout<<"reached 1-1";
        }
        else if(b==2){
            cout<<"reached1-2";
        }
        else if(b==3){
            cout<<"reached1-3";
        }
        else{
            cout<<"wromg input";
        }
    }
    else if(a==2){
        if(b==1){
            cout<<"reached2-1";
        }
        else if(b==2){
            cout<<"reached2-2";
        }
        else if(b==3){
            cout<<"reached2-3";
        }
        else{
            cout<<"not an address";
        }
        
    }else if(a==4){
        if(b==1){
            cout<<"reached3-1";
        }
        else if(b==2){
            cout<<"reached3-2";
        }
        else if(b==3){
            cout<<"reached3-3";
        }
        else{
            cout<<" no address";
        }
    }
    else{
      cout<<"invalid address";
    }
    
    return 0;
}