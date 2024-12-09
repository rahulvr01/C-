

#include <iostream>
using namespace std;
int main()
{
 int op;
 cout<<"enter fruit and vegetable";
 cin>>op;
 switch(op)
 {
     case 1:cout<<"enter the fruit name 1.Orange 2.Apple";
     cin>>op;
     switch(op){
         case 1:cout<<"Orange";
         break;
         case 2:cout<<"Apple";
         break;
         default:cout<<"ii";
     }
{
    case 2:cout<<"enter the vegetable name 1. aalu 2.bhalu";
    cin>>op;
    switch(op){
        case 1:cout<<"aalu";
        break;
        case 2:cout<<"bhalu";
        break;
        default:cout<<"ii";
    }
    break;
    
    default:cout<<"ii";
}


 }
}