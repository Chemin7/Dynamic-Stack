#ifndef DYNAMICSTACK_H_INCLUDED
#define DYNAMICSTACK_H_INCLUDED
#include <iostream>
#include <string>
#include "node.h"

class Stack
{
private:
    int sizeStack;
    Node *top;
public:
    Stack();
    void push(int);
    void pop();
    int getTop();

    bool isEmpty();
    void showStack();


    friend std::ostream& operator << (std::ostream&,Stack);
};

using namespace std;

Stack::Stack()
{
    sizeStack = 0;
    top =NULL;
}



void Stack::push(int num)
{
    top = new Node(num,top);
    sizeStack++;
}

void Stack::pop()
{
    Node *temp= top;
    top = top->next;
    delete temp;
    sizeStack--;
}

int Stack::getTop()
{
    return top->data;
}

bool Stack::isEmpty()
{
    return top==NULL;
}

void Stack::showStack()
{
    int ayuda,i;
    if(!isEmpty())
    {
        system("cls");

        printf("\n\n\t\t%c%c%c%c%c  \n",201,205,205,205,187);
        for(i=sizeStack; i>=0; i--)
        {
            if(i==sizeStack)
                printf("Tope->\t\t%c ",186,205);
            else
                printf("\t\t%c ",186,205);
            cout<<top->data;
            printf(" %c\n",186);

            if(i==0)
                printf("\t\t%c%c%c%c%c\n",200,205,205,205,188);
            else
                printf("\t\t%c%c%c%c%c\n",204,205,205,205,185);

        }
        //system("pause");
    }
}


std::ostream& operator << (std::ostream& out,Stack s)
{

    Stack temp;
    while (!s.isEmpty())
    {
        temp.push(s.getTop());
        s.pop();
    }

    while (!temp.isEmpty())
    {
        int t = temp.getTop();
        out << t <<endl;
        temp.pop();
        s.push(t);
    }

    return out;
}


#endif // DYNAMICSTACK_H_INCLUDED
