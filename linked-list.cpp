#include<iostream>

using namespace std;

class Node
{
public:
    int data;
    class Node* next;

};

void print_list(Node* head){
    while(head != NULL){
        cout<<head->data<<endl;
        head = head->next;
    }
}

void push(Node* a,int n){
    Node* d = NULL;
    d = new Node();
    d->data = a->data;
    d->next = a->next;
    a->data = n;
    a->next = d;   
}

void append(Node* y,int j){
      
        Node* d = NULL;
        d = new Node();
        while (y->next!=NULL)
        {
            y = y->next;
        }        
        y->next = d;
        d->data = j;    

}
    


int main(){
    Node* n = NULL;
    n = new Node();
    n->data = 10;
    append(n,20);
    append(n,30);
    append(n,40);
    push(n,5);
    print_list(n);
    return 0;
}

