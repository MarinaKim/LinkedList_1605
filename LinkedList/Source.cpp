#include"List.h"
#include"List.cpp"

int main() {
	int n;
	cout << "Enter the task num: ";
		cin >> n;
	switch (n) {
	case 1: {
		List <int> L;
		L.pushBack(5);
		L.pushBack(12);
		L.pushBack(15);
		cout << L.size() <<endl;
		L.print();
	}break;

	case 2: {
		List <int> L;
		L.pushBack(5);
		L.pushBack(12);
		L.pushBack(15);
		L.pushFront(4);
		L.pushFront(20);
		cout << L.size() << endl;
		cout << "------------------------------" << endl;
		L.print();

		cout << "---------------------------------------" << endl;
		
		L.~List();
		
	}break;

	case 3: {
		List <int> L;
		L.pushBack(5);
		L.pushBack(12);
		L.pushBack(15);
		L.pushFront(4);
		L.print();
		cout << "------------------------------" << endl;
		L.delFirst();
		L.print();
		cout << "------------------------------" << endl;
		L.delLast();
		L.print();
		cout << "------------------------------" << endl;

	}break;
	case 4: {
		List <int> L;
		L.pushBack(5);
		L.pushBack(12);
		L.pushBack(15);
		cout<<L.Find(12)<<endl;
	}break;

	case 5: {
		List <int> L;
		L.pushBack(5);
		L.pushBack(12);
		L.pushBack(15);
		cout << L[1] << endl;
	}break;
	}
	system("pause");
	return 0;
}