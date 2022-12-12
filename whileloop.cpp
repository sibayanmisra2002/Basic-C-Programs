#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n>0){
        cout<<"Value you entered: "<<n<<endl;
        cout<<"Enter -ve value to stop"<<endl;
        cin>>n;
    }
    return 0;
}