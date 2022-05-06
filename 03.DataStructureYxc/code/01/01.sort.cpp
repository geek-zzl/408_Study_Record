// 成绩排序
// 排序个数 稳定排序 排列方式
// 快 堆  sort 不稳定
// 归并 多关键字排序 stable_sort 稳定

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 1010; 

int n, m;
struct Person {
    string name;
    int score;

    bool operator< (const Person& t) const {
        return score < t.score;
    }

    bool operator> (const Person& t) const {
        return score > t.score;
    }
} q[N];

int main() {
    cin >> n >> m;
    
    for (int i = 0; i < n; i ++) 
        cin >> q[i].name >> q[i].score;
    // m = 0 升序  m!=0 降序
    if (!m) {
        stable_sort(q, q + n, greater<Person>());
    } else {
        stable_sort(q, q + n);
    }

    for (int i = 0; i < n; i ++) {
        cout << q[i].name << " " << q[i].score << endl;
    }

    return 0;
}