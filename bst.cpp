/*
create a node  of a binary search tree having the :
    - an integer value
    - a pointer to the left child
    - a pointer to the right child
    insertion and deletion of a node in a binary search tree
*/
#include <iostream>
using namespace std;
struct Node {

    int value ;

    Node * left ;
    Node * right ;
    Node (int  x)
    {
        value = x ;
        left = nullptr ;
        right = nullptr ;
    }



};

Node * insert(Node * root , int x ){
        if ( root == nullptr ){
            return new Node(x);          
        }
        if ( x < root->value ){
            root->left = insert(root->left , x);
        }
        else if ( x > root->value ){
            root->right = insert(root->right , x);
        }
   
    return root;
}

