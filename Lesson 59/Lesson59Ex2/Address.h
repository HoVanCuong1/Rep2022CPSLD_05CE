#pragma once
#include <iostream>
using namespace std;

class Address
{
	string district;
	string city;
	string nation;
public:
	Address();
	Address(string city);
	Address(string district, string city, string nation);
	void setDistrict(string district);
	void setCity(string city);
	void setNation(string nation);
	string getCity() { return city; }
	string getDistrict() { return district; }
	string getNation() { return nation; }
};

