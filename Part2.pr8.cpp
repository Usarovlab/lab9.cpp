#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> result;
    result.push_back(v[0]);

    for (int i = 1; i < n; i++) {
        if (v[i] != v[i - 1]) {
            result.push_back(v[i]);
        }
    }

    for (int x : result)
        cout << x << " ";

    return 0;
}
