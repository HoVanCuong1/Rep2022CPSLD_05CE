#include <iostream>

using namespace std;

enum class Zodiac {
	MA_KET, BAO_BINH, SONG_NGU, BACH_DUONG, KIM_NGUU,
	SONG_TU, CU_GIAI, SU_TU, XU_NU, THIEN_BINH, BO_CAP,
	NHAN_MA, NA
};

string zodiacName(enum class Zodiac zodiac) {
	string name = "";
	switch (zodiac)
	{
	case Zodiac::MA_KET:
		name = "Ma Ket";
		break;
	case Zodiac::BAO_BINH:
		name = "Bao Binh";
		break;
	case Zodiac::SONG_NGU:
		name = "Song Ngu";
		break;
	case Zodiac::BACH_DUONG:
		name = "Bach Duong";
		break;
	case Zodiac::KIM_NGUU:
		name = "Kim Nguu";
		break;
	case Zodiac::SONG_TU:
		name = "Song Tu";
		break;
	case Zodiac::CU_GIAI:
		name = "Cu Giai";
		break;
	case Zodiac::SU_TU:
		name = "Su Tu";
		break;
	case Zodiac::XU_NU:
		name = "Xu Nu";
		break;
	case Zodiac::THIEN_BINH:
		name = "Thien Binh";
		break;
	case Zodiac::BO_CAP:
		name = "Bo Cap";
		break;
	case Zodiac::NHAN_MA:
		name = "Nhan Ma";
		break;
	case Zodiac::NA:
		name = "";
		break;
	default:
		break;
	}
	return name;
}

int main() {
	int day, month;
	Zodiac zodiac = Zodiac::MA_KET;
	cout << "Nhap vao ngay sinh, thang sinh hop le: ";
	cin >> day >> month;
	switch (month) {
	case 1:
		if (day > 0 && day <= 19) {
			zodiac = Zodiac::MA_KET;
		}
		else if (day >= 20 && day <= 31) {
			zodiac = Zodiac::BAO_BINH;
		}
		else {
			zodiac = Zodiac::NA;
			cout << "INVALID DATE" << endl;
		}
		break;
	case 2:
		if (day > 0 && day <= 18) {
			zodiac = Zodiac::BAO_BINH;
		}
		else if (day >= 19 && day <= 28) {
			zodiac = Zodiac::SONG_NGU;
		}
		else {
			zodiac = Zodiac::NA;
			cout << "INVALID DATE" << endl;
		}
		break;
	case 3:
		if (day > 0 && day <= 20) {
			zodiac = Zodiac::SONG_NGU;
		}
		else if (day >= 21 && day <= 31) {
			zodiac = Zodiac::BACH_DUONG;
		}
		else {
			zodiac = Zodiac::NA;
			cout << "INVALID DATE" << endl;
		}
		break;
	case 4:
		if (day > 0 && day <= 20) {
			zodiac = Zodiac::BACH_DUONG;
		}
		else if (day >= 21 && day <= 30) {
			zodiac = Zodiac::KIM_NGUU;
		}
		else {
			zodiac = Zodiac::NA;
			cout << "INVALID DATE" << endl;
		}
		break;
	case 5:
		if (day > 0 && day <= 20) {
			zodiac = Zodiac::KIM_NGUU;
		}
		else if (day >= 21 && day <= 31) {
			zodiac = Zodiac::SONG_TU;
		}
		else {
			zodiac = Zodiac::NA;
			cout << "INVALID DATE" << endl;
		}
		break;
	case 6:
		if (day > 0 && day <= 21) {
			zodiac = Zodiac::SONG_TU;
		}
		else if (day >= 22 && day <= 30) {
			zodiac = Zodiac::CU_GIAI;
		}
		else {
			zodiac = Zodiac::NA;
			cout << "INVALID DATE" << endl;
		}
		break;
	case 7:
		if (day > 0 && day <= 22) {
			zodiac = Zodiac::CU_GIAI;
		}
		else if (day >= 23 && day <= 31) {
			zodiac = Zodiac::SU_TU;
		}
		else {
			zodiac = Zodiac::NA;
			cout << "INVALID DATE" << endl;
		}
		break;
	case 8:
		if (day > 0 && day <= 22) {
			zodiac = Zodiac::SU_TU;
		}
		else if (day >= 23 && day <= 31) {
			zodiac = Zodiac::XU_NU;
		}
		else {
			zodiac = Zodiac::NA;
			cout << "INVALID DATE" << endl;
		}
		break;
	case 9:
		if (day > 0 && day <= 22) {
			zodiac = Zodiac::XU_NU;
		}
		else if (day >= 23 && day <= 30) {
			zodiac = Zodiac::THIEN_BINH;
		}
		else {
			zodiac = Zodiac::NA;
			cout << "INVALID DATE" << endl;
		}
		break;
	case 10:
		if (day > 0 && day <= 23) {
			zodiac = Zodiac::THIEN_BINH;
		}
		else if (day >= 24 && day <= 31) {
			zodiac = Zodiac::BO_CAP;
		}
		else {
			zodiac = Zodiac::NA;
			cout << "INVALID DATE" << endl;
		}
		break;
	case 11:
		if (day > 0 && day <= 22) {
			zodiac = Zodiac::THIEN_BINH;
		}
		else if (day >= 23 && day <= 30) {
			zodiac = Zodiac::NHAN_MA;
		}
		else {
			zodiac = Zodiac::NA;
			cout << "INVALID DATE" << endl;
		}
		break;
	case 12:
		if (day > 0 && day <= 21) {
			zodiac = Zodiac::NHAN_MA;
		}
		else if (day >= 22 && day <= 31) {
			zodiac = Zodiac::MA_KET;
		}
		else {
			zodiac = Zodiac::NA;
			cout << "INVALID DATE" << endl;
		}
		break;
	default:
		cout << "INVALID MONTH" << endl;
		zodiac = Zodiac::NA;
		break;
	}
	if (zodiac != Zodiac::NA) {
		cout << zodiacName(zodiac) << endl;
	}
	return 0;
}
