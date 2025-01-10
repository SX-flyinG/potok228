#include <iostream>
#include <fstream>

using namespace std;

class Auto {
	string brand;
	int speed;
	int year;
	int ves;
public:

	Auto() {
		brand = "Audi RS8";
		speed = 240;
		year = 2021;
		ves = 4;
	}

	Auto(string brand, int speed, int year, int ves) {
		this->brand = brand;
		this->speed = speed;
		this->year = year;
		this->ves = ves;
	}

	string getBrand() {
		return brand;
	}

	int getSpeed() {
		return speed;
	}
	int getVes() {
		return ves;
	}

	int getYear() {
		return ves;
	}

	void writeOutFile(Auto& a){
		ofstream outFile("auto.txt");
		if (outFile.is_open()) {
			outFile << "Brand: " << a.getBrand()  << "\nSpeed :  " << a.getSpeed() << "\nYear of presentation : " << a.getYear() << "\nVes : " << a.getVes() << endl;;
			outFile.close();
		}
	}

	void WriteInFile(Auto& a) {
		ifstream inFile("auto.txt");
		if (inFile.is_open()) {
			inFile >> a;
			cout << "Brand: " << a.getBrand() << "\nSpeed : " << a.getSpeed() << "\nYear of presentation : " <<a.getYear() << "\nVes : " << a.getVes() << endl;
			inFile.close();
		}
	}



	friend ofstream& operator<<(ofstream& os, const Auto& a) {
		os << "Brand: " << a.brand << "\nSpeed : " << a.speed << "\nYear of presentation : " << a.year << "\nVes : " << a.ves << endl;
		return os;
	}

	friend ifstream& operator>>(ifstream& is, Auto& a) {
		is >> a.brand >> a.speed >> a.year >> a.ves;
		return is;
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

	obj.WriteInFile(obj);
	obj.writeOutFile(obj);
	

	Auto obj2 = Auto("BMW M5" , 240 , 20219 , 5);

	obj2.WriteInFile(obj2);
	obj2.writeOutFile(obj2);
	
}
