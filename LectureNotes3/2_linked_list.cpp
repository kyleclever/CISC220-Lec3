/*
 * 2_linked_list.cpp
 *
 *  Created on: Sep 27, 2016
 *      Author: kylew
 */

#include<iostream>
using namespace std;
/*
 * Every element in a linked list consists of at least 2 parts:
 	 - the data
 	 - a pointer

   No wasted space
   No fixed sizes
   Like an array

 */


class SNode {
	friend class SLL;  // allows another class to access private members of the Node class
	int data;
	SNode *next;
public:
	SNode(int x);
	~SNode();
}; //Node

SNode::SNode(int x){	data = x;
	next = NULL;
}  //Constructor
SNode::~SNode() {
	if (next != NULL) {
		cout << "deleting may cause memory leak." << endl;
	}  //if
} //destuctor


/*
 * #include "SNode.hpp"

class SLL {
	SNode *first;
	SNode *last;
	int size;
public:
	SLL();
	~SLL();
	void printSLL();
	void addFirst(int x);
	void addAtFront(int x);
	void push(int x);
	void addAtK(int x, int k);

	void join(SLL *list2);
	int pop();
	SNode *findKth(int k);
	int findK(int k);
	int remFirst();
	int remKth(int k);
};
 *
 */

