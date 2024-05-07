#include<iostream>
using namespace std;
class node
{
public:
	int bin;
	node* next, * prev;
};
class list :public node
{
	node* head, * tail, * temp, * temp1, * nnode;
public:
	list()
	{
		head = tail = NULL;
	}
	void create(int decimal);
	void display();
	void ones(list b1);
	void twos(list b1);
	void add(list b4, list b5);
};
void list::create(int decimal)
{
	while (decimal != 0)
	{
		nnode = new node;
		nnode->next = nnode->prev = NULL;
		nnode->bin = decimal % 2;
		decimal = decimal / 2;
		if (head == NULL)
		{
			head = tail = nnode;
			head->prev = tail->next = NULL;
		}
		else
		{
			tail->next = nnode;
			nnode->prev = tail;
			tail = nnode;
		}
	}

}
void list::display()
{
	temp = tail;
	while (temp != NULL)
	{
		cout << temp->bin;
		temp = temp->prev;
	}
}
void list::ones(list b1)
{
	temp = b1.head;
	while (temp != NULL)
	{
		nnode = new node;
		nnode->prev = nnode->next = NULL;
		if (temp->bin == 0)
		{
			nnode->bin = 1;
			temp = temp->next;
		}
		else
		{
			nnode->bin = 0;
			temp = temp->next;
		}
		if (head == NULL)
		{
			head = tail = nnode;
			head->prev = tail->next = NULL;
		}
		else
		{
			tail->next = nnode;
			nnode->prev = tail;
			tail = nnode;
		}
	}
}
void list::twos(list b1)
{
	temp = b1.head;
	int carry = 0;
	while (temp != NULL)
	{
		nnode = new node;
		nnode->prev = nnode->next = NULL;
		if (head == NULL)
		{
			head = tail = nnode;
		}
		else
		{
			tail->next = nnode;
			nnode->prev = tail;
			tail = nnode;
		}
		if (carry == 0)
		{
			if (temp->bin == 0)
			{
				nnode->bin = 0;
			}
			else
			{
				nnode->bin = 1;
				carry = 1;
			}
		}
		else
		{
			if (temp->bin == 0)
				nnode->bin = 1;
			else
				nnode->bin = 0;
		}
		temp = temp->next;
	}
}
void list::add(list b4, list b5)
{
	temp = b4.head;
	temp1 = b5.head;
	bool carry = 0;
	while (temp != NULL && temp1 != NULL)
	{
		nnode = new node;
		nnode->prev = nnode->next = NULL;
		if (head == NULL)
		{
			head = tail = nnode;
		}
		else
		{
			tail->next = nnode;
			nnode->prev = tail;
			tail = nnode;
		}
		if (temp->bin == 0 && temp1->bin == 0 && carry == 0)
		{
			nnode->bin = 0; carry = 0;
		}
		else if (temp->bin == 0 && temp1->bin == 0 && carry == 1)
		{
			nnode->bin = 1; carry = 0;
		}
		else if (temp->bin == 0 && temp1->bin == 1 && carry == 0)
		{
			nnode->bin = 1; carry = 0;
		}
		else if (temp->bin == 0 && temp1->bin == 1 && carry == 1)
		{
			nnode->bin = 0; carry = 1;
		}
		else if (temp->bin == 1 && temp1->bin == 0 && carry == 0)
		{
			nnode->bin = 1; carry = 0;
		}
		else if (temp->bin == 1 && temp1->bin == 0 && carry == 1)
		{
			nnode->bin = 0; carry = 1;
		}
		else if (temp->bin == 1 && temp1->bin == 1 && carry == 0)
		{
			nnode->bin = 0; carry = 1;
		}
		else if (temp->bin == 1 && temp1->bin == 1 && carry == 1)
		{
			nnode->bin = 1; carry = 1;
		}
		temp = temp->next;
		temp1 = temp1->next;
	}
	while (temp != NULL)
	{
		nnode = new node;
		nnode->prev = nnode->next = NULL;
		if (head == NULL)
		{
			head = tail = nnode;
		}
		else
		{
			tail->next = nnode;
			nnode->prev = tail;
			tail = nnode;
		}
		if (temp->bin == 0 && carry == 0)
		{
			nnode->bin = 0; carry = 0;
		}
		else if (temp->bin == 0 && carry == 1)
		{
			nnode->bin = 1; carry = 0;
		}
		else if (temp->bin == 1 && carry == 0)
		{
			nnode->bin = 1; carry = 0;
		}
		else if (temp->bin == 1 && carry == 1)
		{
			nnode->bin = 0; carry = 1;
		}
		temp = temp->next;
	}
	while (temp1 != NULL)
	{
		nnode = new node;
		nnode->prev = nnode->next = NULL;
		if (head == NULL)
		{
			head = tail = nnode;
		}
		else
		{
			tail->next = nnode;
			nnode->prev = tail;
			tail = nnode;
		}
		if (temp1->bin == 0 && carry == 0)
		{
			nnode->bin = 0; carry = 0;
		}
		else if (temp1->bin == 0 && carry == 1)
		{
			nnode->bin = 1; carry = 0;
		}
		else if (temp1->bin == 1 && carry == 0)
		{
			nnode->bin = 1; carry = 0;
		}
		else if (temp1->bin == 1 && carry == 1)
		{
			nnode->bin = 0; carry = 1;
		}
		temp1 = temp1->next;
	}
	if (carry == 1)
	{
		nnode = new node;
		nnode->prev = nnode->next = NULL;
		if (head == NULL)
		{
			head = tail = nnode;
		}
		else
		{
			tail->next = nnode;
			nnode->prev = tail;
			tail = nnode;
		}
		nnode->bin = 1;
	}
}
int main()
{
	int decimal, ch, choice;
	list b1, b2, b3, b4, b5, b6;
	do
	{
		cout << "Chosse one of the following::\n";
		cout << "1.convert into binary\n2.ones complement\n3.twos complement\n4.add\n::->";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter the decimal number::->";
			cin >> decimal;
			b1.create(decimal);
			cout << "binary equivalent ::->";
			b1.display();
			break;
		case 2:
			b2.ones(b1);
			cout << "\nones complement ::->";
			b2.display();
			break;
		case 3:
			b3.twos(b1);
			cout << "\ntwos complement ::->";
			b3.display();
			break;
		case 4:
			cout << "Enter the binary numbers for addition:\n";
			cout << "Enter the first decimal number::->";
			cin >> decimal;
			b4.create(decimal);
			cout << "Enter the second decimal number::->";
			cin >> decimal;
			b5.create(decimal);
			cout << "binary equivalent of first number::->";
			b4.display();
			cout << "\nbinary equivalent of second number ::->";
			b5.display();
			b6.add(b4, b5);
			cout << "\nADD::->";
			b6.display();
			break;
		default:
			cout << "incorrect choice";
		}
		cout << "\ndo u want to continue(press1)::->";
		cin >> ch;
	} while (ch == 1);
}
