#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter the no. of elements in array: " << endl;
    cin >> n;
    int a[n];
    cout << "Enter the elements in array: " << endl;
    for (i=0; i<n; i++) 
        cin >> a[i];
    //Reversing the array
    int s=0;
    int e=n-1;
    while(s<e) {
        int temp;
        temp = a[s];
        a[s] = a[e];
        a[e] = temp;
        s++;
        e--;
    }
    //Printing the reverse array
    for(i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}