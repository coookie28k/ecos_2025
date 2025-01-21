#include <iostream>
#include <cstdio>
#include <vector>
#define INT_MAX 1000000001
#define ll  long long 
using namespace std;

int main() {
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> ar(n);
    for (ll i = 0; i < n; i++) cin>> ar[i];
    vector<ll> dis(n, INT_MAX);
    ll uz = -1;
    for (ll i = 0; i < n; i++){
        if (ar[i] == 0){
            dis[i] = 0;
            uz = i;
        }
        else if (uz != -1) dis[i] = i - uz;
    }
    uz = -1;
    for (ll i = n-1; i >= 0; i--){
        if (ar[i] == 0) {
            dis[i] = 0;
            uz = i;
        }
        else if (uz != -1) dis[i] = min(dis[i], uz - i);
    }
    for (ll i = 0; i < n; i++){
        cout << dis[i];
        if (i != n-1) cout << " ";
        else cout << endl;
    }
    return 0;
}
