#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v1(n), v2(n), sum(n);
    for (int i = 0; i < n; i++) cin >> v1[i];
    for (int i = 0; i < n; i++) cin >> v2[i];

    for (int i = 0; i < n; i++) sum[i] = v1[i] + v2[i];

    for (int i = 0; i < n; i++) cout << sum[i] << " ";
    cout << endl;

    return 0;
}
