#ifndef DYNAMICSTACK_H_INCLUDED
#define DYNAMICSTACK_H_INCLUDED
#include <iostream>
#include <string>
#include <node.h>

class Stack {
    private:
        Node *top;
    public:
        Stack();
        void push(int);
        void pop();
        int getTop();

        bool isEmpty();


        friend ostream& operator << (ostream&,Stack);
    };

Stack::Stack()
{
    top =NULL;
}



void Stack::push(int num) {
    top = new Node(num,top)
    }

void Stack::pop() {
    Node *temp= top;
    top = top->next;
    delete temp;
    }

int Stack::getTop() {
    return top->data;
    }

bool Stack::isEmpty()
{
    return top==NULL;
}


ostream& operator << (ostream& out,Stack s){

    Stack temp;
    while (!s.isEmpty())
    {
        temp.push(s.getTop());
        s.pop();
    }

    while (!temp.isEmpty())
    {
        int t = temp.getTop();
        out << t << " ";
        temp.pop();

        // To restore contents of
        // the original stack.
        s.push(t);
    }
}


#endif // DYNAMICSTACK_H_INCLUDED
