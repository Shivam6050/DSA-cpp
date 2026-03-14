#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// Function to insert node at end (push_back)
void push_back(ListNode*& head, int val) {

    ListNode* newNode = new ListNode(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    ListNode* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
}

// Function to print linked list
void printList(ListNode* head){

    while(head != NULL){
        cout << head->val << " -> ";
        head = head->next;
    }

    cout << "NULL" << endl;
}

class Solution{
public:

    ListNode* middleNode(ListNode* head){

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};

int main(){

    ListNode* head = NULL;

    // inserting elements using push_back
    push_back(head, 1);
    push_back(head, 2);
    push_back(head, 3);
    push_back(head, 4);
    push_back(head, 5);

    cout << "Linked List: ";
    printList(head);

    Solution obj;

    ListNode* mid = obj.middleNode(head);

    cout << "Middle Node Value: " << mid->val << endl;

    return 0;
}