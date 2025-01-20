#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main() {
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin >> n;
    map <long long int , long long int> freq;
    for (long long int i = 0; i < n; i++){
    long long int j;
    cin >> j;
    freq[j]++;
    }
    long long int maior = 0;
    for (auto &entry : freq)  maior = max(maior, entry.second);
    cout << maior << endl;
    return 0;
}