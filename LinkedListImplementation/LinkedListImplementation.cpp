#include<iostream>

//Linked List Implementation 
struct node
{
	int value;
	node* next;
};

class LinkedList
{
	LinkedList();
	~LinkedList();
	bool Find(int value);
	void PushBack(int value);
	void PushForward(int value);
	void Print(node* head);
	int Remove(int value);
	void Erase(node* head);

};

LinkedList::LinkedList()
{

}

LinkedList::~LinkedList()
{

}
bool LinkedList::Find(int value)
{
	return false;
}

void LinkedList::PushBack(int value)
{

}

void LinkedList::PushForward(int value)
{

}

void LinkedList::Print(node* head)
{

}

int LinkedList::Remove(int value)
{
	return 0; 
}

void LinkedList::Erase(node* head)
{

}



int main()
{
	node* newNode = new node();
	newNode->value = 12;
	return 0;
}