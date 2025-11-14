#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    set<int> uniqueElements;
    for (int i = 0; i < n; i++) uniqueElements.insert(v[i]);

    cout << "Unique=" << uniqueElements.size() << endl;

    return 0;
}
