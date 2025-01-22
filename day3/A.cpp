#include <iostream>
#include <cstdio>
#define ll  long long 
using namespace std;

int main() {
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int x, y, r;
    cin >> x >> y >> r;

    pair<int, int> top_left = {x - r, y + r};
    pair<int, int> top_right = {x + r, y + r};
    pair<int, int> bottom_right = {x + r, y - r};
    pair<int, int> bottom_left = {x - r, y - r};

    cout << top_left.first << " " << top_left.second << endl;
    cout << top_right.first << " " << top_right.second << endl;
    cout << bottom_right.first << " " << bottom_right.second << endl;
    cout << bottom_left.first << " " << bottom_left.second << endl;

  return 0;
}
