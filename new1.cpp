// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//ap series=ap=a(n-1)d
int main() {
    int a=1;
    int n=5;
    int d=2;
    int sum=0;
    for(int i=0;i<n;++i)
    {
       sum=a+i*d; 
        cout<<sum<<endl;
    }
    }