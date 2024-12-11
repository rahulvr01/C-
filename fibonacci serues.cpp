// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//0 1 1 2 3 5 8 fibonacci term
int main() {
    int ft=0;
    int st=1;
    int next;
    int n=5;//no of terms
   
    for(int i=1; i<=n; ++i){
        
        if(i==1)
        {
        cout<<ft<<endl;
        continue;
        }
        
        if(i==2)
        {
        cout<<st<<endl;
        continue;
        }
        
        next=ft+st;
        ft=st;
        st=next;
        cout<<next<<endl;
    }
 return 0;
}