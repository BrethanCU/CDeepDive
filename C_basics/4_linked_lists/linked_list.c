#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct IntNode {
	int data;
	struct IntNode *next;
} node_t;

node_t *constructIntNode(int value, node_t *next) {
	node_t *node = (node_t *) malloc(sizeof(node_t));
	node->data = value;
	node->next = next;
	return node;
}

node_t *removeNthNode(node_t *head, int n) {

	if (n < 1) return NULL;
	if (head == NULL) return NULL;

	node_t *curr = head;
	node_t *temp = NULL;

	int counter = 0;
	while (curr->next != NULL) {
		// When curr->next == target node
		if (counter == (n - 1)) {
 			temp = curr->next;
			curr->next = temp->next;
			temp->next = NULL;
			break;
		}

		curr = curr->next;
		counter++;
	}

	return temp;
}

void *destroyList(node_t* head) {
	node_t *curr = head;
	while (curr != NULL) {
		node_t *temp = curr;
		curr = curr->next;
		free(temp);
	}

	return NULL;
}

void printList(node_t *head) {
	for (node_t *curr = head; curr != NULL; curr = curr->next) {
		printf("[%d]", curr->data);
		if (curr->next != NULL) {
			printf("->");
		}
	}

	printf("\n");
}

int main() {
	node_t *node5, *node4, *node3, *node2, *node1, *head;
	node5 = constructIntNode(100, NULL);
	node4 = constructIntNode(60, node5);
	node3 = constructIntNode(40, node4);
	node2 = constructIntNode(20, node3);
	node1 = constructIntNode(0, node2);
	head = constructIntNode(-20, node1);

	printList(head);
	node_t *rem = removeNthNode(head, 2);
	printList(head);
	printList(rem);

	head = destroyList(head);
	rem = destroyList(rem);
    return 0;
}