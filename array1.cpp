// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5};
    int max=0;
    for(int i=0;i<5;++i){
        if(arr[i+1]>arr[i]){
            max=arr[i+1];
        }
    }
    
    cout<<max;
}
