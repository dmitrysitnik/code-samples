
class Node
{
public:
    int *value = nullptr;
    Node* leftNode = nullptr;
    Node* rightNode = nullptr;

    Node();
    ~Node();
};

class Tree
{
private:
    Node *root = nullptr;

    Node* GetLastNode(int* value) const;

public:
    Tree();
    ~Tree();
    void AddNode(Node *node);
};
