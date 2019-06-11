#include "node.h"
#include <vector>
#include <string>
using namespace std;

class LinkedList {
private:
  Node* head;
  Node* tail;
public:
  void prepend(int);
  void append(int);
  Node* remove(int);
  Node* find(int);
  void removeTail(int);
  void removeHead(int);
  void fromVector(vector<int>);
  vector<int> toVector();
  string toString();
  LinkedList* reverse();
  LinkedList();
};