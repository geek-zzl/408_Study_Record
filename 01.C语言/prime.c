#include <stdio.h>
#include <math.h>

#ifdef DEBUG
#define log(frm, argc...) {\
    printf("[%s : %d][%s][%s]",__FUNCTION__,__LINE__,__FILE__,__TIME__);\
    printf(frm, ##argc);\
}
#else
#define log printf
#endif

#define MAX_N 10000000

int is_prime(int n) {
    for (int i = 2; i <= sqrt(n); i ++ )
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    for (int i = 2; i <= MAX_N; i ++) {
        if (!is_prime(i)) continue;
        log("%d\n", i);
    }
    return 0;
}

// #include<stdio.h>
// int main() {
//     int num[100001] = {0};
//     for(int i = 2; i <= 100000; i++){
//         if(!num[i]){
//             printf("%d\n",i);
//             for(int j = 2 * i; j < 100000; j = j + i)
//                 num[j] = 1;
//         }
//     }
// }
