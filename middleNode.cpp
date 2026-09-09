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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp;
        int cnt=0;
        temp=head;
        while(temp!=NULL){
         temp=temp->next;
         cnt++;
        }
        cnt=cnt/2;
        temp=head;
        while(cnt!=0){
            temp=temp->next;
            cnt--;
        }
        return temp;
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

    ListNode* middle = obj.middleNode(head);

    cout << "Middle node: " << middle->val << endl;

    return 0;
}