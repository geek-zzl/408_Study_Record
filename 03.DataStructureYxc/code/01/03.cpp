// 将一个长度最多为 30 位数字的十进制非负整数转换为二进制数输出。
// 10 --> 2
// 高精度 除法
// big decimal
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

// 除了除法之外 加减乘 都是需要倒着存储
// C = A / b; 商是C, 余数是r;
vector<int> div(vector<int> A, int b) {
    vector<int> C;
    int r = 0;
    for (int i = A.size() - 1; i >= 0; i --) {
        r = r * 10 + A[i];
        C.push_back(r / b);
        r %= b;
    }

    reverse(C.begin(), C.end());

    while (C.size() > 0 && C.back() == 0) C.pop_back();

    return C; 
}

int main() {
    string s;
    while (cin >> s) {
        vector<int> A;
        for (int i = 0; i < s.size(); i ++ )
            A.push_back(s[s.size() - i - 1] - '0');
        // for (int i = s.size() - 1 ; i >= 0; i -- )
        //     A.push_back(s[i] - '0');

        string res; 
        if (s == "0") res = "0";
        else {
            while (A.size()) {
                res += to_string(A[0] % 2);
                A = div(A, 2);
                for (int i = 0; i < s.size(); i ++ )
                    cout << A[i] << "_";
            }
        }
        reverse(res.begin(), res.end());
        cout << res << endl;
    }
    return 0;
}