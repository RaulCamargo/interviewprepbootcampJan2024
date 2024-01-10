/*
    Leetcode 19: Remove Nth Node From End of List
    Given the head of a linked list, remove the nth node from the end of the list and return its head.
*/

#include <iostream>

/*
    Definition for singly-linked list.
*/
 struct ListNode 
 {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if(head == NULL || head->next == NULL)
            return NULL;

        ListNode * left = head;
        ListNode * right = head;

        for(int i = 0; i < n; i++)
        {
            right = right->next;
        }

        while(right != NULL)
        {
            if(right->next == NULL)
            {
                left->next = left->next->next;
                return head;
            }
            left = left->next;
            right = right->next;
        }
        
        head = head->next;
        return head;
    }