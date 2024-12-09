// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int num=153;
    int arm=num;
    int pr=1;
    int sum;
        while(num!=0){
            pr=num%10;
        sum+=pr*pr*pr;
            num=num/10;
        }
        if(arm==sum){
            cout<<sum;
        }
        else{
            cout<<"not a armstrong number";
        }
}