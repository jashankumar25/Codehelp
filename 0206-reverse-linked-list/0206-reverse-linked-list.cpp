/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if(head == nullptr || head->next == nullptr)
            return head;

        stack<ListNode*> st;

        ListNode* temp = head;

        // Push all nodes into stack
        while(temp != nullptr)
        {
            st.push(temp);
            temp = temp->next;
        }

        // New head
        head = st.top();
        st.pop();

        ListNode* curr = head;

        // Reconnect nodes
        while(!st.empty())
        {
            curr->next = st.top();
            st.pop();
            curr = curr->next;
        }

        curr->next = nullptr;

        return head;
    }
};
/* ---------------------------------------------------
ListNode* reverseList(ListNode* head) {

       if(head==nullptr || head->next==nullptr)
       { return head;
       }
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* forward=nullptr;

        while (curr != nullptr) {
            forward = curr->next;
            curr->next = prev;

            prev = curr;
            curr = forward;
        }
        return prev;
    }
 ----------------------------------------------
  void solve(ListNode*& head, ListNode* prev, ListNode* curr) {
        if (curr == nullptr) {
            head = prev;
            return;
        }
        ListNode* forward = curr->next;
        solve(head, curr, forward);
        curr->next = prev;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        solve(head, prev, curr);
        return head;
    }
--------------------------------------------
 ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* smallHead = reverseList(head->next);

        head->next->next = head;

        head->next = nullptr;
        return  smallHead;
    }
    */