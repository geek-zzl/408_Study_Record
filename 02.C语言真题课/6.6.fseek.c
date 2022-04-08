#include <stdio.h>

int main() {
    FILE *fp = fopen("lagogo", "w+");
    if (!fp)
        return -1;
    
    fprintf(fp, "%s", "abcdefg");

    fseek(fp, -3,2);

    putchar(fgetc(fp));
    fclose(fp);
    return 0;
}