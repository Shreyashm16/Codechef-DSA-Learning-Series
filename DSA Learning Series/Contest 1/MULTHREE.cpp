#include <iostream>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin >> t;
    while(t--){
        ll k,f,s;
        cin>>k>>f>>s;
        ll th=((f+s)%10),sum=(f+s);
        if(k!=2){
            sum+=th;
            ll a[4]={(th*2)%10,(th*4)%10,(th*8)%10,(th*16)%10},i;
            sum+=(a[0]+a[1]+a[2]+a[3])*((k-3)/4);
            for(i=0;i<((k-3)%4);i++)
                sum+=a[i];
        }
        if((sum%3)==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
