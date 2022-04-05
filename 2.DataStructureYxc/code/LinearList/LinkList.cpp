#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

// typedef 
struct Node {
    int val;
    Node *next;
    Node(): next(NULL) {}
    Node(int _val): val(_val), next(NULL) {}

};
// LNode, *LinkList;

void print(Node* head) {
    for (auto p = head; p; p = p->next)
        cout << p->val << ' ';
    cout << endl;   
}

int main() {
    Node *head = new Node(1);
    // 尾插
    auto a = new Node(2);
    head->next = a;
    // 尾插
    auto b = new Node(3);
    a->next = b;
    // 头插
    // 顺序很重要
    auto c = new Node(4);
    c->next = head->next;
    head->next = c;
    // delete(c);
    auto d = head;
    head = head->next;
    delete d;
    print(head);
    return 0;
}

// TLE