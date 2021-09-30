#include <iostream>
#include <fstream>
using namespace std;

bool More()
{
	char ch;
	do
	{
		cout << "Enter 'y' or 'n': ";
		cin >> ch;
	} while (ch != 'y' && ch != 'n');
	if (ch == 'y')
		return true;
	else
		return false;
}


typedef struct Element* po;
struct Element {
	char name;
	po Next;
};

int main()
{
	po na;
	po p;
	na = NULL;

	while(More())
	{
		p = new Element;
		cout << "Enter a letter: ";
		cin >> p->name;
		p->Next = na;
		na = p;
	}
	cout << endl << endl << endl;
	p = na;
	while (p != NULL)
	{
		cout << p->name;
		p = p->Next;
	}
	cout << endl << endl << endl;

	return 0;
}

