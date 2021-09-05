#include "Address.h"

Address::Address() {
	district = "";
	city = "";
	nation = "Vietnam";
}

Address::Address(string city) {
	district = "";
	nation = "Vietnam";
	setCity(city);
}

Address::Address(string district, string city, string nation) {
	setDistrict(district);
	setCity(city);
	setNation(nation);
}

void Address::setDistrict(string district) {
	this->district = district;
}

void Address::setCity(string city) {
	this->city = city;
}

void Address::setNation(string nation) {
	this->nation = nation;
}
