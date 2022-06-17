// 二分
// 字符串哈希
// O(nlogn)

#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int n;
string str;

bool check(int mid) {
    unordered_set<string> hash;
    for (int i = 0; i + mid - 1 < str.size(); i ++) {
        auto s = str.substr(i, mid);
        if (hash.count(s)) return false;
        hash.insert(s);
    }
    return true;
}

int main() {
    cin >> n;
    cin >> str;

    int l = 1, r = n;
    while (l < r) {
        int mid = l + r >> 1;
        if (check(mid)) r = mid;
        else l = mid + 1;
    }
    cout << l << endl;
    return 0;
}