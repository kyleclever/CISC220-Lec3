/*
 * 3_node.cpp
 *
 *  Created on: Sep 27, 2016
 *      Author: kylew
 */


/*
 * Node implementation:
 *
 *
 *
 *
 *
 */

// add first node to list
//
//// print out the list?
//void SLL::printSLL() {
//	SNode *tmp = first;
//	while (tmp != NULL) {
//		cout << tmp->data << "->";
//		tmp = tmp->next;
//	}
//	cout << endl;
//}
//
////recursive
//void printR(Snode *temp){
//	if (temp == NULL){
//		return;
//	}else{
//		cout << temp ->data << "->";
//		return printR(temp ->next);
//
//	}
//
//}
//
//
//void SLL::addAtK(int x, int k){
//	SNode *tmp = first;
//	if (k==0) {
//		addAtFront(x);
//		size++;
//	}
//	if (k < size  && k >= 0) {
//		for (int i = 0; i < k-1; i++) {
//			tmp = tmp->next;
//		}
//		SNode *tmp2 = tmp->next;
//		tmp->next = new SNode(x);
//		tmp->next->next = tmp2;
//		size++;
//	}
//}
//
//
//int SLL::remKth(int k) {
//	if (k < size && k > 0) {
//		SNode *tmp = first;
//		for (int i = 0; i < k -1; i++) {
//			tmp = tmp->next;
//		}
//		int x = tmp->next->data;
//		SNode *tmp2= tmp->next;
//		tmp->next = tmp->next->next;
//		delete tmp2;
//		return x;
//	}
//}
