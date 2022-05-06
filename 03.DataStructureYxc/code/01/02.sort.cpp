// 成绩排序 2
// 双关键字排序
// 学号 分数 学号不会重复 低到高 小号 优先
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1010; 

int n, m;
struct Person {
    int id;
    int score;

    //  a < b   <==>  a.<(b)  
    bool operator< (const Person& t) const {
        if (score != t.score)
            return score < t.score;
        else    
            return id < t.id;
    }

    bool operator> (const Person& t) const {
        if (score != t.score)
            return score > t.score;
        else
            return id < t.id;
    }
} q[N];

int main() {
    cin >> n;
    
    for (int i = 0; i < n; i ++) 
        cin >> q[i].id >> q[i].score;
    
    // 从小到大
    sort(q, q + n, greater<Person>());

    for (int i = 0; i < n; i ++) {
        cout << q[i].id << " " << q[i].score << endl;
    }

    return 0;
}