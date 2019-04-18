#include <iostream>

#include "List.h"

using namespace std;

int main(int argc, char** argv) {
	List newList;

	newList.AddNode(3);
	newList.AddNode(5);
	newList.AddNode(7);

	newList.Print();

	newList.DeleteNode(5);

	newList.Print();
	
	system("PAUSE");

	return 0;
}