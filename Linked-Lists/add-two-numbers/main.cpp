#include <iostream>
#include <vector>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* current = dummyHead;
        int carry = 0;
        
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;
            
            int sum = carry + x + y;
            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
             
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }
        
        ListNode* result = dummyHead->next;
        delete dummyHead;
        return result;
    }
};

// Helper function to create a linked list from a vector
ListNode* createLinkedList(const std::vector<int>& values) {
    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;
    for (int val : values) {
        current->next = new ListNode(val);
        current = current->next;
    }
    ListNode* result = dummy->next;
    delete dummy;
    return result;
}

// Helper function to convert a linked list to a vector
std::vector<int> linkedListToVector(ListNode* head) {
    std::vector<int> result;
    while (head != nullptr) {
        result.push_back(head->val);
        head = head->next;
    }
    return result;
}

// Helper function to print a vector
void printVector(const std::vector<int>& vec) {
    std::cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i < vec.size() - 1) std::cout << ",";
    }
    std::cout << "]" << std::endl;
}

int main() {
    Solution solution;

    // Example 1
    ListNode* l1 = createLinkedList({2, 4, 3});
    ListNode* l2 = createLinkedList({5, 6, 4});
    ListNode* result = solution.addTwoNumbers(l1, l2);
    std::cout << "Example 1 Output: ";
    printVector(linkedListToVector(result));

    // Example 2
    l1 = createLinkedList({0});
    l2 = createLinkedList({0});
    result = solution.addTwoNumbers(l1, l2);
    std::cout << "Example 2 Output: ";
    printVector(linkedListToVector(result));

    // Example 3
    l1 = createLinkedList({9, 9, 9, 9, 9, 9, 9});
    l2 = createLinkedList({9, 9, 9, 9});
    result = solution.addTwoNumbers(l1, l2);
    std::cout << "Example 3 Output: ";
    printVector(linkedListToVector(result));

    return 0;
}