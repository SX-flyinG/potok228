#include <iostream>
#include <fstream>

using namespace std;

class Auto {

public:
	string brand;
	int speed;
	int year;
	int ves;

	Auto() {
		brand = "Audi RS8";
		speed = 240;
		year = 2021;
		ves = 4;
	}


	friend ostream& operator<<(ostream& os, const Auto& a) {
		os << "Brand: " << a.brand << "\nSpeed : " << a.speed << "\nYear of presentation : " << a.year << "\nVes : " << a.ves << endl;
		return os;
	}

	friend istream& operator>>(istream& is, Auto& a) {
		is >> a.brand >> a.speed >> a.year >> a.ves;
		return is;
	}

};

int main()
{
	Auto obj;
	ofstream outFile("auto.txt");
	if (outFile.is_open()) {
		outFile << obj;
		outFile.close();
	}

	Auto obj2;
	ifstream inFile("auto.txt");
	if (outFile.is_open()) {
		outFile >> obj2;
		cout  << "Brand: " << obj2.brand << "\nSpeed : " << obj2.speed << "\nYear of presentation : " << obj2.year << "\nVes : " << obj2.ves << endl;
		outFile.close();
	}
	
}
