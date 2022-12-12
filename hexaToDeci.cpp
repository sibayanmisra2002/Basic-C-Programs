#include<bits/stdc++.h>
using namespace std;

int hexaToDecimal(string n) {
    
    int x=1, ans=0;
    int s = n.size();
    for(int i=s-1; i>=0; i--) {
        if(n[i]>='0' && n[i]<='9') {
            ans += x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F') {
            ans += x*(n[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}

int main()
{
    string n;
    cout << "Enter a hexadecimal no.: ";
    cin >> n;
    cout << "The decimal equivalent is: " << hexaToDecimal(n) << endl;
    return 0;
}