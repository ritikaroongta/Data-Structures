#include <stdio.h>
#include <stdlib.h>
 
struct node {
   int data;
   struct node *next;
};
 
struct node *start = NULL;
void createNode(int);
void insert_at_begin(int);
void insert_at_end(int);
void insert_before(int,int);
void insert_after(int,int);
void traverse();
int count = 0;
 
int main () {
   int input, data,val;
   printf("Enter value of element to create a node\n");
	scanf("%d", &data);
   createNode(data);
   
   do {
      printf("Enter the operation: 1. Insert an element at beginning of linked list.\n 2. Insert an element at end of linked list.\n");
	  printf(" 3. Insert an element after a given node.\n 4. Insert an element before a given node.\n 5. Traverse linked list.\n  6. Exit\n");
     
      scanf("%d", &input);
     switch(input)
     {
     case 1 :
         		printf("Enter value of element\n");
         		scanf("%d", &data);
         		insert_at_begin(data);
         		break;
      case 2 :
         		printf("Enter value of element\n");
         		scanf("%d", &data);
         		insert_at_end(data);
         		break;
     case 3 :
         		
         		printf("Enter value of element after which new node is to be inserted\n");
         		scanf("%d", &val);
				printf("Enter value of element\n");
         		scanf("%d", &data);
         		insert_after(data,val);
         		break;
     case 4 :
           		printf("Enter value of element before which new node is to be inserted\n");
         		scanf("%d", &val);
				printf("Enter value of element\n");
         		scanf("%d", &data);
         		insert_before(data,val);
         		break;
     case 5 :
        		traverse();
        		break;
    case 6 :
         exit(1);
      default :
         printf("Please enter valid input.\n"); 
         break;
	}
   }while(input!=6);
   
   return 0;
}

void createNode(int a){
    struct node *temp; 
    temp = (struct node*)malloc(sizeof(struct node)); 
    start = temp;
    start->data=a;
    start->next = NULL;
    return;
}
 
void insert_at_begin(int x) {
   struct node *t;
   
   t = (struct node*)malloc(sizeof(struct node));
   count++;
     
   if (start == NULL) {
      start = t;
      start->data = x;
      start->next = NULL;
      return;
   }
   
   t->data = x;
   t->next = start;
   start = t;
}
 
void insert_at_end(int x) {
   struct node *t, *temp;
   
   t = (struct node*)malloc(sizeof(struct node));
   count++;
   
   if (start == NULL) {
      start = t;
      start->data = x;
      start->next = NULL;
      return;
   }
   
   temp = start;
   
   while (temp->next != NULL)
      temp = temp->next;  
   
   temp->next = t;
   t->data    = x;
   t->next    = NULL;
}
 
void traverse() {
   struct node *t;
   
   t = start;
   
   if (t == NULL) {
      printf("Linked list is empty.\n");
      return;
   }
   
   printf("There are %d elements in linked list.\n", count+1);
   
   while (t->next != NULL) {
      printf("%d\n", t->data);
      t = t->next;
   }
   printf("%d\n", t->data);
}
 
void insert_after(int x,int y) {
   struct node *n_node, *ptr;
   
   n_node = (struct node*)malloc(sizeof(struct node));
   count++;
   
   ptr = start;
   
   while (ptr->data != y)
   {
      ptr = ptr->next;  
	}
  n_node->next=ptr->next;
  ptr->next=n_node;
  n_node->data=x;
}

void insert_before(int x,int y) {
   struct node *n_node, *ptr,*pptr;
   
   n_node = (struct node*)malloc(sizeof(struct node));
   count++;
   
   ptr = start;
   pptr=ptr;
   while (ptr->data != y)
   {
      pptr=ptr;
	  ptr = ptr->next;  
	}
  n_node->next=pptr->next;
  pptr->next=n_node;
  n_node->data=x;
}
