#include <iostream>
#include <string>
#include "Tree.h"
using namespace std;

int power(int num, int step) {
	if (step == 1) {
		return num;
	}
	return num * power(num, step - 1);
}

int main()
{
	Tree tree;
	tree.insert(5);
	tree.insert(3);
	tree.insert(7);
	tree.insert(2);
	tree.insert(4);
	tree.insert(6);
	tree.insert(8);
	tree.Print();
	int ket;
	cout << "Enter key - ";
	cin >> ket;
	if (tree.find(ket) == true) {
		cout << "true";
	}
	else {
		cout << "false";
	}

	return 0;
}