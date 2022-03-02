#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

class Node {
    public:
        int data;
        Node* next;

        Node();
        Node(int data, Node* next) {
            this->data=data;
            this->next=next;
            }
    };





#endif // NODE_H_INCLUDED
