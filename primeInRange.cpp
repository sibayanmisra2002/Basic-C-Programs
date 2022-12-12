#include<iostream>
using namespace std;

int main()
{
    int a, b, i;
    cout << "Enter the range: ";
    cin>>a>>b;
    cout<<"The prime no.s within the range are: "<<endl;
    for(int num=a; num<b; num++){
        for(i=2; i<num; i++){
            if(num%i==0)
            break;
        }
        if(num==i)
        cout<<num<<endl;
    }
    return 0;
}