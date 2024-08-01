#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};



int main() {
	int check=1;
	int n;
	int d;
	struct Node* head = NULL;
	while(check!=0){
	printf("Enter 1 to Add\nEnter 2 to delete\nEnter 3 to display Linked List \nEnter 0 to exit: \n\n");
	scanf("%d",&check);
	switch(check){
		case 1:
			printf("\tEnter value: ");
			scanf("%d",&n);
			insert(&head,n);
			break;
		case 2:
			printf("\tEnter value to delete: ");
			scanf("%d",&d);
			delete(&head, d);
			break;
		case 3:
			printf("\tLinked list: \n");
			display(head);
			break;		
		default:
			printf("Invalid");
	}
	}
    printf("\n");
    return 0;
}

void insert(struct Node** headRef, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = NULL;
    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }
    struct Node* temp = *headRef;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}


void delete(struct Node** headRef, int key) {
    if (*headRef == NULL) {
        printf("List is empty!\n");
        return;
    }
    if ((*headRef)->data == key) {
        struct Node* temp = *headRef;
        *headRef = (*headRef)->next;
        free(temp);
        return;
    }
    struct Node* prev = NULL;
    struct Node* current = *headRef;
    while (current != NULL && current->data != key) {
        prev = current;
        current = current->next;
    }
    if (current == NULL) {
        printf("Element not found in the list!\n");
        return;
    }
    prev->next = current->next;
    free(current);
}


void display(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
}

