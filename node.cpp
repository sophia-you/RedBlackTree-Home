#include <iostream>
#include <cstring>
#include "node.h"

using namespace std;

// default constructor
Node::Node()
{
  // initialize all variables as null
  data = 0;
  left = NULL;
  right = NULL;
  parent = NULL;
  color = 'r'; // all nodes will be added as red nodes
}

// regular constructor
Node::Node(int newdata)
{
  data = newdata;
  left = NULL;
  right = NULL;
  parent = NULL;
  color = 'r';
}

// destructor, which destroys anything left on the heap
Node::~Node()
{
  left = NULL;
  right = NULL;
  parent = NULL;
}

		
// returns left child
Node* Node::getLeft()
{
  return left;
}

// returns right child
Node* Node::getRight()
{
  return right;
}

// returns data value
int Node::getValue()
{
  return data;
}

// returns parent
Node* Node::getParent()
{
  return parent;
}

// returns color
char Node::getColor()
{
  return color;
}

// set left child
void Node::setLeft(Node* newleft)
{
  left = newleft;
}

// set right child
void Node::setRight(Node* newright)
{
  right = newright;
}

// set new data
void Node::setValue(int newdata)
{
  data = newdata;
}

void Node::setParent(Node* newparent)
{
  parent = newparent;
}

void Node::setColor(char newcolor)
{
  color = newcolor;
}
