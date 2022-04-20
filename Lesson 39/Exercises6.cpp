/**
* @author Branium Academy
* @version 2022.04.20
* @see https://braniumacademy.net
*/

#include <iostream>
#include <functional>
using namespace std;
#define SIZE 500

// hàm nhập các phần tử mảng
void getArrayElements(int* arr, int& size) {
	cout << "Nhap so phan tu cua mang: ";
	cin >> size;
	for (int i = 0; i < size; i++) {
		cin >> *(arr + i);
	}
}

// hàm tìm các phần tử chung của hai mảng
void commonElements(int* arr1, int* arr2, int size1, int size2) {
	bool isExisted(int*, int, int);
	for (int i = 0; i < size1; i++) {
		if (isExisted(arr2, size2, *(arr1 + i))) {
			cout << *(arr1 + i) << " ";
		}
	}
}

// tìm phần tử riêng của mảng thứ nhất
void privateElement(int* arr1, int* arr2, int size1, int size2) {
	bool isExisted(int*, int, int);
	for (int i = 0; i < size1; i++) {
		if (!isExisted(arr2, size2, *(arr1 + i))) {
			cout << *(arr1 + i) << " ";
		}
	}
}

// hàm kiểm tra xem giá trị x có tồn tại trong mảng arr không
bool isExisted(int* arr, int size, int x) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == x) {
			return true; // tồn tại x trong mảng đang xét
		}
	}
	return false; // không tồn tại x trong mảng đang xét
}

// hiển thị kết quả
void showElements(int* arr1, int* arr2, int size1, int size2,
	function<void(int*, int*, int, int)> myFunction) {
	myFunction(arr1, arr2, size1, size2);
	cout << endl;
}

int main() {
	int arr1[SIZE];
	int arr2[SIZE];
	int m, n;
	function<void(int*, int&)> inputFunc = getArrayElements;
	cout << "Nhap cac phan tu mang thu nhat: \n";
	inputFunc(arr1, m);
	cout << "Nhap cac phan tu mang thu hai: \n";
	inputFunc(arr2, n);

	// show ket qua
	cout << "Cac phan tu chung cua hai mang: \n";
	showElements(arr1, arr2, m, n, commonElements);
	cout << "Cac phan tu rieng cua mang thu nhat: \n";
	showElements(arr1, arr2, m, n, privateElement);
}
