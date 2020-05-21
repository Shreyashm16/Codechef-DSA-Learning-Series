#include <iostream>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    scanf("%lld",&t);
    while(t--){
        ll n,i,b=0;
        scanf("%lld",&n);
          for(i=5;n/i>=1;i*=5)
              b+=n/i;
        printf("%lld\n",b);
    }
    return 0;
}
