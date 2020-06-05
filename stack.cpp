#include<iostream>
#define SIZE  10

using namespace std;

class stack
{
private:
    
    int ar[SIZE];
    int top;

public:
    
    stack();
    void pop();
    void push(int x);
    bool empty();
    void print_stack();

};

stack::stack()
{
    top = -1;
}

void stack::push(int x){
    
    if(top==SIZE-1){
        cout<<"Stack Overflow"<<endl;
    }
    else
    {
        top ++;
        ar[top]=x;
    }
}

void stack::pop(){
    
    if(top==-1){
        cout<<"Stack empty"<<endl;
    }
    else
    {
        int temp;
        temp = ar[top];
        top--;
        cout<<temp<<endl;
    }
}

bool stack::empty(){
    if(top==-1){
        return true;
    }
    else
    {
        return false;
    }
    
}

void stack::print_stack(){

    if(top==-1){
        cout<<"Stack empty"<<endl;
    }
    else
    {
       for(int i = 0; i<=top; i++){
            cout<<ar[i]<<endl;
    } 
    }
}

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    s.print_stack();
    s.pop();
    return 0;
}