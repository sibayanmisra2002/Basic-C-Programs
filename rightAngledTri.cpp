#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the rows for right angled triangle: "<<endl;
    cin>>n;
    cout<<"**********************"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"**********************"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"**********************"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"**********************"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    int count = 1;
    cout<<"**********************"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}