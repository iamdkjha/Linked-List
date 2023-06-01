#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    
    Node (int value){
        this->data = value;
        this->next = NULL;
    }

};

// // Insertion of New Node at Head
// void insertion_head(Node* &head, int data){

//     // creating a new node to place it at head
//     Node* NewNode = new Node(data);
    
//     // Putting the address of head in next of New Node  
//     NewNode->next = head;
   
//     // Making the new node head
//     head=NewNode;

// }

// Insertion of New node at Tail or End
void insertion_tail(Node* &tail, int data){

    // create a new node to place it at tail
    Node* NewNode = new Node(data);

    // Putting the address of New Node at next of Tail
    tail->next = NewNode;

    // Making the new node tail
    tail=NewNode;

}

// Printing the Linked List 
void print(Node* &head){

    // creating a temp node
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next; 
    }

    cout<<endl;

}

int main()
{
    // create a new node
    Node* Node1 = new Node(12);

    // create a head node
    Node* head = Node1;

    // create a tail node
    Node* tail = Node1;

    // // Inserting the node at head
    // insertion_head(head, 21);
    // insertion_head(head, 13);
    // insertion_head(head, 31);

    // Inserting the node at tail
    insertion_tail(tail, 21);
    insertion_tail(tail, 13);
    insertion_tail(tail, 31);
    insertion_tail(tail, 14);

    // Print the Linked List
    print(head);

    return 0;
}
