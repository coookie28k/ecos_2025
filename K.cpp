#include <iostream>
#include <cstdio>
#include <vector>
#include <string.h>
#include <algorithm>
#define INT_MAX 200001
#define ll  long long 
using namespace std;

int main() {
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> ar(n), as(n);
    for (ll i = 0; i < n; i++){
        cin >> ar[i];
        as[i] = ar[i];
    }
    sort(as.begin(), as.end());
    string s;
    cin >> s;
    vector<ll> seg;
    vector<ll> sego;
    int aux = 0;
    for (ll i = 0; i < n-1; i++){
        if (s[i] == '0'){
            if ((i == 0) && (ar[i] != as[i])){
                aux = 1;
                break;
            }
            else{
                seg.push_back(ar[i]);
                sego.push_back(as[i]);
                ll tam = seg.size();
                sort(seg.begin(), seg.end());
                if (seg != sego) {
                    aux = 1;
                    break;
                }
                seg.clear();
                sego.clear();
            }
        }
        else {
            seg.push_back(ar[i]);
            sego.push_back(as[i]);
        }
    
    }
    if (aux == 1 ) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}
