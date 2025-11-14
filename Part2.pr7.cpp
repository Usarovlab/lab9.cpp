#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;          

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int maxVal = v[0];
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (v[i] > maxVal) {
            maxVal = v[i];
            maxIndex = i;
        }
    }

    cout << "Index=" << maxIndex << endl;

    return 0;
}
