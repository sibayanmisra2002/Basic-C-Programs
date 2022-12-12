#include<iostream>
using namespace std;

int binaryToDecimal(int n) {
    
    int x=1, y, ans=0;
    
    while(n>0) {
        y = n%10;
        ans += x * y;
        x *= 2; // 8 for octal; 16 for hexadecimal;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n, dec;
    cout << "Enter a binary no.: " << endl;
    cin >> n;
    dec = binaryToDecimal(n);
    cout << "The decimal equivalent is: " << dec << endl;
    return 0;
}