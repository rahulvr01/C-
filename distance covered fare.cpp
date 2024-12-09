// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a=125;
    cin>>a;
    cout<<"enter the distance";
    if(a>=0 && a<=10)
    {
        cout<<a*5;
    }
    else if(a>=10 && a<=20)
    {
        cout<<(a-10)*10+10*5;
    }
    else if(a>=20)
    {
        cout<<10*5+10*10-(a-20)*50;
    }
    else{cout<<"invalid input";}
}