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
    bool hasCycle(ListNode* head) {

        if (head == NULL)
            return false;

        unordered_map<ListNode*, int> visited;

        ListNode* temp = head;

        while (temp != NULL) { // cycle is prsendt
            if (visited[temp] == 1) {
                return 1;
            }
            visited[temp] = 1;
            temp = temp->next;
        }
        return  false;
    }
};
/*
    bool hasCycle(ListNode* head) {
        if(head==nullptr)
        return  false;
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                return true;
        }
        return false;
    }
class Solution {
public:
    bool isCircular(Node *head) {

        if (head == NULL)
            return true;

        Node* temp = head->next;

        while (temp != NULL && temp != head) {
            temp = temp->next;
        }

        if (temp == head)
            return true;

        return false;
    }
};class Solution {
public:
    bool isCircular(Node *head) {

        if(head == NULL)
            return true;

        if(head->next == NULL)
            return false;

        Node* temp = head;

        while(temp != NULL && temp->next != head)
        {
            temp = temp->next;
        }

        if(temp == NULL)
            return false;

        return true;
    }
};
*/
