// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
int a=16;
int b=6;

int c=(a>b)? a:b;

while(1){
    if(c%a==0 && c%b==0){
        cout<<c;
        break;
    }
    ++c;
}

}