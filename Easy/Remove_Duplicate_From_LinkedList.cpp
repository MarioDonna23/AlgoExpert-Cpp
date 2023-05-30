#include <iostream>
#include <unordered_set>
using namespace std;

// This is an input struct. Do not edit.
class LinkedList {
public:
  int value;
  LinkedList *next = nullptr;

  LinkedList(int value) { this->value = value; }
};

LinkedList *removeDuplicatesFromLinkedList(LinkedList *linkedList) {
  unordered_set<int> values;
  LinkedList *node = linkedList; // Current Node
  LinkedList *prev = NULL; // Previous Node
  
  while(node != NULL){
    if(values.find(node->value) != values.end()){ // If node value is already on the set
      prev->next = node->next; // Previous Node becomes Next node, deleting previous node from the list 
      node = node->next;  
    }
    else{
      values.insert(node->value); // If value of current node is not on set, add it
      prev = node; // Advance though the list normally
      node = node->next;
    }
  }
  return linkedList;
}
