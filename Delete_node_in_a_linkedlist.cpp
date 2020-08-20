class Solution {
public:
    void deleteNode(ListNode* node) {
        if(node->next == nullptr)
    {
        delete node;
        node = nullptr;
        return;
    }
    
    ListNode* todel = node->next;
    
    node->next = node->next->next;
    node->val = todel->val;
    
    
    delete todel;
    todel = nullptr;
    }
};
