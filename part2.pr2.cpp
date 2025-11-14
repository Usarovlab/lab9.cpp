#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) v[i] /= 2;
        else v[i] *= 2;
    }

    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
    return 0;
}
