#include<iostream>
#define SIZE  20

using namespace std;

class Queue{

    private:
    int ar[SIZE];
    int front;
    int rear;

    public:
    Queue(){
        front = -1;
        rear = -1;
    }
    void enqueue(int a);
    void dequeue();
    void display();
};

void Queue::enqueue(int a){

    if(front==0 && rear==SIZE-1){
        cout<<"Queue Full"<<endl;
        return;
    }

    else if(front==-1 && rear == -1){
        front = 0;
        rear = 0;
        ar[rear] = a;
        rear++;
        return;
    }

    ar[rear] = a;
    rear++;
}

void Queue::dequeue(){

    if(rear == 0){
        cout<<"Queue empty"<<endl;
    }
    else{

        if(front==rear){
            front = -1;
            rear = -1;
        }
        else{
            front++;
        }
    }
}

void Queue::display(){

    if(front==rear){
        cout<<"empty"<<endl;
    }
    for(int i = front; i < rear; i++){
        cout<<ar[i]<<endl;
    }
} 

int main(){

    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();

}