#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // Node(int data)
    // {
    //     this->data = data;
    // }
};
// class NodeOp
// {
// public:

// };
class Solution
{
public:
    void insert(Node **head, int d)
    {

        Node *temp = new Node();
        temp->data = d;
        temp->next = *head;
        *head = temp;
    }
    int Len(Node *head)
    {
        int len = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            len++;
            temp = temp->next;
        }
        return len;
    }
    int getMiddle(Node *head)
    {
        // Your code here
        Node *temp = head;
        int len = Len(head);
        int mid = len / 2;
        while (mid--)
        {
            temp = temp->next;
        }
        int ans = temp->data;
        cout << ans;
        return ans;
    }
};

int main()
{
    Node *head = NULL;
    // cout << head;
    // NodeOp *obj = new NodeOp();
    Solution *so = new Solution();
    for (int i = 5; i >= 0; i--)
    {
        so->insert(&head, i);
        so->getMiddle(head);
        cout << "mid" << endl;
    }
    return 0;
}