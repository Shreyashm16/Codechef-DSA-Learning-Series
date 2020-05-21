#include <iostream>
using namespace std;
typedef long long ll;
ll a[26],b[26];
int main() {
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        ll n,i,flag=0;
        n=s.length();
        for(i=0;i<n/2;i++){
            a[(int)s[i]-97]++;
            if(n&1)
                b[(int)s[i+n/2+1]-97]++;
            else
                b[(int)s[i+n/2]-97]++;
        }
        for(i=0;i<26;i++){
            if(a[i]!=b[i])
                flag=1;
            a[i]=b[i]=0;
        }
        if(flag==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
