#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
bool isEmpty(Node* head)
{
    return head==nullptr;
}
void addList(Node* &head, int data2)
{
    Node* newNode=new Node();
    newNode->data=data2;
    newNode->next=head;
    head=newNode;
}
void print(Node* head)
{
    Node * temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void del(Node* &head)      // simply head
{
    if(head==nullptr)
    {
        return;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
}
void del2(Node* &head, int pos)            // deleting the specified element
{
    if(head==nullptr)
    {
        return;
    }
    Node* temp=head;
    while(temp!=nullptr)
    {
        if(temp->data==pos)
        {
            temp->data=temp->next->data;
            temp->next=temp->next->next;
        }
        else
        temp=temp->next;
    }
    
}
void del3(Node* &head)            // deleting the duplicate elements
{
    if(head==nullptr)
    {
        return;
    }
    Node* temp=head;
    while(temp->next!=nullptr)
    {
        if(temp->data==temp->next->data)
        {
            temp->data=temp->next->data;
            temp->next=temp->next->next;
        }
        else
        temp=temp->next;
    }
    
}
void rev(Node* head)
{
    if(head==nullptr)
    {
        return;
    }
    rev(head->next);
    cout<<head->data<<" ";
}
int main()
{
   Node* head=nullptr;
   if(isEmpty(head))
   {
    cout<<"List empty"<<endl;
   }
   else
   {
    cout<<"not empty"<<endl;
   }
   addList(head, 5);
   addList(head, 5);
   addList(head, 3);
   addList(head, 3);  
   addList(head, 3);
   print(head);
   del(head);
   cout<<endl;
   print(head);
   cout<<endl;
   del3(head);
   print(head);
   cout<<endl;
   rev(head);
}