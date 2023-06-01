#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    
    Node(int value){
        this->data =value;
        this->next =NULL;
    }
};

// Insertion of Node at Head
void InsertAtHead(Node* &head, int d){

    Node* NewNode = new Node(d);
    NewNode->next = head;
    head = NewNode;

}

void PrintHead(Node* &head){

    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        // cout<<"Next: "<<Node1->next<<endl;
        temp = temp->next;
    }    
    cout<<endl;

}

int main()
{  
    // create a new node
    Node* Node1 = new Node(10);

    cout<<"Data: "<<Node1->data<<endl;
    cout<<"Next: "<<Node1->next<<endl;

    cout<<endl;

    // Assign Head
    Node* head = Node1;

    // Insert a new node at head
    InsertAtHead(head,12);
    InsertAtHead(head,14);
    InsertAtHead(head,16);
    PrintHead(head);
    
    return 0;
}
