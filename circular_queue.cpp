#include<iostream>

using namespace std;

class Queue{

    private:
    int front,rear;
    int* arr;
    int s;

    public:
    Queue(int size){
        front = -1;
        rear = -1;
        s = size;
        arr = new int[s];
    }

    bool isEmpty(){
        if(front == -1 && rear == -1){
            return true;
        }
        return false;
    }

    bool isFull(){
        if(front == 0 && rear == s - 1){
            return true;
        }
        else if(front == rear+1){
            cout<<"ee";
            return true;
        }
        return false;
    }

    void enqueue(int data){

        if(isFull()){
            cout<<"Queue Full"<<endl;
            return;
        }
        else if(isEmpty()){
            front = 0;
            rear = 0;
            arr[rear] = data;
            return;
        }
        else if(rear == s-1 && front !=0){
            rear = 0;
            arr[rear] = data;
        }
        rear++;
        arr[rear] = data;
        return;        
    }

    void dequeue(){

        if(isEmpty()){
            cout<<"Queue empty"<<endl;
            return;
        }
        else if(front == rear){
            front = -1;
            rear = -1;
            return;
        }
        else if(front == s-1 ){
            front = 0;
            return;
        }
        front++;
    }

    void display(){
        if(isEmpty()){
            cout<<"Empty"<<endl;
            return;
        }
        for(int i = front; i<=rear; i++){
            cout<<arr[i]<<endl;
        }
    }
};

int main(){

    Queue q(4);
    q.display();
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.dequeue();
    q.dequeue();
    q.display();
}