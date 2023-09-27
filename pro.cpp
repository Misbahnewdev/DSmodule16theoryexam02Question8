#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    //constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
//Insert at head
void InsertAtHead(Node* &head, int d)
{
    Node* NewNode = new Node(d);
    NewNode->next = head;
    head = NewNode;
}
//Insert at tail
void InserAtTail(Node* &head, int d)
{
    Node* newnNode = new Node(d);
    if(head == NULL)
    {
        head = newnNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnNode;
}
//reverse funtion
 Node* reversprint(Node* &head)
 {
    Node* prev = NULL;
    Node* current = head;
    Node* nextp;

    while (current!=NULL)
    {
        nextp = current->next;
        current->next = prev;

        prev = current;
        current =nextp;
    }
    return prev;
 }
void print(Node* &head)
{
    Node* temp = head;
    while (temp!= NULL)
    {
        cout<<temp->data;
        if(temp->next != NULL)
        cout<<" -> ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    //head 
    Node* head = NULL;

    //InserAtTail(head, 1);
    //InserAtTail(head, 2);
    //InserAtTail(head, 3);
    //InserAtTail(head, 4);
    //InserAtTail(head, 5); 
    //print(head);

   //InsertAtHead(head,1);
   //InsertAtHead(head,2);
    //InsertAtHead(head,3);
    //InsertAtHead(head,4);
    //InsertAtHead(head,5);

    // Node* k=reversprint(head);
    //cout<<k;

    int n;
    cout<<"Choice 1: Insertion At Head"<<endl<<"Choice 2: Inserion AT Tail "<<endl<<"couice 3: exit"<<endl;
    int choice = 2;

    while (choice == 1 || choice == 2)
    {
        cout<<"Enter the Value: ";
        cin>>n;
        if(choice == 2) InserAtTail(head, n);
        else if(choice == 1) InsertAtHead(head, n);
        cout<<"Next choice :";
        cin>>choice;
    }
    //call head or tail
    print(head);
    //reverse call
    Node* k=reversprint(head);
    print(k);
}