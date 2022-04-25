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

void show_vector(vector *v) {
    printf("---- size = %d, cpp = %d ----\n", v->size, v->cap);
    for (int i = 0; i < v->size; i ++) {
        printf("%d ", v->data[i]);
    }
    printf("\n---------------------------\n");
}

int insert_ele(vector *v, int ind, int val) {
    if (ind < 0 || ind > v->size) return 1;
    if (v->size == v->cap) {
        v->cap *= 2;
        v->data = (int *)realloc(v->data, sizeof(int) * v->cap);
    }
    for (int i = v->size; i > ind; i --) {
        v->data[i] = v->data[i - 1];
    }
    v->data[ind] = val;
    v->size ++;
    return 0;
}

int delete_ele(vector *v, int ind) {
    if (ind < 0 || ind >= v->size) return 1;
    for (int i = ind; i < v->size - 1; i ++) {
        v->data[i] = v->data[i + 1];
    }
    v->size --;
    return 0;
}

int main() {
    int n, cnt;
    scanf("%d%d", &n, &cnt);
    vector *v = init(cnt);
    for (int i = 0; i < n; i ++) {
        int a, b;
        scanf("%d", &a);
        if (a == 0) {
            scanf("%d%d", &a, &b);
            insert_ele(v, a, b);
        } else if (a == 1) {
            scanf("%d", &a);
            delete_ele(v, a);
        }
        show_vector(v);
    }
    delete_vector(v);
    v = NULL;
    return 0;
}