#ifndef NODE_H
#define NODE_H
#include <iostream>

class Node
{
 public:
  // constructors and destructors
  Node();
  Node(int);
  ~Node();

  // functions (getters)
  Node* getLeft(); // returns left child
  Node* getRight(); // returns right child
  int getValue(); // returns data value
  Node* getParent(); // returns the parent node
  char getColor(); // returns either 'r' or 'b' for red or black

  // functions (setters)
  void setLeft(Node*); // establish left child
  void setRight(Node*); // establish right child
  void setValue(int); // establish data value
  void setColor(char); // set the color of the node;
  void setParent(Node*); // set the parent, or "previous" node in the tree
  
 private:
  // variables
  int data;
  Node* left;
  Node* right;
  Node* parent;
  char color;
  
};
#endif
