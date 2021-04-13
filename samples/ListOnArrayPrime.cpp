#include "ListOnArray.h"
#include <iostream>
#include <exception>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	ListOnArray<int> list1(3);
	lst.push_front(3);
	lst.push_front(2);
	lst.push_front(1);
	
	ListOnArray<int> list2(3);
	list2.push_back(3);
	list2.push_back(2);
	list2.push_back(1);

	ListOnArray<int> list3(3);
	list3.push_back(1);
	list3.push_back(2);
	list3.push_back(3);

	cout << list1 << "\n";
	cout << list2 << "\n";
	cout << list3 << "\n";

	if (list1 == list2)
		cout << "равны\n";
	else
		cout << "не равны\n";

	if (list3 == list2)
		cout << "равны\n";
	else
		cout << "не равны\n";

	if (list1 == list3)
		cout << "равны\n";
	else
		cout << "не равны\n";
	return 0;
}
	


