#include <stdio.h>
#include <stdlib.h>

typedef struct queue {
    int *data;
    int cap, size, front, rear;
}queue;

queue *init_queue(int n) {
    queue *q = (queue *)malloc(sizeof(queue));
    q->data = (int *)malloc(sizeof(int) * n);
    q->cap = n, q->size = 0;
    q->front = 0, q->rear = 0;
    return q;
}

void delete_queue(queue * q) {
    free(q->data);
    free(q);
}

int push(queue *q, int x) {
    // ((q->rear + q->cap) - q->front) % q->cap + 1 == q->cap;
    // (q->rear + 1) % q->cap == q->front
    if (q->size + 1 == q->cap) {
        int *p = (int *)malloc(sizeof(int) * q->cap * 2);
        for (int i = q->front, j = 0; j < q->size; i = (i + 1) % q->cap, j ++) {
            p[j] = q->data[i];
        }
        q->cap *= 2;
        q->front = 0;
        q->rear = q->size;
        int *t = q->data;
        q->data = p;
        free(t);
    }
    q->data[q->rear] = x;
    q->rear ++;
    q->rear %= q->cap;
    q->size ++;
    return 0;

}

int pop(queue *q) {
    if (q->size == 0)
        return -1;
    q->front ++;
    q->front %= q->cap;
    q->size --;
    return 0;
}

int get_front(queue * q) {
    if (q->size == 0)
        return -1;
    return q->data[q->front];
}
void show_queue(queue *q) {
    printf("size = %d, cap = %d\n", q->size, q->cap);
    for (int i = q->front; i != q->rear; i = (i + 1) % q->cap) {
        printf("%d ", q->data[i]);
    }
    printf("\n---------------\n");
}
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    queue *q = init_queue(m);

    for (int i = 0; i < n; i ++ ) {
        int a;
        scanf("%d", &a);
        if (a == 0) {
            scanf("%d", &a);
            push(q, a);
        } else if (a == 1) {
            pop(q);
        } else {
            printf("front -> %d\n", get_front(q));
        }
        show_queue(q);
    }
    delete_queue(q);
    return 0;
}