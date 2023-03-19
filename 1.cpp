#include <bits/stdc++.h>

using namespace std;

int main() {
    int cap, n;
    cin >> cap >> n;

    int work = 0;
    unordered_set<int> belt;

    for (int i = 0; i < n; i++) {
        int item;
        cin >> item;

        if (belt.find(item) == belt.end()) {
            // item not on belt
            work++;

            if (belt.size() == cap) {
                // belt full, remove last item
                belt.erase(*belt.rbegin());
            }
        }

        // put new item at front of belt
        belt.insert(item);
    }

    cout << work << endl;

    return 0;
}
