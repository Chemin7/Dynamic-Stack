#ifndef DYNAMICSTACK_H_INCLUDED
#define DYNAMICSTACK_H_INCLUDED
#include <iostream>
#include <string>
#include "node.h"

class Stack {
    private:
        Node *top;
        int sizeStack;
    public:
        Stack();
        void push(int);
        void pop();
        int getTop();

        bool isEmpty();
        void showStack();
    };

using namespace std;

Stack::Stack(): top(NULL), sizeStack(0) {}



void Stack::push(int num) {
    top = new Node(num,top);
    sizeStack++;

    }

void Stack::pop() {
    try {
        if(isEmpty())
            throw 0;
        Node *temp= top;
        top = top->next;
        delete temp;
        sizeStack--;
        }
    catch(int &exp) {
        std::cerr<<"Pila vacia"<<endl;
        system("pause");
        }



    }

int Stack::getTop() {
    return top->data;
    }

bool Stack::isEmpty() {
    return top==NULL;
    }

void Stack::showStack() {
    int ayuda,i;
    Node* show = NULL;

    if(!isEmpty()) {
        show=top;
        system("cls");

        printf("\n\n\t\t%c%c%c%c%c  \n",201,205,205,205,187);
        for(i=sizeStack-1; i>=0; i--) {
            if(i==sizeStack-1)
                printf("Tope->\t\t%c ",186,205);
            else
                printf("\t\t%c ",186,205);


            cout<<show->data;
            show=show->next;


            printf(" %c\n",186);

            if(i==0)
                printf("\t\t%c%c%c%c%c\n",200,205,205,205,188);
            else
                printf("\t\t%c%c%c%c%c\n",204,205,205,205,185);

            }
        //system("pause");
        }
    }




#endif // DYNAMICSTACK_H_INCLUDED
