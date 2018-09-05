#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node * next;
} node_t;

struct node *head = NULL;
struct node *last = NULL;
int number = 0;

void printList() {
   struct node *temp = head;
   printf("The current list is: [ ");
	
   while(temp != NULL) {
      printf("%d",temp->data);
      printf(" ");
      temp = temp->next;
   }
	
   printf("]");
}

void insert(int data) {
  struct node *newNode = (struct node*) malloc(sizeof(struct node));
  newNode->data = data;
  newNode->next = NULL;
  if (number == 0) {
    head = newNode;
    last = newNode;
  }
  else{
    last->next = newNode;
    last = newNode;
  }
  
  number ++;
}

void deleteN() {
  struct node *temp = head;
	
  if (number==0) {
    printf("Underflow error");
  }
  else if (number==1) {
    head = NULL;
    last = NULL;
    number--;
  }
  else {
  while(temp->next->next != NULL) {
    temp = temp->next;
  }
  last = temp;
  last->next = NULL;
  number--;
  }
}

int main(void) {
  insert(10);
  insert(20);
  insert(30);
  insert(40);
  insert(50);
  insert(60);
  insert(70);
  deleteN();
  deleteN();
  printList();
  return 0;
}
