#include "node.h"

Node::Node(int value, Node* next) {
  this->data = value;
  this->next = next;
};