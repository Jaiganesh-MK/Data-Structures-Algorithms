#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

void append(Node** n, int a){

    Node* neu = new Node();
    neu->data = a;
    neu->next = NULL;
    Node* temp = *n;
    if(*n == NULL){
        neu->prev = NULL;
        *n = neu;  
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = neu;
    neu->prev = temp;       
    return; 
}    

void push(Node** n, int a){

    Node* neu = new Node();
    neu->data = a;
    neu->prev = NULL;
    (*n)->prev = neu;
    neu->next = *n;
    *n = neu;
}

void print(Node* n){

    Node* last = new Node();
    cout<<"forward"<<endl;
    while(n != NULL)
    {
        cout<<n->data<<endl;
        last = n;
        n = n->next;
    }
    cout<<"reverse"<<endl;
    while(last != NULL){
        cout<<last->data<<endl;
        last = last->prev;
    }

}

int main(){
    Node* head = NULL;
    append(&head,10);
    append(&head,20);
    append(&head,30);
    push(&head,14);
    print(head);
}