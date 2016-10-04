/*
 * 4_double_linked_list.cpp
 *
 *  Created on: 2016Äê10ÔÂ4ÈÕ
 *      Author: Kyle
 */


class DNode {
	friend class LL;
	int data;
	DNode *next;
	DNode *prev;
	int size;
public:
	DNode(int x);
	~DNode();
}; //DNode


//
//DNode *temp = last;
//last = last->prev;
//delete temp;
//last->next = NULL;

/*
 * Disadvantages:
A bit more memory (now we¡¯ve got that prev pointer space for each node)
Must manage more pointers when performing operations on the linked list (e.g., insert, remove, etc.)
Advantages:
Makes pop() easier (O(1))
Makes traversing the list in reverse order easier
Reversing the list is easy now
Can go backwards and forwards from a node in a list
We may need surrounding nodes
We may need data that occurred ¡°close to¡± a node with certain data
 *
 */
