#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++){
    long long int n, m, B = 0, W = 0;
    cin >> n >> m;
    for (int j = 0; j < n; j++){
        for (int k = 0; k < m; k++){
            if ((j+k) %2 == 0 || (B == W+1) && (n*m) % 2 == 0){
                cout << "B";
                B++;
            }
            else{
                cout << "W";
                W++;
            }
            }
        cout << endl;
    }
  }
  return 0;
}