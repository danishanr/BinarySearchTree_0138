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
        // This function searches the currentNode of the specified Node as well as the currentNode of its parent
        currentNode = ROOT;
        parent = nullptr;
        while ((currentNode) != nullptr && (currentNode->info != element))
        {
            parent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->leftchild;
            else
                currentNode = currentNode->rightchild;
        }
    }
    
    void insert()
    {
        int x;
        cout << "Masukkan nilai: ";
        cin >> x;

        // Step 1: Allocate memory for the new node
        Node *newNode = new Node();
        // Step 2: Assign value to the datafield of the new node
        newNode->info = x;
    }
    
};