/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.06
 *
 */
 
#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include "Subject.hpp"
#include "Transcript.hpp"
#include "Student.hpp"
using namespace std;

namespace Exercises10 {

	void showStudentInfoHeader() {
		cout << left << setw(15) << "Ma SV" << setw(25) << "Ho va ten"
			<< setw(25) << "Email" << setw(20) << "So dien thoai" << endl;
	}

	void showSubjectInfoHeader() {
		cout << left << setw(15) << "Ma mon" << setw(30) << "Ten mon"
			<< setw(10) << "So tiet" << setw(10) << "So tin" << endl;
	}

	template<class T> int findElementById(T* arr, const int size, const T& t) {
		for (int i = 0; i < size; i++)
		{
			if (arr[i] == t) {
				return i;
			}
		}
		return -1;
	}

	template<class T> bool removeElement(T* arr, int& size, const T& t) {
		for (int i = 0; i < size; i++)
		{
			if (arr[i] == t) {
				for (int j = i; j < size - 1; j++)
				{
					arr[j] = arr[j + 1];
				}
				size--;
				return true; // xoa thanh cong
			}
		}
		return false; // xoa that bai
	}

	template<class T> void sortASC(T* arr, const int size) {
		for (int i = 0; i < size - 1; i++)
		{
			for (int j = size - 1; j > i; j--)
			{
				if (arr[j - 1] > arr[j]) { // neu phan tu dung truoc > phan tu dung sau
					swap(arr[j], arr[j - 1]); // doi cho
				}
			}
		}
	}

	bool isTranscriptExisted(Transcript<Student, Subject>* arr, const int size, const string studentId, const string subjectId) {
		Student student(studentId);
		Subject subject(subjectId);
		for (int i = 0; i < size; i++)
		{
			if (arr[i].getStudent() == student && arr[i].getSubject() == subject) {
				return true;
			}
		}
		return false;
	}

	void showTranscriptInfoHeader() {
		cout << left << setw(15) << "Ma SV" << setw(25) << "Ho va ten"
			<< setw(15) << "Ma mon" << setw(25) << "Ten mon hoc"
			<< setw(10) << "Diem he 1" << setw(10) << "Diem he 2" << setw(10)
			<< "Diem he 3" << setw(10) << "GPA" << endl;
	}

	template<class T> void saveToFile(T* arr, const int size, const string fileName) {
		ofstream ofs(fileName, ios::out | ios::binary);
		if (ofs) {
			for (int i = 0; i < size; i++)
			{
				ofs.write(reinterpret_cast<const char*>(&arr[i]), sizeof(T));
			}
			ofs.close();
		}
	}

	template<class T> void readDataFromFile(T* arr, int& size, const string fileName) {
		ifstream ifs(fileName, ios::in | ios::binary);
		if (ifs) {
			while (!ifs.eof()) {
				T object;
				ifs.read(reinterpret_cast<char*>(&object), sizeof(T));
				if (ifs.eof()) {
					break;
				}
				else {
					arr[size++] = object;
				}
			}
			ifs.close();
		}
	}
}