// 单链表
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node * next;
} node;

typedef struct list {
    int size;
    struct node * head;
} list;

node *get_new_node(int val) {
    node *p = (node *)malloc(sizeof(node));
    p->data = val;
    p->next = NULL;
    return p;
}

list *init() {
    list *p = (list *)malloc(sizeof(list));
    p->head = get_new_node(0);
    p->size = 0;
    return p;
}

int insert_ele(list *l, int ind, int val) {
    if (ind < 0 || ind > l->size) return 1;
    node *p = l->head;
    for (int i = 0; i < ind; i ++) {
        p = p->next;
    }
    node *q = get_new_node(val);
    q->next = p->next;
    p->next = q;
    l->size ++;
    return 0;
}

int delete_ele(list *l, int ind) {
    if (ind < 0 || ind > l->size) return 1;
    node *p = l->head;
    for (int i = 0; i < ind; i ++) {
        p = p->next;
    }
    node *q = p->next;
    p->next = q->next;
    free(q);
    l->size --;
    return 0;
}

void delete_list(list *p) {
    node *q = p->head;
    for (int i = 0; i <= p->size; i ++) {
        node *t = q->next;
        free(q);
        q = t;
    }
    free(p);
}

void show_list(list *l) {
    printf("---- size = %d ----\n", l->size);
    for (node *p = l->head->next; p; p = p->next) {
        printf("%d -> ", p->data);
    }
    printf("NULL\n------------------\n");
}

int main() {
    int n;
    scanf("%d", &n);
    list *l = init();
    for (int i = 0; i < n; i ++) {
        int a, b;
        scanf("%d", &a);
        if (a == 0) {
            scanf("%d%d", &a, &b);
            insert_ele(l, a, b);
        } else if (a == 1) {
            scanf("%d", &a);
            delete_ele(l, a);
        }
        show_list(l);
    }
    delete_list(l);
    l = NULL;
    return 0;
}