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
#include <algorithm>
#include <vector>
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

	template<class T> int findElementById(vector<T>& v, const T& t) {
		for (size_t i = 0; i < v.size(); i++)
		{
			if (v[i] == t) {
				return i;
			}
		}
		return -1;
	}

	template<class T> bool removeElement(vector<T>& v, const T& t) {
		for (auto i = v.begin(); i != v.end(); i++)
		{
			if (*i == t) {
				v.erase(i);
				return true; // xoa thanh cong
			}
		}
		return false; // xoa that bai
	}

	bool isTranscriptExisted(const vector<Transcript<Student, Subject>>& v, 
		const string studentId, const string subjectId) {
		Student student(studentId);
		Subject subject(subjectId);
		for (size_t i = 0; i < v.size(); i++)
		{
			if (v[i].getStudent() == student && v[i].getSubject() == subject) {
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

	template<class T> void saveToFile(const vector<T>& v, const string fileName) {
		ofstream ofs(fileName, ios::out | ios::binary);
		if (ofs) {
			for (size_t i = 0; i < v.size(); i++)
			{
				ofs.write(reinterpret_cast<const char*>(&v[i]), sizeof(T));
			}
			ofs.close();
		}
	}

	template<class T> void readDataFromFile(vector<T>& v, const string fileName) {
		ifstream ifs(fileName, ios::in | ios::binary);
		if (ifs) {
			while (!ifs.eof()) {
				T object;
				ifs.read(reinterpret_cast<char*>(&object), sizeof(T));
				if (ifs.eof()) {
					break;
				}
				else {
					v.push_back(object);
				}
			}
			ifs.close();
		}
	}
	
	bool transcriptComparator(const Transcript<Student, Subject>& t1, const Transcript<Student, Subject>& t2) {
		return t1.getGpa() > t2.getGpa();
	}

	bool studentComparator(Student& t1, Student& t2) { // sort a-z
		return t2 > t1;
	}

	bool subjectComparator(Subject& t1, Subject& t2) { // sort a-z
		return t2 > t1;
	}
}