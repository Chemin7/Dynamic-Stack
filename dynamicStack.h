#ifndef DYNAMICSTACK_H_INCLUDED
#define DYNAMICSTACK_H_INCLUDED
#include <iostream>
#include <string>
#include "node.h"

 class Stack {
    private:

        Node *top;
    public:
        Stack();
        void push(int);
        void pop();
        int getTop();

        bool isEmpty();


        friend std::ostream& operator << (std::ostream&,Stack);
    };

    using namespace std;

Stack::Stack() {
    top =NULL;
    }



void Stack::push(int num) {
    top = new Node(num,top);
    }

void Stack::pop() {
    Node *temp= top;
    top = top->next;
    delete temp;
    }

int Stack::getTop() {
    return top->data;
    }

bool Stack::isEmpty() {
    return top==NULL;
    }


std::ostream& operator << (std::ostream& out,Stack s) {

    Stack temp;
    while (!s.isEmpty()) {
        temp.push(s.getTop());
        s.pop();
        }

    while (!temp.isEmpty()) {
        int t = temp.getTop();
        out << t <<endl;
        temp.pop();
        s.push(t);
        }

    return out;
    }


#endif // DYNAMICSTACK_H_INCLUDED
