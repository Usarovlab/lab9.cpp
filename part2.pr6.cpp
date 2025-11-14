#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    bool ascending = true;
    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            ascending = false;
            break;
        }
    }

    if (ascending) cout << "Sorted" << endl;
    else cout << "Not Sorted" << endl;

    return 0;
}
