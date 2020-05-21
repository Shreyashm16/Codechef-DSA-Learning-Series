#include <iostream>
using namespace std;
typedef long long ll;
void merge(ll arr[], ll l, ll m, ll r){
    ll i, j, k,n1 = m - l + 1,n2 =  r - m,L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}
void sortarr(ll arr[], ll l, ll r){
    if (l < r){
        ll m = l+(r-l)/2;
        sortarr(arr, l, m);
        sortarr(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
  
int main() {
    ll i,n;
    cin >> n;
    ll arr[n],c,max=-1;
    for(i=0;i<n;i++)
        cin  >> arr[i];
    sortarr(arr,0,n-1);
    for(i=0;i<n;i++){
        c=arr[i]*(n-i);
        if(c>max)
            max=c;
    }
    cout << max << endl;
    return 0;
}
