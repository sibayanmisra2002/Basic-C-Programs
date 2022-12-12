#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"Max no. is: "<<a<<endl;
        }
        else{
            cout<<"Max no. is: "<<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<"Max no. is: "<<b<<endl;
        }
        else{
            cout<<"Max no. is: "<<c<<endl;
        }
    }
    return 0;
}