#include <iostream>
#include <cstdio>
#include <vector>
#define ll  long long 
#define M 1000000007
using namespace std;

int main() {
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    ll n, computers = 1;
    cin >> n;
    vector<pair<ll,ll>> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i].first;
    for (ll i = 0; i < n; i++) cin >> v[i].second;
    for (auto x: v){
        ll f = x.first, s = x.second;
        if ((f > s) && (s != -1)) {
            f = f - s;
            computers += (f / s) % M + (f % s) % M; 
        }       
    }
    cout << computers % M  << endl;
  return 0;
}
