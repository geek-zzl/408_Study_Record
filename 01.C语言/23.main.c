#include <stdio.h>


// int main(int argc, char const *argv[])
// {
//     /* code */
//     return 0;
// }

int main(int argc, char *argv[], char **env) {
    printf("argc = %d\n", argc);
    for (int i = 0; i < argc; i ++) {
        printf("argv[%d] = %s\n", i , argv[i]);
        (*env)[1];
        
    }
    for (int i = 0; env[i]; i ++) {
        printf("env[%d] = %s\n", i , env[i]);
    }
    return 0;
}