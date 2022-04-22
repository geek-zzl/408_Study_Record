#include <stdio.h>
#include <stdlib.h>

typedef struct stack {
    int *data;
    int cap, size;
} stack;

stack *init_stack(int n) {
    stack *s = (stack *)malloc(sizeof(stack));
    s->data = (int *)malloc(sizeof(int) * n);
    s->cap = n;
    s->size = 0;
    return s;
}

void delete_stack(stack *s) {
    free(s->data);
    free(s);
}

int push(stack *s, int x) {
    if (s->cap == s->size) {
        s->cap *= 2;
        s->data = (int *)realloc(s->data,sizeof(int) * (s->cap));
    }
    s->data[s->size] = x;
    s->size ++;
    return 0;
}

int pop(stack *s) {
    if (s->size == 0)
        return -1;
    s->size --;
    return 0;
}

int top(stack *s) {
    if (s->size == 0)
        return -1;
    return s->data[s->size - 1];
}

void show_stack(stack *s) {
    printf("cap : %d, size : %d\n", s->cap, s->size);
    for (int i = 0; i < s->size; i ++)
        printf("%d ", s->data[i]);
    printf("\n");
}
int main() {
    int n,m;
    scanf("%d%d", &n, &m);
    stack *s = init_stack(m);

    for (int i = 0; i < n; i ++) {
        int a;
        scanf("%d", &a);
        if (a == 0) {
            scanf("%d", &a);
            push(s, a);
        } else if (a == 1) {
            pop(s);
        } else {
            printf("top -> %d\n", top(s));
        }
        show_stack(s);
    }
    return 0;
}
