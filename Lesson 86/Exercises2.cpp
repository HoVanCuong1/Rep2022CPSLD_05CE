#include <iostream>
#include <exception>
#include <string>
using namespace std;

class ArrayIndexOutOfBoundException : public exception {
public:
	ArrayIndexOutOfBoundException(int index) : exception((string("Array index out of bound: ") + to_string(index)).c_str()) {}
};

int elementAt(int *arr, int n, int index) {
	if (index < 0 || index >= n) {
		throw ArrayIndexOutOfBoundException(index);
	}
	return arr[index];
}

void showElementAt(int* arr, int size, int index) {
	try {
		cout << elementAt(arr, size, index) << endl;
	}
	catch (ArrayIndexOutOfBoundException& e) {
		cout << e.what() << endl;
	}
}

int main() {
	const int SIZE = 10;
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	showElementAt(arr, SIZE, -1);
	showElementAt(arr, SIZE, 20);
	showElementAt(arr, SIZE, 5);
	return 0;
}