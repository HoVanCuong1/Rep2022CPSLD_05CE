/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.06
 *
 */
#include <iostream>
#include <exception>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

class InvalidNameException : public exception {
public:
	InvalidNameException() : exception("Ten chu the khong hop le. Ten chi duoc chua chu cai.") {}
};

class InvalidCardNumberException : public exception {
public:
	InvalidCardNumberException() : exception("Tuoi khong hop le. Tuoi hop le nam trong doan [0, 150].") {}
};

class DateFormatException : public exception {
public:
	DateFormatException() : exception("Ngay khong hop le. Dinh dang dung: dd/MM/yyyy.") {}
};

class InvalidAccountNumberException : public exception {
public:
	InvalidAccountNumberException() : exception("So dien thoai khong hop le.") {}
};

class BankAccount {
	friend ostream& operator << (ostream& os, const BankAccount& b);
	string owner;
	string cardNumber;
	string accountNumber;
	string releaseDate;
	string expiryDate;
	string bankName;
	long ballance;
public:
	BankAccount() : ballance(0) {}

	BankAccount(string owner) :owner(owner), ballance(0) {}

	BankAccount(string owner, string cardNumber, string accNumber,
		string releaseDate, string expiryDate, string bankName, long ballance) :
		bankName(bankName), ballance(ballance) {
		setOwner(owner);
		setReleaseDate(releaseDate);
		setExpiryDate(expiryDate);
		setAccountNumber(accNumber);
		setCardNumber(cardNumber);
	}

	void setOwner(string owner) {
		for (size_t i = 0; i < owner.length(); i++) {
			if ((owner.at(i) < 'A' && owner.at(i) != ' ') 
				|| owner.at(i) > 'z' || (owner.at(i) > 'Z' && owner.at(i) < 'a')) {
				throw InvalidNameException();
			}
		}
		this->owner = owner;
	}

	void setCardNumber(string cardNumber) {
		bool allDigit = true;
		for (size_t i = 0; i < owner.length(); i++) {
			if (cardNumber.at(i) < '0' || cardNumber.at(i) > '9') {
				allDigit = false;
				break;
			}
		}
		if (cardNumber.length() != 16 || !allDigit) {
			throw InvalidCardNumberException();
		}
		this->cardNumber = cardNumber;
	}

	void setAccountNumber(string acc) {
		bool allDigit = true;
		for (size_t i = 0; i < owner.length(); i++) {
			if (acc.at(i) < '0' || acc.at(i) > '9') {
				allDigit = false;
				break;
			}
		}
		if (acc.length() != 14 || !allDigit) {
			throw InvalidCardNumberException();
		}
		this->accountNumber = acc;
	}

	bool checkDateFormat(string date) {
		if (date.length() != 10) {
			return false;
		}
		if (!isdigit(date.at(0)) || !isdigit(date.at(1)) || !isdigit(date.at(3)) || !isdigit(date.at(4))) {
			return false;
		}
		for (size_t i = 6; i < date.length(); i++) {
			if (!isdigit(date.at(i))) {
				return false;
			}
		}
		if (date.at(2) != '/' || date.at(5) != '/') {
			return false;
		}
		return true;
	}

	bool isDigit(const char c) {
		if (c >= '0' && c <= '9') {
			return true;
		}
		return false;
	}

	void setReleaseDate(string date) {
		if (!checkDateFormat(date)) {
			throw DateFormatException();
		}
		this->releaseDate = date;
	}

	void setExpiryDate(string date) {
		if (!checkDateFormat(date)) {
			throw DateFormatException();
		}
		this->expiryDate = date;
	}
};

ostream& operator << (ostream& os, const BankAccount& s) {
	os << left << setw(15) << s.owner << setw(20) << s.cardNumber
		<< setw(20) << s.accountNumber << setw(15) << s.releaseDate
		<< setw(15) << s.expiryDate << setw(20) << s.bankName
		<< setw(15) << s.ballance << endl;
	return os;
}

void createStudent(vector<BankAccount>& v) {
	string owner;
	string cardNumber;
	string accNumber;
	string releaseDate;
	string expiryDate;
	long ballance;
	string bankName;
	cout << "Nhap owner: ";
	getline(cin, owner);
	cout << "So the: ";
	getline(cin, cardNumber);
	cout << "Nhap so TK: ";
	getline(cin, accNumber);
	cout << "Ngay phat hanh: ";
	getline(cin, releaseDate);
	cout << "Ngay het han: ";
	getline(cin, expiryDate);
	cout << "Ten ngan hang: ";
	getline(cin, bankName);
	cout << "So du: ";
	cin >> ballance;
	try {
		BankAccount acc(owner, cardNumber, accNumber, releaseDate, expiryDate, bankName, ballance);
		v.push_back(acc);
	}
	catch (InvalidCardNumberException& e) {
		cout << e.what() << endl;
	}
	catch (InvalidNameException& e) {
		cout << e.what() << endl;
	}
	catch (InvalidAccountNumberException& e) {
		cout << e.what() << endl;
	}
	catch (DateFormatException& e) {
		cout << e.what() << endl;
	}
}

void showTableHeader() {
	cout << left << setw(15) << "Ten chu the" << setw(20) << "So the"
		<< setw(20) << "So TK" << setw(15) << "Ngay PH"
		<< setw(15) << "Han su dung" << setw(20) << "Ngan hang"  
		<< setw(15) << "So du" << endl;
}

int main() {
	vector<BankAccount> bankAcc;
	int choice = 0;
	do {
		cout << "================== MENU ==================\n";
		cout << "1. Them tai khoan moi.\n";
		cout << "2. Hien danh sach tai khoan.\n";
		cout << "0. Ket thuc chuong trinh.\n";
		cout << "Ban chon? ";
		cin >> choice;
		cin.ignore();
		switch (choice)
		{
		case 0:
			cout << "<== Cam on quy vi da su dung dich vu ==>\n";
			break;
		case 1:
			createStudent(bankAcc);
			break;
		case 2:
			if (bankAcc.size() > 0) {
				showTableHeader();
				for (auto i = bankAcc.cbegin(); i != bankAcc.cend(); i++)
				{
					cout << *i;
				}
			}
			else {
				cout << "Danh sach tai khoan rong!\n";
			}
			break;
		default:
			cout << "Chuc nang khong hop le. Vui long chon lai.\n";
			break;
		}
	} while (choice != 0);

	return 0;
}