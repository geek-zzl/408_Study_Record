// 中缀表达式求值
// +-*/
// 注意：
// 数据保证给定的表达式合法。
// 题目保证符号 - 只作为减号出现，不会作为负号出现，例如，-1+2,(2+2)*(-(1+1)+2) 之类表达式均不会出现。
// 题目保证表达式中所有数字均为正整数。
// 题目保证表达式在中间计算过程以及结果中，均不超过 231−1。
// 题目中的整除是指向 0 取整，也就是说对于大于 0 的结果向下取整，例如 5/3=1，对于小于 0 的结果向上取整，例如 5/(1−4)=−1。
// C++和Java中的整除默认是向零取整；Python中的整除//默认向下取整，因此Python的eval()函数中的整除也是向下取整，在本题中不能直接使用。

// 两个栈
// 操作符 ( + ) | * ( + ) | +
// 操作数 2 2 1 1 3
// 4 2 3
// 8 3
// 数 压入
// ( 压入
// ) 操作到(
// +-*/ 操作到遇到( 或 栈顶运算符优先级 < 当前运输符优先级
// 操作完运算符栈
// 最后的数栈栈顶就是答案

// 中缀表达式 转 后缀表达式
// 括号匹配

#include <iostream>
#include <cstring>
#include <algorithm>
#include <unordered_map>
#include <stack>

using namespace std;

stack<char> op;
stack<int> num;

void eval() {
    auto b = num.top(); num.pop();
    auto a = num.top(); num.pop();
    auto c = op.top(); op.pop();

    int x; 
    if (c == '+') {
        x = a + b;
    } else if (c == '-') {
        x = a - b;
    } else if (c == '*') {
        x = a * b;
    } else {
        x = a / b;
    }
    num.push(x);
}

int main() {
    string s;
    cin >> s;

    unordered_map<char, int> pr{ {'+', 1}, {'-', 1}, {'*', 2},{'/', 2}};
    for (int i = 0; i < s.size(); i ++) {
        if (isdigit(s[i]))
        {
            int j = i, x = 0;
            while (j < s.size() && isdigit(s[j]))
                x = x * 10 + s[j ++] - '0';
            num.push(x);
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
    cout << num.top() << endl;
    return 0;
}