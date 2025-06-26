#include <iostream>
using namespace std;

class Node 
{
public :
    int info;
    Node *leftchild;
    Node *rightchild;

    // Constructor for node class
    Node()
    {
        leftchild = nullptr; // Intialiaze left child to null
        rightchild = nullptr; // Intialize right child to null
    }
};

class BinaryTree
{
public :
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // Intializing ROOT to null
    }

    void search(int element, Node *&parent, Node *&currentNode)
    {
        // This func searches the currentNode of the specified Node as well as the currentNode of its parent
        currentNode = ROOT;
        parent = nullptr;
        while ((currentNode) != nullptr && (currentNode->info != element))
        {

        }
    }
};