#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int n;

    while (true) {
        cin >> n;
        if (n < 0) break;
        v.push_back(n);
    }

    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0) cout << "Even= " << v[i] << endl;
        else cout << "Odd = " << v[i] << endl;
    }

    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;

    return 0;
}
