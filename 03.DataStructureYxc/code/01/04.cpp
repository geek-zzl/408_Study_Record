// (x)a --> (?)b
// a进制 转 b进制
// 高精度 加法 乘法 除法
// 将 M 进制的数 X 转换为 N 进制的数输出。
// 10 2 11
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    
    int a, b;
    string s;
    cin >> a >> b >> s;
    
    vector<int> A;
    for (int i = 0; i < s.size(); i ++) {
        char c = s[s.size() - 1 - i];
        if (c >= 'A') {
            A.push_back(c - 'A' + 10);
        } else
            A.push_back(c - '0');
    }
        
    string res;
    if (s == "0") res = "0";
    else {
        // a*m+b / n;
        while (A.size()) {
            int r = 0;
            for (int i = A.size() - 1; i >= 0; i --) {
                A[i] += r * a;
                r = A[i] % b;
                A[i] /= b;
            }
            while (A.size() && A.back() == 0)
                A.pop_back();
            if (r < 10) {
                res += to_string(r);
            } else {
                res += r - 10 + 'a';
            }
        }
        reverse(res.begin(), res.end());
    }    
    cout << res << endl;
    return 0; 
}