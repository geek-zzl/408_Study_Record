// 用单链表保存m个整数, 节点的结构位 : |data|link|, 且|data|<=n(n为正整数)。
// 现要求设计一个时间复杂度尽可能高效的算法,
// 对于链表中data的绝对值相等的结点,
// 尽保留第一次出现的节点而删除其余绝对值相等的节点。
// m个节点(1000) 最大值为n(10000)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <iostream>
using namespace std;
class Solution {
public:
    struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };
    ListNode* filterList(ListNode* head) {
        bool st[10001] = {};
        st[abs(head->val)] = true;
        for (auto p = head; p->next;) {
            int x = abs(p->next->val);
            if(st[x]) {
                auto q = p->next;
                p->next = q->next;
                delete q;
            } else {
                p = p->next;
                st[x] = true;   
            } 
        }
        return head;
    }
};

// 如何判断一个数是否出现过
// 开一个bool a[N] O(n) 
// 哈希表 O(min(m,n));
// 