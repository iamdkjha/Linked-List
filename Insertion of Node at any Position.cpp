#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node* next;
    
    Node(int value){
        this->data = value;
        this->next = NULL;
    }

};

void insertion_head(Node* &head, int data){

    Node* NewNode = new Node(data);
    NewNode->next = head;
    head = NewNode;

}

void insertion_tail(Node* &tail, int data){

    Node* NewNode = new Node(data);
    tail->next = NewNode;
    tail = NewNode;

}

void insertion_middle(Node* &head, Node* &tail, int pos, int data){

    if(pos==1){
        insertion_head(head, data);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt!=pos-1){

        temp = temp->next;
        cnt++;

    }   

    if(temp->next==NULL){
        insertion_tail(tail,data);
        return;
    }

    Node* NewNode = new Node(data);
    NewNode->next = temp->next;
    temp->next = NewNode;

}

void print(Node* &head){


    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }

}

int main()
{
    Node* node1 = new Node(12);

    Node* head = node1;

    Node* tail = node1;

    // Insertion at tail
    insertion_tail(tail, 21);
    insertion_tail(tail, 13);
    insertion_tail(tail, 31);
    insertion_tail(tail, 14);

    
    // Insertion at position
    insertion_middle(head, tail, 6, 51);

    // Printing the List
    print(head);

    return 0;
}
