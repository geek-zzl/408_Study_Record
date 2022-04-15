#include <stdio.h>
#include <stdlib.h>

typedef struct vector {
    int * data;
    int size, cap;
} vector;

vector *init(int cnt) {
    vector *p = (vector *)malloc(sizeof(vector));
    p->data = (int *)malloc(sizeof(int) * cnt);
    p->cap = cnt;
    p->size = 0;
    return p;
}

void delete_vector(vector *p) {
    free(p->data);
    free(p);
}


int main() {
    vector *l = init(100);
    return 0;
}