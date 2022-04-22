#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

typedef struct stack {
    struct node *head;
    int size;
} stack;

node * get_new_node(int x) {
    node * a= (node *)malloc(sizeof(node));
    a->next = NULL;
    a->data = x;
    return a;
}

stack *init_stack() {
    stack *s = (stack *)malloc(sizeof(stack));
    s->head = get_new_node(0);
    s->size = 0;
    return s;
}

void delete_stack(stack *s) {
    node *p = s->head;
    while (p != NULL) {
        node *q = p->next;
        free(p);
        p = q;
    }
    free(s);
}

int push(stack *s, int x) {
    // 头插
    node *a = get_new_node(x);
    a->next = s->head->next;
    s->head->next = a;
    s->size ++;
    return 0;
}

int pop(stack *s) {
    if (s->size == 0)
        return -1;
    node *q = s->head->next;
    s->head->next = q->next;
    free(q);
    s->size --;
    return 0;
}

int top(stack *s) {
    if (s->size == 0)
        return -1;
    return s->head->next->data;
}

void show_stack(stack *s) {
    printf("s -> size : %d\n", s->size);
    node *q = s->head->next;
    while (q != NULL) {
        printf("%d ", q->data);
        q = q->next;
    }
    printf("\n------------\n");
}
int main() {
    int n;
    scanf("%d", &n);
    stack *s = init_stack();
    for (int i = 0; i < n; i ++) {
        int a;
        scanf("%d", &a);
        if (a == 0) {
            scanf("%d", &a);
            push(s, a);
        } else if (a == 1) {
            pop(s);
        } else {
            printf("top -> %d \n", top(s));
        }
        show_stack(s);
    }
    delete_stack(s);
    return 0;
}