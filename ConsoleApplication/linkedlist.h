/*
 * time:   1/9/2021 21:09
 * file:   linkedlist
 * desc:   linkedlist
 *
 * Copyright (C) 2021-2031  YuHuan Chow <chowyuhuan@gmail.com>
 */
 
#pragma once

struct ListNodeBase
{
	ListNodeBase* next;
	ListNodeBase* prev;
};

template<class T>
struct ListNode : public ListNodeBase
{
	T data;
};

template<class T>
class LinkedList
{

typedef ListNode<T> Node;

protected:
	Node* node;

public:
	LinkedList()
	{
		node = new Node();
		node->next = node;
		node->prev = node;
	}

	bool IsEmpty() { return node->next == node; }

	void Add(T a)
	{
	}
};
