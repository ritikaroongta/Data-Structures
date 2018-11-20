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
void delete_at_begin();
void delete_at_end();
void reverse();
void traverse();
int count = 0;
 
int main () {
   int input, data,val;
   printf("Enter value of element to create a node\n");
	scanf("%d", &data);
   createNode(data);
   
   do {
      printf("Enter the operation: 1. Insert an element at beginning of linked list.\n 2. Insert an element at end of linked list.\n");
	  printf(" 3. delete an element at beginning of linked list.\n 4. delete an element at end of linked list.\n 5.Reverse 6. Traverse linked list.\n  7. Exit\n");
     
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
         		
         		void delete_at_begin();

         		break;
     case 4 :
         		void delete_at_end();
         		break;
    case 5 :
         		void reverse();
         		break;  		
     case 6 :
        		traverse();
        		break;
    case 7 :
         exit(1);
      default :
         printf("Please enter valid input.\n"); 
         break;
	}
   }while(input!=7);
   
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
   struct node *new_n,*ptr;
   
   new_n = (struct node*)malloc(sizeof(struct node));
   count++;
     
  ptr=start;
  new_n->data=x;
  while(ptr->next!=start)
  {
  	ptr=ptr->next;
  }
  ptr->next=new_n;
  mew_n->next=start;
}
 
void insert_at_end(int x) {
   struct node *t, *ptr;
   
   t = (struct node*)malloc(sizeof(struct node));
   count++;
   new_n->data=x;
   ptr = start;
   
   while (ptr->next != NULL)
      ptr = ptr->next;  
   
   new_n->next=start;
   ptr->next=new_n;
   start=new_n;
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
 
void delete_at_begin() {
   struct node *ptr;
   if(start==null)
   	printf("overflow");
   
   ptr = start;
   
   while (ptr->next != start)
   {
      ptr = ptr->next;  
	}

  ptr->next=start->next;
  ptr=start;
  start=start->next;
 free(ptr);
}

void delete_at_end() {
   struct node  *ptr,*pptr;
   if(start==null)
   	printf("overflow");
   
   ptr = start;
   pptr=ptr;
  while (ptr->next != start)
   {
      pptr=ptr;
	  ptr = ptr->next;  
	}
  pptr->next=start;
  free(ptr);
}
void reverse(){
	struct node *ptr,nptr,pptr;
	pptr=NULL;
	nptr=NULL;
	ptr=start;
	while(ptr!=NULL){
		nptr=ptr->next;
		ptr->next=pptr;
		pptr=ptr;
		ptr=nptr;
	}
	start=pptr->next;
}
	
}
