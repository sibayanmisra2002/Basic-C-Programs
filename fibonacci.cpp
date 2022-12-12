#include<iostream>
using namespace std;

void fibo(int num){
    int t1=0, t2=1, nextTerm=0;
    for(int i=1; i<=num; i++){
        cout<<t1<<endl;
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    fibo(n);
    return 0;
}