#include <stdio.h>

#define MAX_N 100000000

int prime[MAX_N + 5] = {0};

void init_prime() {
    for (int i = 2; i <= MAX_N; i ++){
        if(prime[i])
            continue;
        prime[++prime[0]] = i; // focus
        //prime[0] 计数器, 
        for (int j = i, I = MAX_N/i; j <= I; j ++)
        {
            prime[i * j] = 1;
        }
    }
    return ;
}

int main(){
    init_prime();
    for (int i = 1; i <= prime[0]; i ++) {
        printf("%d\n", prime[i]);
    }
}