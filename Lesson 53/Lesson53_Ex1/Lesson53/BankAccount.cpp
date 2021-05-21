#include <iostream>
#include <string>
#include "BankAccount.h"

void BankAccount::setOwner(string owner) { this->owner = owner; }

string BankAccount::getOwner() { return owner; }

void BankAccount::setCardNumber(string cardNumber) { this->cardNumber = cardNumber; }

string BankAccount::getCardNumber() { return cardNumber; }

void BankAccount::setBallance(long ballance) { this->ballance = ballance; }

long BankAccount::getBallance() { return ballance; }

void BankAccount::setStartDate(string startDate) { this->startDate = startDate; }

string BankAccount::getStartDate() { return startDate; }

void BankAccount::setEndDate(string endDate) { this->endDate = endDate; }

string BankAccount::getEndDate() { return endDate; }

void BankAccount::setBankName(string bankName) { this->bankName = bankName; }

string BankAccount::getBankName() { return bankName; }

BankAccount::BankAccount() {
	id = 0;
	ballance = 0;
}

BankAccount::BankAccount(int id, string owner, string cardNumber,
	long amount, string startDate, string endDate, string bankName) {
	this->id = id;
	this->owner = owner;
	this->cardNumber = cardNumber;
	this->ballance = ballance;
	this->startDate = startDate;
	this->endDate = endDate;
	this->bankName = bankName;
}

void BankAccount::checkBallance() {
	cout << "=========================================\n";
	cout << "Owner: " << owner << endl;
	cout << "Card Number: " << cardNumber << endl;
	cout << "Ballance: " << ballance << endl;
	cout << "End Date: " << endDate << endl;
}

bool BankAccount::withdraw(long amount) {
	cout << "=========================================\n";
	if (amount > 0 && amount <= ballance) {
		ballance -= amount;
		cout << "Withdrawn successfully." << endl;
		cout << "Account " << cardNumber << " -" << amount << endl;
		cout << "Your current ballance is: " << ballance << endl;
		return true;
	}
	else {
		cout << "Your ballance is not enough. "
			<< "Please try other amount." << endl;
		return false;
	}
}

bool BankAccount::deposit(long amount) {
	cout << "=========================================\n";
	if (amount > 0) {
		ballance += amount;
		cout << "Deposit successfully." << endl;
		cout << "Transaction +" << amount << endl;
		cout << "Account " << cardNumber << endl;
		cout << "Your current ballance is " << ballance << endl;
		return true;
	}
	else {
		cout << "Invalid deposit amount. Please check again." << endl;
		return false;
	}
}

bool BankAccount::transfer(BankAccount other, long amount) {
	cout << "======================================\n";
	if (amount < ballance) {
		other.ballance += amount;
		ballance -= amount;
		cout << "Transferred successfully." << endl;
		cout << "Account " << cardNumber << " -" << amount << endl;
		cout << "Account " << other.cardNumber << " +" << amount << endl;
		cout << "Your current ballance is " << ballance << endl;
		return true;
	}
	else {
		cout << "Transfer failed. Ballance is not enough." << endl;
		return false;
	}
}