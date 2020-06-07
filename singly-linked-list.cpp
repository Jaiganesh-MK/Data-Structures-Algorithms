#include<iostream>

using namespace std;
class Node
{
public:
    int data;
    Node* next;
};

void append(Node** n,int a){
    
    Node* neu = new Node();
    neu->data = a;
    Node* temp = *n;
    neu->next = NULL;
    if(*n == NULL){
        *n = neu;
    }
    else{
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = neu;
    }
}

void push(Node** n, int a){

    Node* neu = new Node();
    neu->data = a;
    neu->next = *n;
    *n = neu;
}
    
void print(Node* n){

    while(n != NULL){
        cout<<n->data<<endl;
        n = n->next;
    }
}

int main(){

    Node* n = NULL;
    append(&n,10);
    append(&n,20);
    push(&n,30);
    print(n);
    return 0;
}

