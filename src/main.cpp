#include <iostream>
#include "linkedlist.h"
using namespace std;

int main() {
  LinkedList linkedlist;

  linkedlist.append(1);
  linkedlist.append(2);
  linkedlist.append(3);
  linkedlist.append(4);
  linkedlist.append(5);
  linkedlist.append(6);

  linkedlist.prepend(0);

  linkedlist.remove(4);

  linkedlist.removeTail();

  string str = linkedlist.toString();
  cout << str << endl;
  
  cin.get();
  return 0;
}