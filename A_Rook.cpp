#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--)
    {
        char s[2];
        for(int i=0;i<2;i++) cin>>s[i];
        char a = s[0];
        char x=s[1];
        for(char i='1';i<='8';i++){
            if(i==x) continue;
            cout<<a<<i<<"\n";
        }
        for(char c='a';c<='h';c++){
            if(c==a) continue;
            cout<<c<<x<<"\n";
        }
    }
    return 0;
}