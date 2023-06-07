#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data  = data;
        next = NULL;
    }
};
Node *take_input()
{
    int data;
    cin>>data;
    Node *head = NULL;
    while(data!=-1)
    {
    //Dynamic_Allocation_of_Linked_List
        Node *newnode = new Node(data);
        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            Node *temp = head;
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        cin>>data;
    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
   Node *head  = take_input();
   print(head);
}