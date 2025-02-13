#include <iostream>
#include <fstream>

using namespace std;
 

/*Завдання:
Створити клас:
Тварина
Від нього два наслідники
Водна тварина
Земна тварина
Створити 2 класи наслідники від водної тварини
Створити 2 класи наслідники від земної тварини

ВСЮДИ перевантажити операції вводу-виводу у консоль та файл
Зробити загальний інтерфейс "Жива Істота", від котрого успадкуються всі класи та інтерфейс має поведінку "Дихати" і "Спати"*/

class Animal {
	bool isAlive;

public:

	virtual void  Sleep() = 0;
	virtual void Eat() = 0;

	Animal() {
		isAlive = true;
	}

	void writeOutFile(Animal& a) {
		ofstream outFile("auto.txt");
		if (outFile.is_open()) {
			outFile << "Animal can eat and sleep "<< endl;
			outFile.close();
		}
	}

	void WriteInFile(Animal& a) {
		ifstream inFile("auto.txt");
		if (inFile.is_open()) {
			inFile >> a;
			cout <<  "Animal can eat and sleep " << endl;
			inFile.close();
		}
	}



	friend ofstream& operator<<(ofstream& os, const Animal& a) {
		os <<  "Animal can eat and sleep " << endl;
		return os;
	}

	friend ifstream& operator>>(ifstream& is, Animal &a) {
		is >> a.isAlive;
		return is;
	}


	friend ostream& operator<<(ostream& os, const Animal& a) {
		os  << "Animal can eat and sleep " << endl;
		return os;
	}

	friend istream& operator>>(istream& is, Animal& a) {
		is >> a.isAlive;
		return is;
	}
};

class WaterAnimal : public Animal {
	bool isAlive;
public :

	WaterAnimal() {
		isAlive = true;
	}

	 void Sleep() override{
		cout << "Water Animal can sleep ;" << endl;
	}

	 void Eat() override {
		cout << "Water Animal can eat ;" << endl;
	}

	void writeOutFile(WaterAnimal& a) {
		ofstream outFile("auto.txt");
		if (outFile.is_open()) {
			outFile << "Water Animal can eat and sleep " << endl;
			outFile.close();
		}
	}

	void WriteInFile(WaterAnimal& a) {
		ifstream inFile("auto.txt");
		if (inFile.is_open()) {
			inFile >> a;
			cout << "Water Animal can eat and sleep " << endl;
			inFile.close();
		}
	}



	friend ofstream& operator<<(ofstream& os, const WaterAnimal& a) {
		os << "Water Animal can eat and sleep " << endl;
		return os;
	}

	friend ifstream& operator>>(ifstream& is, WaterAnimal& a) {
		is >> a.isAlive;
		return is;
	}


	friend ostream& operator<<(ostream& os, const WaterAnimal& a) {
		os << "Water Animal can eat and sleep " << endl;
		return os;
	}

	friend istream& operator>>(istream& is, WaterAnimal& a) {
		is >> a.isAlive;
		return is;
	}
};


class Fish : public WaterAnimal {
	bool isAlive;

public :

	Fish() {
		isAlive = true;
	}

	 void Sleep() override {
		cout << "Fish can sleep ;" << endl;
	}

	 void Eat() override {
		cout << "Fish can eat ;" << endl;
	}

	void writeOutFile(Fish& a) {
		ofstream outFile("auto.txt");
		if (outFile.is_open()) {
			outFile << "Fish can eat and sleep " << endl;
			outFile.close();
		}
	}

	void WriteInFile(Fish& a) {
		ifstream inFile("auto.txt");
		if (inFile.is_open()) {
			inFile >> a;
			cout << "Fish can eat and sleep " << endl;
			inFile.close();
		}
	}



	friend ofstream& operator<<(ofstream& os, const Fish& a) {
		os << "Fish can eat and sleep " << endl;
		return os;
	}

	friend ifstream& operator>>(ifstream& is, Fish& a) {
		is >> a.isAlive;
		return is;
	}


	friend ostream& operator<<(ostream& os, const Fish& a) {
		os << "Fish can eat and sleep " << endl;
		return os;
	}

	friend istream& operator>>(istream& is, Fish& a) {
		is >> a.isAlive;
		return is;
	}
};

class Fugu : public WaterAnimal {
	bool isAlive;
public :

	Fugu() {
		isAlive = true;
	}
	 void Sleep() override {
		cout << "Fugu can sleep ;" << endl;
	}

	 void Eat() override {
		cout << "Fugu can eat ;" << endl;
	}

	void writeOutFile(Fugu& a) {
		ofstream outFile("auto.txt");
		if (outFile.is_open()) {
			outFile << "Fugu can eat and sleep " << endl;
			outFile.close();
		}
	}

	void WriteInFile(Fugu& a) {
		ifstream inFile("auto.txt");
		if (inFile.is_open()) {
			inFile >> a;
			cout << "Fugu can eat and sleep " << endl;
			inFile.close();
		}
	}



	friend ofstream& operator<<(ofstream& os, const Fugu& a) {
		os << "Fugu can eat and sleep " << endl;
		return os;
	}

	friend ifstream& operator>>(ifstream& is, Fugu& a) {
		is >> a.isAlive;
		return is;
	}


	friend ostream& operator<<(ostream& os, const Fugu& a) {
		os << "Fugu can eat and sleep " << endl;
		return os;
	}

	friend istream& operator>>(istream& is, Fugu& a) {
		is >> a.isAlive;
		return is;
	}
};


class EarthAnimal : public Animal{
	bool isAlive;
protected :

	EarthAnimal() {
		isAlive = true;
	}
	 void Sleep() override {
		cout << "Earth Animal can sleep ;" << endl;
	}

	 void Eat() override {
		cout << "Earth Animal can eat ;" << endl;
	}
	void writeOutFile(EarthAnimal& a) {
		ofstream outFile("auto.txt");
		if (outFile.is_open()) {
			outFile << "Earth Animal can eat and sleep " << endl;
			outFile.close();
		}
	}

	void WriteInFile(EarthAnimal& a) {
		ifstream inFile("auto.txt");
		if (inFile.is_open()) {
			inFile >> a;
			cout << "Earth Animal can eat and sleep " << endl;
			inFile.close();
		}
	}



	friend ofstream& operator<<(ofstream& os, const EarthAnimal& a) {
		os << "Earth Animal can eat and sleep " << endl;
		return os;
	}

	friend ifstream& operator>>(ifstream& is, EarthAnimal& a) {
		is >> a.isAlive;
		return is;
	}


	friend ostream& operator<<(ostream& os, const EarthAnimal& a) {
		os << "Earth Animal can eat and sleep " << endl;
		return os;
	}

	friend istream& operator>>(istream& is, EarthAnimal& a) {
		is >> a.isAlive;
		return is;
	}
};

class Rabbit : public EarthAnimal {
	bool isAlive;
public :

	Rabbit() {
		isAlive = true;
	}

	 void Sleep() override{
		cout << "Rabbit can sleep ;" << endl;
	}

	 void Eat() override {
		cout << "Rabbit can eat ;" << endl;
	}

	void writeOutFile(Rabbit& a) {
		ofstream outFile("auto.txt");
		if (outFile.is_open()) {
			outFile << "Rabbit can eat and sleep " << endl;
			outFile.close();
		}
	}

	void WriteInFile(Rabbit& a) {
		ifstream inFile("auto.txt");
		if (inFile.is_open()) {
			inFile >> a;
			cout << "Rabbit can eat and sleep " << endl;
			inFile.close();
		}
	}



	friend ofstream& operator<<(ofstream& os, const Rabbit& a) {
		os << "Rabbit can eat and sleep " << endl;
		return os;
	}

	friend ifstream& operator>>(ifstream& is, Rabbit& a) {
		is >> a.isAlive;
		return is;
	}


	friend ostream& operator<<(ostream& os, const Rabbit& a) {
		os << "Rabbit can eat and sleep " << endl;
		return os;
	}

	friend istream& operator>>(istream& is, Rabbit& a) {
		is >> a.isAlive;
		return is;
	}
};

class Pig : public EarthAnimal {

	bool isAlive;
public:
	Pig() {
		isAlive = true;
	}

	 void Sleep() override {
		cout << "Pig can sleep ;" << endl;
	}

	 void Eat() override {
		cout << "Pig can eat ;" << endl;
	}

	void writeOutFile(Pig& a) {
		ofstream outFile("auto.txt");
		if (outFile.is_open()) {
			outFile << "Pig can eat and sleep " << endl;
			outFile.close();
		}
	}

	void WriteInFile(Pig& a) {
		ifstream inFile("auto.txt");
		if (inFile.is_open()) {
			inFile >> a;
			cout << "Pig can eat and sleep " << endl;
			inFile.close();
		}
	}



	friend ofstream& operator<<(ofstream& os, const Pig& a) {
		os << "Pig can eat and sleep " << endl;
		return os;
	}

	friend ifstream& operator>>(ifstream& is, Pig& a) {
		is >> a.isAlive;
		return is;
	}


	friend ostream& operator<<(ostream& os, const Pig& a) {
		os << "Pig can eat and sleep " << endl;
		return os;
	}

	friend istream& operator>>(istream& is, Pig& a) {
		is >> a.isAlive;
		return is;
	}
};

int main()
{

	
	Fish fish;
	Fugu fugu;
	Rabbit rabbit;
	Pig pig;

	fish.Eat();
	fish.Sleep();
	fish.WriteInFile(fish);
	fish.writeOutFile(fish);

	fugu.Eat();
	fugu.Sleep();
	fugu.WriteInFile(fugu);
	fugu.writeOutFile(fugu);


	rabbit.Eat();
	rabbit.Sleep();
	rabbit.WriteInFile(rabbit);
	rabbit.writeOutFile(rabbit);

	pig.Eat();
	pig.Sleep();
	pig.WriteInFile(pig);
	pig.writeOutFile(pig);
}
