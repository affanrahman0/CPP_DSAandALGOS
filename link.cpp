#include<iostream>
using namespace std;
#include"link.h"
Node::Node(int data)
{
    this->data = data;
    this->next = NULL;
}
list::list(){ 
    head = NULL; 
}
void list::insert(int data)
{
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) 
    {
  
        temp = temp->next;
    }
    temp->next = newNode;
}
void list::print()
{
    if(head==NULL) 
    {
        cout<<"The list is empty"<<endl;
    }
    else
    {
        Node* temp = head;
        while (temp != NULL) 
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
    
}
list::~list()
{
    
    Node *ptr;
    while(head)
    {
        ptr=head;
        head = head->next;
        delete ptr;
    } 
    cout<<"The list is deleted"<<endl;   
}
list::list(const list &a)
{
    Node* temp = a.head;
    head = new Node(temp->data);
    Node *cur = head;
    while(temp->next)
    {
        cur->next = new Node(temp->next->data);
        temp = temp->next;
        cur = cur -> next;
    }
}
int main()
{
    list a;
    a.insert(1);
    a.insert(2);
    a.insert(3);
    a.insert(4);
    a.print();
    list h (a);
    h.insert(7);
    // cout<<endl;
    h.print();
    // cout<<endl;
    a.print();
    return 0;

}