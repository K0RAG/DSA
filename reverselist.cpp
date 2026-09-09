#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp,* front,* prev;
        temp=head;
        prev=NULL;
        while(temp!=NULL){
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
};

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    ListNode* head = nullptr;
    ListNode* temp = nullptr;

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        ListNode* newNode = new ListNode(x);

        if(head == nullptr) {
            head = newNode;
            temp = head;
        }
        else {
            temp->next = newNode;
            temp = temp->next;
        }
    }

    Solution obj;

    ListNode* reversedHead = obj.reverseList(head);

    cout << "Reversed list: ";

    temp = reversedHead;

    while(temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;

    return 0;
}