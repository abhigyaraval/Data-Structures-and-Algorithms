#include <iostream>
using namespace std;

// Node struct to hold the data and pointer to the next element in a Linked List
struct Node
{
  int data;
  Node * link;
};


// Main Program
int main()
{
  Node* A;
  A = NULL;

  Node* temp = new Node();    // 'new' is similar to malloc.
  temp -> data = 2;
  temp -> link = NULL;

  A = temp;
  printf("A: %d\n", A -> data);

  // Inserting another element at the end of the List
  temp = new Node();

  temp -> data = 4;
  temp -> link = NULL;

  Node& temp1 = A;

  while (temp1 -> link != NULL)
  {
    temp1 = temp1 -> link;
  }
  temp1 -> link = temp;
}
