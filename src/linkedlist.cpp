#include <iostream>
#include <iomanip>
#include <string>
#include "node.h"
#include "linkedlist.h"

using namespace std;

LinkedList::LinkedList()
{
  this->head = this->tail = NULL;
};

void LinkedList::prepend(int data) {
  Node* newNode = new Node(data, this->head);
  this->head = newNode;

  if (this->head == NULL) {
    this->head = newNode;
  }
}

void LinkedList::append(int data) {
  Node* newNode = new Node(data, NULL);
  if (this->head == NULL) {
    this->head = newNode;
    this->tail = newNode;
    return;
  }
  this->tail->next = newNode;
  this->tail = newNode;
}

Node* LinkedList::remove(int data) {
  if (this->head == NULL) {
    return NULL;
  }

  Node* deletedNode = NULL;

  while (this->head && this->head->data == data) {
    deletedNode = this->head;
    this->head = this->head->next;
  }

  Node* currentNode = this->head;
  if (currentNode != NULL) {
    while (currentNode->next) {
      if (currentNode->next->data == data) {
        deletedNode = currentNode->next;
        currentNode->next = currentNode->next->next;
      } else {
        currentNode = currentNode->next;
      }
    }
  }

  if (this->tail->data == data) {
    this->tail = currentNode;
  }

  return deletedNode;
}

Node* LinkedList::find(int data) {
  if (this->head == NULL) {
    return NULL;
  }

  Node* currentNode = this->head;

  while (currentNode) {
    if (currentNode->data == data) {
      return currentNode;
    }
    currentNode = currentNode->next;
  }

  return NULL;
}

void LinkedList::removeTail() {
  Node* deletedTail = this->tail;

  if (this->head == this->tail) {
    this->head = NULL;
    this->tail = NULL;
  }

  Node* currentNode = this->head;
  while (currentNode->next) {
    if (currentNode->next->next == NULL) {
      currentNode->next = NULL;
    } else {
      currentNode = currentNode->next;
    }
  }

  this->tail = currentNode;
}
void LinkedList::removeHead() {
  if (this->head == NULL) {
    return;
  }

  Node* deletedHead = this->head;

  if (this->head->next) {
    this->head = this->head->next;
  } else {
    this->head = NULL;
    this->tail = NULL;
  }
}
void LinkedList::fromVector(vector<int>) {

}

vector<int> LinkedList::toVector() {
  vector<int> vectorTemp;
  Node* currentNode = this->head;

  while (currentNode) {
    vectorTemp.push_back(currentNode->data);
    currentNode = currentNode->next;
  }

  return vectorTemp;
};

string LinkedList::toString() {
  vector<int> v = this->toVector();
  string rs = "";
  for (auto i : v) {
    rs.append(to_string(i) + ' ');
  }
  return rs;
}

LinkedList* LinkedList::reverse() {
  return NULL;
}