#include <iostream>
#include <stdio.h>
using namespace std;
class node{
public:
    int data;
    node *next;
    node(int n, node *m){
        data = n;
        next = m;
    }
};
class Stack{
private:
    node *top;
public:
    Stack(){
        top = NULL;
    }
    void push(int n){
        node *temp = new node (n,NULL);
        temp->next = top;
        top = temp;
    }
    void remove_node(){
        node *temp;
        temp = top;
        top = top->next;
        delete(temp);
    }

    int pop(){
       int result=0;
       result = top->data;
       remove_node();
    }
    bool empty(){
        if(top == NULL)
            return true;
        else
            return false;
    }
    void show(){
        node *temp;
        temp = top;
        while(temp){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }
};

int main() {
    Stack *s = new Stack();
    s->push(2);
    s->push(3);
    s->push(4);
    s->push(5);
    s->show();
    return 0;
}