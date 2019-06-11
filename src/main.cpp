#include <iostream>
#include <vector>
#include "linkedlist.h"
using namespace std;

int main() {
  LinkedList linkedlist, linkedlistfromvector;
  vector<int> vectorDatas = { 5, 4, 6 };

  linkedlist.append(1);
  linkedlist.append(2);
  linkedlist.append(3);
  linkedlist.append(4);
  linkedlist.append(5);
  linkedlist.append(6);

  linkedlist.prepend(0);

  linkedlist.remove(4);

  linkedlist.removeTail();

  linkedlist.removeHead();

  linkedlistfromvector.fromVector(vectorDatas);

  string str = linkedlist.toString();
  cout << str << endl;

  string str2 = linkedlistfromvector.toString();
  cout << str2 << endl;
  
  cin.get();
  return 0;
}