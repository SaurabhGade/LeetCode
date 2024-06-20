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
    void reorderList(ListNode* head) {
        vector<int> vec;
        ListNode *t = head;
        while(t != NULL){
            vec.push_back(t->val);
            t = t->next;
        }
        t = head;
        int i = 0 , j = vec.size()-1;
        while(i <= j && t != NULL ){
           t->val = vec[i];
           t = t->next;
           if(t != NULL){
           t->val = vec[j];
           t = t->next;
           }
            i++;
            j--;
        }
    }
};