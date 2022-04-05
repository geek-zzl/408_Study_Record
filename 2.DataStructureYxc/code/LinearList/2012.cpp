// 2012 42
// 两个链表会在某一个点重合
// 设str1和str2分别指向两个单词所在单链表的头节点,
// 链表节点结构为|data|next|, 
// 请设计一个时间上尽可能高效的算法, 
// 找出有str1和str2所指向两个链表共同后缀的起始位置
// (如图中字符i所在节点的位置p)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
// struct ListNode *findFirstCommonNode(struct ListNode *headA, struct ListNode *headB) {
//     // p a+c+b
//     // q b+c+a
//     // a = b 两次相遇
//     // a > b 一次相遇 终点相遇
//     // 不相交 空


// }
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {

public:
    struct ListNode {
        int val;
        struct ListNode *next;
    };

    ListNode *findFirstCommonNode(ListNode *headA, ListNode *headB) {
        auto p = headA, q = headB;
        while (p != q) {
            p = (p ? p->next : headB);
            q = (q ? q->next : headA);
        }
        return p;
    }
};
// 和三段长度之和成线性
