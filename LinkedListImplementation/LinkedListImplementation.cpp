#include<iostream>

//Linked List Implementation 
struct node
{
	int value;
	node* next;
};

class LinkedList
{
public: 
	LinkedList();
	~LinkedList();
	bool Find(int value);
	void PushBack(int value);
	void PushForward(int value);
	void Print(node* head);
	void Remove(int value);
	void Erase(node* head);

	node* head; 
};

LinkedList::LinkedList()
{
	head = NULL; 
}

LinkedList::~LinkedList()
{

}
bool LinkedList::Find(int value)
{
	if (!head)
	{
		std::cout << "Nothing in this list asshole" << std::endl; 
		return false; 
	}
	node* temp = head; 
	while (temp->next != NULL)
	{
		if (temp->value == value)
			return true; 
		temp = temp->next; 
	}
	if (temp->value == value)
		return true;
	else
	return false;
}

void LinkedList::PushBack(int value)
{
	node* insertedNode = new node(); 
	insertedNode->value = value; 
	insertedNode->next = NULL; 
	node* temp; 

	if (!head)
	{
		head = insertedNode;
		temp = head; 
	}
	else
	{
		temp = head; 
		while (temp->next != NULL)
		{
			temp = temp->next; 
		}
		temp->next = insertedNode; 
	}
}

void LinkedList::PushForward(int value)
{
	node* insertedNode = new node();
	insertedNode->value = value;

	if (head==NULL)
	{
		head = insertedNode;
		insertedNode->next = NULL; 
	}
	else
	{
		node* temp = head; 
		head = insertedNode;
		head->next = temp;
		
	}

}

void LinkedList::Print(node* head)
{
	if (!head)
	{
		std::cout << "Nothing to print asshole" << std::endl;
		return; 
	}

	
	if (head->next == NULL)
	{
		std::cout << head->value << std::endl; 
		return; 
	}
	else
	{
		std::cout << head->value << std::endl;
		Print(head->next);
	}	
}

void LinkedList::Remove(int value)
{
	if (!head)
		std::cout << "Linked list empty nothing to remove" << std::endl;           //if list is empty 
	node* temp = head; 
	if (temp->next == NULL)            //if list has only 1 element
	{
		if (temp->value == value)
		{
			delete temp;
			return;
		}
		else
			std::cout << "Value not found!" << std::endl;
	}
	
	if (temp->value == value)
	{
		//deleting the head node from the list 
		node* temp2 = temp->next; 
		head = temp2; 
		delete temp;
		return; 
	}




	//deleting the middle node 


	//deleting the end node
	while (temp->next != NULL)
	{

	}

}

void LinkedList::Erase(node* head)
{

}

void Test()
{
	LinkedList list;
	list.PushBack(15);
	list.PushBack(16);
	list.PushBack(17);
	list.PushBack(18);
	list.PushForward(14); 

	list.Print(list.head); 
	if (list.Find(15))
		std::cout << "Found it" << std::endl;
}

int main()
{
	Test(); 
	return 0;
}