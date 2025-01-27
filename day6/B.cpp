#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int conta_validas(const string& criptograma, const string& crib) {
    int criptograma_len = criptograma.length();
    int crib_len = crib.length();
    int validas = 0;
    for (int i = 0; i <= criptograma_len - crib_len; ++i) {
        bool valida = true;
        for (int j = 0; j < crib_len; ++j) {
            if (criptograma[i + j] == crib[j]) {
                valida = false;
                break;
            }
        }
        if (valida) {
            ++validas;
        }
    }
    return validas;
}

int main() {
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    string criptograma, crib;
    cin >> criptograma >> crib;
    cout << conta_validas(criptograma, crib) << endl;
    return 0;
}
