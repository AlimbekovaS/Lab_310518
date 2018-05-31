#pragma once
#include "Library.h"
template <typename T>
class List
{
private:
	class Node
	{	
	public:
		T date;
		Node * nextPtr;
		Node * prevPtr;
		Node(T date);	//konstruktor	

	}*firstPtr, *lastPtr;
	Node *curPtr;
	size_t count;
public:
	List();
	void push_back(T date);
	void push_front(T date);
	void print();
	void removeFirst();
	void removeLast();
	bool find(T date);
	T & operator[](int index);
	size_t size() { return count; }
	virtual ~List();
};


