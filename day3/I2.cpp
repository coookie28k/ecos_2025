#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<pair<ll, ll>> intervals;

    // Leitura dos tempos necessários para resolver cada problema
    vector<ll> t(n), s(n);
    for (ll i = 0; i < n; i++) cin >> t[i];
    for (ll i = 0; i < n; i++) cin >> s[i];

    // Criar os intervalos (start_time, end_time) apenas para problemas resolvidos
    for (ll i = 0; i < n; i++) {
        if (s[i] != -1) {
            ll start_time = s[i] - t[i] + 1;
            ll end_time = s[i];
            intervals.push_back({start_time, end_time});
        }
    }

    // Ordenar os intervalos pelo start_time, e pelo end_time em caso de empate
    sort(intervals.begin(), intervals.end());

    // Usar uma min-heap para rastrear os end_times ativos
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll max_computers = 0;

    for (auto interval : intervals) {
        ll start = interval.first, end = interval.second;

        // Remover intervalos que já terminaram antes do início do atual
        while (!pq.empty() && pq.top() < start) {
            pq.pop();
        }

        // Adicionar o novo intervalo
        pq.push(end);

        // Atualizar o número máximo de computadores usados
        max_computers = max(max_computers, (ll)pq.size());
    }

    cout << max_computers << endl;
    return 0;
}
