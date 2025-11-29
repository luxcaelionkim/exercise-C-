#pragma once

template<typename T>
struct node {
	T data;
	node* nextnode = nullptr;
};

template<typename T>
class my_vector {
private:
	node<T>* p_start = new node<T>();
	node<T>* p_end = nullptr;
public:
	void push(T tmp)
	{
		if (p_end == nullptr)
		{
			p_start->data = tmp;
			p_end = p_start;
		}
		else
		{
			p_end->nextnode = new node<T>();
			p_end = p_end->nextnode;
			p_end->data = tmp;
		}
	}

	bool erase(node<T>* target)
	{
		node<T>* ptmp = p_start;
		while (ptmp->nextnode != target)
		{
			if (ptmp == nullptr) return false;
			ptmp = ptmp->nextnode;
		}
		ptmp->nextnode = ptmp->nextnode->nextnode;
		delete ptmp->nextnode;
		return true;
	}

	T front()
	{
		return p_start->data;
	}

	T back()
	{
		if (p_end == nullptr) return -1;
		return p_end->data;
	}

	node<T>* begin()
	{
		return p_start;
	}

	node<T>* end()
	{
		if (p_end == nullptr) return nullptr;
		return p_end;
	}
	T& operator[](const T& index)
	{
		node<T>* tmp = p_start;
		for (int i = 1; i <= index; i++)
		{
			tmp = tmp->nextnode;
		}
		return tmp->data;
	}

	~my_vector()
	{
		while (p_start->nextnode != nullptr)
		{
			node<T>* tmp = p_start;
			p_start = p_start->nextnode;
			delete tmp;
		}
		delete p_start;
	}

};
