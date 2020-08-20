class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head)
        return false;
    
    const auto tag = 0b1;
    auto current = head;
    while(current->next)
    {   
        auto next = current->next;
        
        if ((uintptr_t)current->next & tag)
            return true;
        
        current->next = (ListNode*)((uintptr_t)current->next | tag);
        current = next;
    }
    
    return false;
    }
};
