// 设线性表L   采用带头结点的单链表保存
// 表中的结点定义如下
// typedef struct node {
//     int data;
//     struct node *next;
// }NODE;
// 请设计一个空间复杂度为O(1)且时间上尽可能高效的算法,
// 重新排列L中的各结点, 得到线性表L = (a1, an, a2, an-1, a3, an-2, ...)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <iostream>
class Solution {
public:
    struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };
    void rearrangedList(ListNode* head) {
        // 空间O(1)
        if (!head->next) return ;
        int n = 0;
        for (auto p = head; p; p = p ->next) {
            n ++;
        }
        
        int left = (n + 1) / 2;
        auto a = head;
        for (int i = 0; i < left - 1; i ++)
            a = a->next;
        
        struct ListNode *b = a->next, *c = b->next;
        a->next = NULL; // head 前半段
        b->next = NULL; // b 是新表的头
        // 把C倒挂到b
        // 依次取下结点 头插到b之前。不带头结点的头插法
        while (c) { 
            auto p = c->next;
            c->next = b;
            b = c, c = p;
        }
        // 合并两个链表
        for (auto p = head, q = b; q; ) {
            auto o = q->next;
            q->next = p->next;
            p->next = q;
            p = p->next->next;
            q = o;
        }   
    }
};
// 反转链表和合并链表