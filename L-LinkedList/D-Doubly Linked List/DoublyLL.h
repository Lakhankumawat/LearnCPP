#pragma once
#ifndef DLL_H
#define DLL_H

using namespace std;

template<class T>
class ListNode {
private:
	T value;
	ListNode<T>* next;
	ListNode<T>* prev;
public:
	ListNode();
	ListNode(T data);
	T& getValue();
	void setValue(T val);
	ListNode* getNext();
	ListNode* getPrev();
	void setNext(ListNode<T>* nt);
	void setPrev(ListNode<T>* previous);
};

template<class T>
class DLL {

private:
	ListNode<T>* head, * tail, * dummyNode;
	int size;
public:
	DLL();
	DLL(T data, int init_size);
	~DLL();
	int getSize() const;
	DLL<T>& operator = (const DLL<T>& another_list);

	class iterator {
	private:
		ListNode<T>* node;
		iterator();
		iterator(ListNode<T>* newNode);  //All node pointers in the list class of the iterator class should be private and inaccessible from outside of the class.
	public:
		friend class DLL;
		T& operator*() const;
		void operator++();
		void operator -- ();
		bool operator == (const iterator& anotherITR);
		bool operator != (const iterator& anotherITR);
	};

	// Return first element in list
	iterator begin() const {
		return iterator(head);
	}

	// Return last element in list
	iterator end() const {
		return iterator(dummyNode);
	}

	// Increment iterator by numbers of steps
	friend iterator operator+ (const iterator& listIt, int steps) {
		iterator it = listIt;
		for (int i = 0; i < steps; i++) {

			++it;
		}
		return it;
	}

	// Decrement iterator by numbers of steps
	friend iterator operator- (const iterator& listIt, int steps) {
		iterator it = listIt;
		for (int i = steps - 1; i >= 0; i--) {
			--it;
		}
		return it;
	}

	// Insert in a specific position using iterator
	iterator insert(T value, iterator position) {

		if (size == 0) {
			head->setValue(value);
			tail = head;
			tail->setNext(dummyNode);
			dummyNode->setPrev(tail);
		}

		else if (position.node == head) {
			//temp->setNext(head);
			if (size != 0) {
				ListNode<T>* temp = new ListNode<T>(value);
				temp->setNext(position.node);
				head->setPrev(temp);
				head = temp;
				--position;
			}
		}
		else {
			ListNode<T>* temp = new ListNode<T>(value);
			position.node->getPrev()->setNext(temp);
			temp->setPrev(position.node->getPrev());
			temp->setNext(position.node);
			position.node->setPrev(temp);
			if (position.node == tail) {
				tail = position.node;
				tail->setNext(dummyNode);
				dummyNode->setPrev(tail);
			}
			else if (position.node == dummyNode) {
				tail->setNext(temp);
				tail = temp;

				dummyNode->setPrev(tail);
				tail->setNext(dummyNode);
			}
			--position;
		}
		size++;
		return position;
	}

	// Insert a value in the end of the list
	iterator insert(T value) {
		DLL<T>::iterator position = this->begin() + this->getSize();
		if (size == 0) {
			head->setValue(value);
			tail = head;
			tail->setNext(dummyNode);
			dummyNode->setPrev(tail);
		}

		else if (position.node == head) {
			//temp->setNext(head);
			if (size != 0) {
				ListNode<T>* temp = new ListNode<T>(value);
				temp->setNext(position.node);
				head->setPrev(temp);
				head = temp;
				--position;
			}
		}
		else {
			ListNode<T>* temp = new ListNode<T>(value);
			position.node->getPrev()->setNext(temp);
			temp->setPrev(position.node->getPrev());
			temp->setNext(position.node);
			position.node->setPrev(temp);
			if (position.node == tail) {
				tail = position.node;
				tail->setNext(dummyNode);
				dummyNode->setPrev(tail);
			}
			else if (position.node == dummyNode) {
				tail->setNext(temp);
				tail = temp;

				dummyNode->setPrev(tail);
				tail->setNext(dummyNode);
			}
			--position;
		}
		size++;
		return position;
	}

	// Insert a value in a specific index that begins from 1
	iterator insert(T value, int index) {

		DLL<T>::iterator position = this->begin() + index - 1;
		if (size == 0) {
			head->setValue(value);
			tail = head;
			tail->setNext(dummyNode);
			dummyNode->setPrev(tail);
		}

		else if (position.node == head) {
			//temp->setNext(head);
			if (size != 0) {
				ListNode<T>* temp = new ListNode<T>(value);
				temp->setNext(position.node);
				head->setPrev(temp);
				head = temp;
				--position;
			}
		}
		else {
			ListNode<T>* temp = new ListNode<T>(value);
			position.node->getPrev()->setNext(temp);
			temp->setPrev(position.node->getPrev());
			temp->setNext(position.node);
			position.node->setPrev(temp);
			if (position.node == tail) {
				tail = position.node;
				tail->setNext(dummyNode);
				dummyNode->setPrev(tail);
			}
			else if (position.node == dummyNode) {
				tail->setNext(temp);
				tail = temp;

				dummyNode->setPrev(tail);
				tail->setNext(dummyNode);
			}
			--position;
		}
		size++;
		return position;
	}

	// Erase from the list by position(iterator)
	iterator erase(iterator position) {
		try {
			if (position.node == dummyNode)
				throw"Position not found";
			ListNode<T>* temp = position.node;
			temp->getNext()->setPrev(temp->getPrev());
			if (head != temp)
				temp->getPrev()->setNext(temp->getNext());
			position = temp->getNext();
			if (temp == head)
				head = temp->getNext();
			else if (temp == tail) {
				tail = temp->getPrev();
				tail->setNext(dummyNode);
				dummyNode->setPrev(tail);
			}
			delete temp;
			size--;
			return position;

		}
		catch (const char* arr) {
			std::cout << arr << std::endl;

		}

	}

	// Erase from the list by elemnt index
	iterator erase(int index) {
		try {
			//index begins from 1
			DLL<T>::iterator position = this->begin() + index - 1;
			if (position.node == dummyNode)
				throw"Position not found";
			ListNode<T>* temp = position.node;
			temp->getNext()->setPrev(temp->getPrev());
			if (head != temp)
				temp->getPrev()->setNext(temp->getNext());
			position = temp->getNext();
			if (temp == head)
				head = temp->getNext();
			else if (temp == tail) {
				tail = temp->getPrev();
				tail->setNext(dummyNode);
				dummyNode->setPrev(tail);
			}
			delete temp;
			size--;
			return position;

		}
		catch (const char* arr) {
			std::cout << arr << std::endl;

		}

	}

	// Display the whole list
	void display() {
		DLL<T>::iterator it;
		for (it = this->begin(); it != this->end(); ++it)
			cout << *it << " ";
		cout << endl;
	}

	// Display from specific position to another position
	void display(iterator start, iterator end) {
		DLL<T>::iterator it;
		for (it = start; it != end; ++it)
			cout << *it << " ";
		cout << endl;
	}

	// Display number of elements from a specific position
	void display(iterator start, int elementsNb) {
		DLL<T>::iterator it = start;
		while (elementsNb--) {
			cout << *it << " ";
			if (it + 1 != this->end())
				++it;
		}
		cout << endl;
	}

};

template<class T>
ListNode<T>::ListNode() : next(nullptr), prev(nullptr) {}

template<class T>
ListNode<T>::ListNode(T data) : value(data), next(nullptr), prev(nullptr) {}

template<class T>
ListNode<T>* ListNode<T>::getNext() {
	return next;
}

template<class T>
ListNode<T>* ListNode<T>::getPrev() {
	return prev;
}

template<class T>
void ListNode<T>::setNext(ListNode<T>* nt) {
	next = nt;
}

template<class T>
void ListNode<T>::setPrev(ListNode<T>* previous) {
	prev = previous;
}

template<class T>
T& ListNode<T>::getValue() {
	return value;
}

template<class T>
void ListNode<T>::setValue(T val) {
	value = val;
}


template<class T>
DLL<T>::DLL() : size(0) {
	head = tail = new ListNode<T>();
	dummyNode = new ListNode<T>();
	tail->setNext(dummyNode);
	dummyNode->setPrev(tail);
}

template<class T>
DLL<T>::DLL(T data, int init_size) : size(init_size) {
	dummyNode = new ListNode<T>();
	if (size > 0) {
		head = tail = new ListNode<T>(data);
		tail->setNext(dummyNode);
		dummyNode->setPrev(tail);
		for (int i = 0; i < size - 1; i++)
		{
			if (head->getNext() == nullptr)
			{
				ListNode<T>* temp = new ListNode<T>(data);
				head->setNext(temp);
				temp->setPrev(head);
				temp->setNext(tail);
				tail->setPrev(temp);
			}
			else {
				ListNode<T>* temp = new ListNode<T>(data);
				temp->setPrev(tail);
				tail->setNext(temp);
				tail = temp;
				tail->setNext(dummyNode);
				dummyNode->setPrev(tail);
			}
		}
	}
	else {
		head = tail = new ListNode<T>();
		// currPos = this->begin();
		tail->setNext(dummyNode);
		dummyNode->setPrev(tail);
	}
}

template<class T>
DLL<T>::~DLL() {
	for (int i = 0; i < size; i++) {
		ListNode<T>* temp = head->getNext();
		delete head;
		head = temp;
	}
	size = 0;
}

template<class T>
int DLL<T>::getSize() const {
	return size;
}


template<class T>
DLL<T>::iterator::iterator() :node(nullptr) {}

template<class T>
DLL<T>::iterator::iterator(ListNode<T>* newNode) : node(newNode) {}

template<class T>
T& DLL<T>::iterator::operator*() const {
	return node->getValue();
}

// Increment iterator by 1
template<class T>
void DLL<T>::iterator::operator++() {
	try {
		if (this->node->getNext() == nullptr)
			throw"End of the List";
		node = node->getNext();
	}
	catch (const char* arr) {
		std::cout << arr << std::endl;
		exit(0);
	}
}


// Decrement iterator by 1
template<class T>
void DLL<T>::iterator::operator--() {
	try {
		if (this->node->getPrev() == nullptr)
			throw"We are already at the beginning of the list";
		node = node->getPrev();
	}
	catch (const char* arr) {
		std::cout << arr << std::endl;
		exit(0);
	}
}

template<class T>
bool DLL<T>::iterator::operator == (const iterator& anotherITR) {
	return this->node == anotherITR.node;
}

template<class T>
bool DLL<T>::iterator::operator != (const iterator& anotherITR) {
	return this->node != anotherITR.node;
}

template<class T>
DLL<T>& DLL<T>::operator = (const DLL<T>& another_list) {
	while (head->getNext() != dummyNode) {
		ListNode<T>* temp = new ListNode<T>();
		temp = head->getNext();
		head->setNext(temp->getNext());
		delete temp;
	}
	tail = head;
	tail->setNext(dummyNode);
	dummyNode->setPrev(tail);
	size = another_list.size;
	if (another_list.size == 0) {
		return *this;
	}

	ListNode<T>* another = another_list.head;
	ListNode<T>* list = head;
	while (true) {
		if (another == another_list.head) {
			list->setValue(another->getValue());
			another = another->getNext();
		}
		else if (another == another_list.tail) {
			ListNode<T>* t = new ListNode<T>(another->getValue());
			list->setNext(t);
			tail = t;
			tail->setPrev(list);
			tail->setNext(this->dummyNode);
			dummyNode->setPrev(this->tail);
			another = another->getNext();
			return *this;
		}
		else
		{
			ListNode<T>* t = new ListNode<T>(another->getValue());
			list->setNext(t);
			list->getNext()->setPrev(list);
			list = list->getNext();
			another = another->getNext();
		}
	}

}

#endif