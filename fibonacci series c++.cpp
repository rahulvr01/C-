// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int ft=0;
   int st=1;
   int nxt;
   int n=5;
   
   for(int i=1; i<n; i++){
       
       if(i==1){
           cout<<ft;
           continue;
       }
       if(i==2){
           cout<<st;
           continue;
       }
       nxt=ft+st;
       ft=st;
       st=nxt;
       cout<<nxt;
   }
}