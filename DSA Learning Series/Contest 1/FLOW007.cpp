#include <iostream>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin >> t;
    while(t--){
        ll n,k=0;
        cin >> n;
        while(n>0){
            k=k*10+n%10;
            n/=10;
        }
        cout << k << endl;
    }
    return 0;
}
