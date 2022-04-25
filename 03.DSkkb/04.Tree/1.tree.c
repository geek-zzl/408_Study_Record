#include <stdio.h>
#include <string.h>

typedef struct node {
    int data;
    struct node *lchild, *rchild;
} node;

void p2(node *p) {
    if (p == NULL) return ;
    printf("%d ", p->data);
    p2(p->lchild);
    p2(p->rchild);
}
void preorder(node *p) {
    printf("%d ", p->data);
    if (p->lchild != NULL) preorder(p->lchild);
    if (p->rchild != NULL) preorder(p->rchild);
}

void level(node *p) {
    node *que[15];
    int front = 0, rear = 1;
    que[0] = p;
    while (front != rear) {
        node *temp = que[front];
        front ++;
        print("%d ", temp->data);
        if (temp->lchild != NULL) que[rear++] = temp->lchild;
        if (temp->rchild != NULL) que[rear++] = temp->rchild;
    }
    printf("\n");
}

void midorder(node *p) {
    if (p->lchild != NULL) midorder(p->lchild);
    printf("%d ", p->data);
    if (p->rchild != NULL) midorder(p->rchild);
}

void postorder(node *p) {
    if (p->lchild != NULL) postorder(p->lchild);
    if (p->rchild != NULL) postorder(p->rchild);
    printf("%d ", p->data);
}

int main() {
    node tree[15];
    memset(tree, 0, sizeof(tree));
    tree[1].data = 5, tree[1].lchild = &tree[2], tree[2].rchild = &tree[3];
    return 0;
}
