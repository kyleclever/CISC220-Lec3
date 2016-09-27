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

// print out the list?
void print(){
	Snode *temp = first;
	while (temp! = NULL){
		cout << temp -> data << "->";
		temp = temp -> next;
	}
}
//recursive
void printR(Snode *temp){
	if (temp == NULL){
		return;
	}else{
		cout << temp ->data << "->";
		return printR(temp ->next);

	}

}
