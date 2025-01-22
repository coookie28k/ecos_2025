#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int countPartitions(int n) {
    // Vetor para armazenar as soluções parciais
    vector<int> dp(n + 1, 0);
    dp[0] = 1; // Base: apenas 1 forma de somar 0

    // Preenchendo dp[i] usando programação dinâmica
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            dp[j] = (dp[j] + dp[j - i]) % MOD;
        }
    }

    return dp[n];
}

int main() {
    int n;
    cin >> n; // Entrada
    cout << countPartitions(n) << endl; // Saída
    return 0;
}
