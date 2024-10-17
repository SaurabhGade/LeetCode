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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int> , greater<int> > pq;
        ListNode *ans = new ListNode();
        for(int i = 0; i < lists.size(); i++){
            ListNode *ptr = lists[i];
            while(ptr != NULL){
                pq.push(ptr->val);
                ptr = ptr->next;
            }
        }
        if(pq.empty()) return NULL;
        ListNode *temp = ans;
        while(!pq.empty()){
            temp->val = pq.top();
            pq.pop();
            if(pq.empty()) break;
            temp->next = new ListNode();
            temp = temp->next;
        }
        temp = NULL;
        return ans;
    }
};