#include<string>
#include "Address.h"
using namespace std;

Address::Address() {}

Address::Address(const string city) : city(city) {}

Address::Address(const string city, const string nation) : city(city), nation(nation) {}

Address::Address(const string district, const string city, const string nation) :
	district(district), city(city), nation(nation) {}

string Address::getFullAddress() const {
	return number + ", " + alley + ", " + roadName + ward +
		", " + district + ", " + city + ", " + nation;
}

void Address::setCity(const string city) { this->city = city; }

string Address::getCity() const { return city; }

void Address::setNation(const string nation) { this->nation = nation; }

string Address::getNation() const { return nation; }

void Address::setRoadName(const string roadName) { this->roadName = roadName; }

string Address::getRoadName() const { return roadName; }

void Address::setNumber(const string number) { this->number = number; }

string Address::getNumber() const { return number; }

void Address::setAlley(const string alley) { this->alley = alley; }

string Address::getAlley() const { return alley; }

void Address::setWard(const string ward) { this->ward = ward; }

string Address::getWard() const { return ward; }

void Address::setDistrict(const string district) { this->district = district; }

string Address::getDistrict() const { return district; }
