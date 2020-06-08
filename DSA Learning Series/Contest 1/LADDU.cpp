#include <iostream>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin >> t;
    while(t--){
        ll act,n=400,tot=0;
        string nat;
        cin >> act >> nat;
        if(nat=="INDIAN")
            n=200;
        while(act--){
            string s;
            cin >> s;
            if(s=="CONTEST_WON"){
                ll r;
                cin >> r;
                if((20-r)>0)
                    r=20-r;
                else
                    r=0;
                tot+=300+r;
            }
            else if(s=="TOP_CONTRIBUTOR"){
                tot+=300;
                //cout << tot << endl;
            }
            else if(s=="BUG_FOUND"){
                ll r;
                cin >> r;
                tot+=r;
                //cout << tot << endl;
            }
            else if(s=="CONTEST_HOSTED"){
                tot+=50;
                //cout << tot << endl;
            }
            }
        cout << tot/n << endl;
    }
    return 0;
}
