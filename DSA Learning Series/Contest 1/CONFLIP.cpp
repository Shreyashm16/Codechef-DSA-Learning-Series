#include <iostream>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin >> t;
    while(t--){
        ll g;
        cin >> g;
        while(g--){
            ll i,n,q,a;
            cin >> i >> n >> q;
            if(i==1)
                a=n/2;
            else
                a=n-n/2;
            if(q==2)
                a=n-a;
            cout << a << endl;
        }
    }
    return 0;
}
