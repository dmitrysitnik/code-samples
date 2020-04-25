#include "tree.hpp"

Node::Node()
{
}

Node::~Node()
{
    delete value;
}

Tree::Tree(/* args */)
{
}

Tree::~Tree()
{
    delete root;
}

void Tree::AddNode(Node *node)
{
    if (root)
    {
    }
    else
    {
        root = node;
    }
}

Node* Tree::GetLastNode(int *value) const
{

    Node *current = root;

    while (current->leftNode || current->rightNode)
    {
        if (*value < *(current->value)){
            current = current->leftNode;
        }
        else{
            current = current->rightNode;
        }
    }

    return current;
}
