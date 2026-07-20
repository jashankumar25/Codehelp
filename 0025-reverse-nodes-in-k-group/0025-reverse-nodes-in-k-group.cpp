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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr)
            return nullptr;

        ListNode* temp = head;
        int cnt = 0;

        while (temp != nullptr && cnt < k) {
            temp = temp->next;
            cnt++;
        }

        if (cnt < k) {
            return head;
        }

        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* forward;
        
        int count = 0;

        while (curr != nullptr && count < k) {
            forward = curr->next;
            curr->next = prev;

            prev = curr;
            curr = forward;
            count++;
        }

        head->next = reverseKGroup(curr, k);
        return prev;
    }
};
/*class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        vector<int> arr;

        ListNode* temp = head;

        while(temp != nullptr)
        {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        for(int i=0;i+k<=arr.size();i+=k)
        {
            reverse(arr.begin()+i, arr.begin()+i+k);
        }

        temp = head;
        int i=0;

        while(temp!=nullptr)
        {
            temp->val = arr[i++];
            temp=temp->next;
        }

        return head;
    }
};
------------------------------------------
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        if(head == nullptr) return head;

        ListNode dummy(0);
        dummy.next = head;

        ListNode* prevGroup = &dummy;
        ListNode* curr = head;

        while(true)
        {
            stack<ListNode*> st;
            ListNode* temp = curr;
            int count = 0;

            while(temp != nullptr && count < k)
            {
                st.push(temp);
                temp = temp->next;
                count++;
            }

            if(count < k)
                break;

            while(!st.empty())
            {
                prevGroup->next = st.top();
                prevGroup = prevGroup->next;
                st.pop();
            }

            prevGroup->next = temp;
            curr = temp;
        }

        return dummy.next;
    }
};
------------------------------class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        if (head == nullptr || k == 1)
            return head;

        // Count total nodes
        int count = 0;
        ListNode* temp = head;

        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        // Dummy node
        ListNode dummy(0);
        dummy.next = head;

        ListNode* prevGroup = &dummy;
        ListNode* curr = head;

        while (count >= k) {

            ListNode* prev = nullptr;
            ListNode* groupHead = curr;

            // Reverse k nodes
            for (int i = 0; i < k; i++) {
                ListNode* forward = curr->next;
                curr->next = prev;
                prev = curr;
                curr = forward;
            }

            // Connect previous group
            prevGroup->next = prev;

            // Connect current group to remaining list
            groupHead->next = curr;

            // Move prevGroup to end of current group
            prevGroup = groupHead;

            count -= k;
        }

        return dummy.next;
    }
};
*/