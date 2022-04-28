// 中缀表达式 转 后缀表达式
// 后缀表达式 立即算 无需括号
// 表达式树
// (2+2)*(1+1)+3
// 2 2 + 1 1 + * 3 +
#include <iostream>
#include <cstring>
#include <algorithm>
#include <unordered_map>
#include <stack>

using namespace std;

stack<char> op;

void eval() {
    auto c = op.top(); op.pop();
    cout << c << ' ';
}

int main() {
    string s;
    cin >> s;

    unordered_map<char, int> pr{ {'+', 1}, {'-', 1}, {'*', 2},{'/', 2}};

    for (int i = 0; i < s.size(); i ++) {
        if (isdigit(s[i])) {
            int j = i, x = 0;
            while (j < s.size() && isdigit(s[j]))
                x = x * 10 + s[j ++] - '0';
            cout << x << ' ';
            i = j - 1;
        } else if (s[i] == '(') {
            op.push(s[i]);
        } else if (s[i] == ')') {
            while (op.top() != '(') eval();
            op.pop();
        } else {
            while (op.size() && op.top() != '(' && pr[op.top()] >= pr[s[i]])
                eval();
            op.push(s[i]);
        }
    }
    while (op.size()) eval();
    cout << endl;
    return 0;
}