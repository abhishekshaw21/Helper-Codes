//Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//Create a new Node
ListNode *l1=new ListNode();
//Create a pointer to the Node
ListNode *p=head; 
or
ListNode *p=NULL;