#pragma once
class node {
public:
	int data;
	node* nextnode = nullptr;
};

class vector_int {
private:
	node* p = new node();
public:
	void push(int tmp)
	{
		node* ptmp = p;
		while (ptmp->nextnode != nullptr)
		{
			ptmp = ptmp->nextnode;
		}
		ptmp->nextnode = new node();
		ptmp->nextnode->data = tmp;
	}

	bool erase(node* target)
	{
		node* ptmp = p;
		while (ptmp->nextnode != target)
		{
			if (ptmp == nullptr) return false;
			ptmp = ptmp->nextnode;
		}
		ptmp->nextnode = ptmp->nextnode->nextnode;
		delete ptmp->nextnode;
		return true;
	}

	int front()
	{
		return p->data;
	}

	int back()
	{
		node* ptmp = p;
		while (ptmp->nextnode != nullptr)
		{
			ptmp = ptmp->nextnode;
		}
		return ptmp->data;
	}

	node* begin()
	{
		return p;
	}

	node* end()
	{
		node* ptmp = p;
		while (ptmp->nextnode != nullptr)
		{
			ptmp = ptmp->nextnode;
		}
		return ptmp->nextnode;
	}
	void vector_delete()
	{
		node* ptmp = p;
	}

};
