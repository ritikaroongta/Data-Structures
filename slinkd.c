#include <stdio.h>
#include <stdlib.h>
 
struct node {
   int data;
   struct node *next;
};
 
struct node *start = NULL;
void createNode(int);
void traverse();
void delete_from_begin();
void delete_from_end();
void delete_before(int);
void delete_after(int);

int main () {
   int input,val;
   printf("Enter value of element to create a node\n");
	scanf("%d", &val);
	createNode(val);
	createNode(val+10);
	createNode(val+20);
   do{
   printf("Enter the operation:1. Delete element from beginning.\n 2. Delete element from end.\n");
   printf(" 3. Delete an element after a given node.\n 4. Delete an element before a given node.\n 5. Traverse linked list.\n  6. create a node\n 7. Exit\n");
   scanf("%d", &input);
     switch(input)
     {
     case 1 :
         		delete_from_begin();
         		break;
      case 2 :
         		delete_from_end();
         		break;
     case 3 :
         		
         		printf("Enter value of element after which node is to be deleted\n");
         		scanf("%d", &val);
         		delete_after(val);
         		break;
     case 4 :
           		printf("Enter value of element before which node is to be deleted\n");
         		scanf("%d", &val);
         		delete_before(val);
         		break;
     case 5 :
        		traverse();
        		break;
    case 6 : 
    			printf("Enter value of element to create a node\n");
				scanf("%d", &val);
				createNode(val);
    			break;
    case 7 :
         exit(1);
      default :
         printf("Please enter valid input.\n"); 
         break;
	}
   }while(input!=6);
   
   return 0;
}

void traverse() {
   struct node *t;
   t = start;
   
   if (t == NULL) {
      printf("Linked list is empty.\n");
      return;
   }
   
   
   while (t->next != NULL) {
      printf("%d\n", t->data);
      t = t->next;
   }
   printf("%d\n", t->data);
}

void delete_from_begin() {
   struct node *t;
   int n;
   
   if (start == NULL) {
      printf("Linked list is already empty.\n");
      return;
   }
   
   n = start->data;
   t = start->next;
   free(start);
   start = t;
   
   printf("%d deleted from beginning successfully.\n", n);
}
 
void delete_from_end() {
   struct node *t, *u;
   int n;
     
   if (start == NULL) {
      printf("Linked list is already empty.\n");
      return;
   }
   
   if (start->next == NULL) {
      n = start->data;
      free(start);
      start = NULL;
      printf("%d deleted from end successfully.\n", n);
      return;
   }
   
   t = start;
   
   while (t->next != NULL) {
      u = t;
      t = t->next;
   }
   
   n = t->data;
   u->next = NULL;
   free(t);
   
   printf("%d deleted from end successfully.\n", n);
}

void delete_after(int a) {
   struct node *ptr,*pptr;
   
   if (start == NULL) {
      printf("Linked list is already empty.\n");
      return;
   }
   
   ptr=start;
   while(ptr->data!=a)
   {
   	ptr=ptr->next;
   }
   pptr=ptr->next;
   ptr=pptr->next;
   free(pptr);
}

void delete_before(int a) {
   struct node *ptr,*pptr,*prtr;
   
   if (start == NULL) {
      printf("Linked list is already empty.\n");
      return;
   }
   
   ptr=start;
   while(ptr->data!=a)
   {
   	ptr=ptr->next;
   }
   pptr=start;
   while(ptr->next=ptr)
   {
   	pptr=pptr->next;
   }
   prtr=start;
   while(ptr->next!=pptr)
   {
   	prtr=prtr->next;
   }
   prtr->next=pptr->next;
   free(pptr);

}

void createNode(int x) {
   struct node *t, *temp;
   
   t = (struct node*)malloc(sizeof(struct node));
   
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
