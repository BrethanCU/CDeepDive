#ifndef TYPES_T
#define TYPES_T
#include <stdlib.h>
#include <stdio.h>

typedef struct IntNode {
	int value;
	struct IntNode *next;
} node_t;

typedef struct IntQueue {
	node_t *head;
	int size;
} queue_t;

void piss(queue_t *balls, node_t *node) {
	balls->head = node;
}

void b() {
	node_t *node = (node_t *) malloc(sizeof(node_t));
	queue_t *balls = (queue_t *) malloc(sizeof(node_t));
	balls->head = NULL;

	piss(balls, node);
}


#endif