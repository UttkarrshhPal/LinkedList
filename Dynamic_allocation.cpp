#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void print(Node *head)
{
    // always save your head
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp = temp->next;
    }

} 
int main()
{
    // Dynamic Allocation 
    Node *n1 = new Node(10);
    Node *head = n1;
    Node *n2 = new Node(11);
    n1->next = n2;
    print (head);

}