#include "Address.h"

Address::Address() {
	district = "";
	city = "";
	nation = "";
}

Address::Address(string city) {
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
