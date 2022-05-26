// 462 注册账号
#include<stdio.h> 
#include <string.h>
typedef struct person{ 
    char id_type;
    union { 
        char id_num[18]; 
        long long qq_num; 
    }; 
} person; 

person all_num[10000]; 
int women, man, n, count; 
long long sum = 0; 

int main(){ 
    scanf("%d", &n); 
    for(int i = 1; i <= n; i++) {
        scanf("%s", &all_num[i].id_type); 
        switch(all_num[i].id_type) {
            case 'i': 
                scanf("%s", all_num[i].id_num);
                int len = strlen(all_num[i].id_num);
                char a = all_num[i].id_num[len - 2] - '0';
                if (a % 2 == 0)
                    women ++;
                else
                    man ++;
                break;
            case 'q':
                scanf("%lld", &all_num[i].qq_num);
                sum += all_num[i].qq_num;
                count ++;
                break;
            default : break;
        }
    }
    if (count)
        printf("%d %d% lld\n", man, women, sum / count);
    else
        printf("%d %d% lld\n", man, women, 0);
    return 0;
}
