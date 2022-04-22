// Longest Collatz sequence
// The following iterative sequence is defined for the set of positive integers:
//  n -> n/2(n is even) n -> 3*n+1 (n is odd)
// Using the rule above and starting with , we generate the following sequence:
// It can be seen that this sequence (starting at  and finishing at ) contains  terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at .
// Which starting number, under one million, produces the longest chain?
// NOTE: Once the chain starts the terms are allowed to go above one million.
#include <stdio.h>

int num[10000005];
// 记忆数组, 用来保存计算过的值

int func(long long x) {
    if (x == 1)
        return 1;
    
    if (x < 10000000 && num[x] != 0)
        return num[x];
    int t = 0;
    if (x % 2 == 0)
        t = func(x / 2) + 1;
    else    
        t = func(3 * x + 1) + 1;
    if (x < 10000000)
        num[x] = t;

    return t;
    // x 的下一项到1序列的长度, 加x本身长度;
}

int main() {
    int ans = 0, cnt = 0;
    for (int i = 1; i < 1000000; i ++) {
        int t = func(i);
        if (t > cnt) {
            ans = i;
            cnt = t;
        }
    }
    printf("%d\n", ans);
    printf("%d\n", func(99999));
    return 0;
}