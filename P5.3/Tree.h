#ifndef TREE_H
#define TREE_H
#include "Object.h"
class Tree
{
private:
	// Scope of struct 'Node' limited within implementation of class
	// 'BinarySearchTree'.
	struct Node
	{
		Node *left, *right, *parent;
		Object *key, *data;
	};
	Node *root;
	Node *MinAux(Node *node);
	Node *SearchAux(Object *key);
	void PrintAux(Node *node);
	void Transplant(Node *u, Node *v);
	int getHeightAux(Node * node);
public:
	Tree();
	void Print();
	void Insert(Object *key, Object *data);
	Object *Min();
	Object *Search(Object *key);
	Object *Delete(Object *key);
	int getHeight();
	void RotateRight(Node * node);
	void RotateLeft(Node * node);
};
#endif
