#include <iostream>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    scanf("%lld",&t);
    while(t--){
        ll n,i;
        scanf("%lld",&n);
        ll a,b,c=1;
        scanf("%lld",&a);
        for(i=0;i<(n-1);i++){
            scanf("%lld",&b);
            if(b<=a){
                a = b;
                c++;
            }
        }
        printf("%lld\n",c);
    }
    return 0;
}
