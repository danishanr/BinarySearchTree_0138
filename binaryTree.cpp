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

    }
};