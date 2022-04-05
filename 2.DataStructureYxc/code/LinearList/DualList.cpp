#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

struct Node {
    int val;
    Node *prev, *next;

    Node() : prev(NULL), next(NULL) {}
    Node(int _val) : val(_val), prev(NULL), next(NULL) {}
};

void print(Node* head) {
    for (auto p = head; p; p = p->next)
        cout << p->val << ' ';
    cout << endl;   
}

int main() {
    Node* head = new Node(), *tail = new Node();
    // 双链表 哨兵 左右两大护法
    head->next = tail, tail->prev = head;
    print(head);
    // 头插 
    auto a = new Node(1);
    a->next = head->next, a->prev  = head;
    head->next->prev = a, head->next = a;
    print(head);
    // 头插
    auto b = new Node(2);
    b->next = head->next, b->prev  = head;
    head->next->prev = b, head->next = b;
    print(head);
    // 尾插
    auto c = new Node(3);
    c->next = tail, c->prev = tail->prev;
    tail->prev->next = c, tail->prev = c;
    print(head);

    // 删除 1
    a->next->prev = a->prev;
    a->prev->next = a->next;
    delete a;
    print(head);
    return 0;
}