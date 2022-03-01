#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

class Node
{
    private:
  int data;
  Node* next;
    public:
        Node();
        Node(int,Node*);
};

Node::Node()
{

}

Node::Node(int data, Node* next)
{
    this->data=data;
    this->next=next;
}


#endif // NODE_H_INCLUDED
