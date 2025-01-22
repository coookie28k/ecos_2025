#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#define ll  long long 
using namespace std;

int main() {
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    ll n, P = 0, B = 0;
    cin >> n;
    if (n % 2 != 0) {
        cout << "impossible" << endl;
        return 0;
    }
    vector <pair<ll,ll>> habilidades(n);
    for (ll i =  0; i < n; i++){
        cin >> habilidades[i].first >> habilidades[i].second;
        B += habilidades[i].first;
        P += habilidades[i].second;
    }
    if ((B % (n/2) != 0) || (P% (n/2) != 0)){
        cout << "impossible" << endl;
        return 0;
    }
    ll metaB = B/(n/2), metaP = P/(n/2);
    sort(habilidades.begin(), habilidades.end());
    int e = 0, d = n - 1;
    while (e < d) {
        int b_par = habilidades[e].first + habilidades[d].first;
        int p_par = habilidades[e].second + habilidades[d].second;
        if (b_par == metaB && p_par == metaP) {
            e++;
            d--;
        } else {
            cout << "impossible" << endl;
            return 0;
        }
    }
  cout << "possible" << endl;  
  return 0;
}
