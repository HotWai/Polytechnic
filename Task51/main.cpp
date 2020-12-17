/*
 ======================================
 Name        : main.cpp
 Author      :  Kiselev Mikhail
 Date        : 2020/12/14
 Version     :
 Copyright   : shareware
 Description : Transport
 =======================================
 */

#include<iostream>
#include<vector>
using namespace std;

enum TransportType
{
	TransportCar,
	TransportMotorcycle,
	TransportBoat,
	TransportTruck
};

class Transport
{
public:

	Transport(string b, string m, string col)
	{
		brand = b;
		model = m;
		color = col;
	}
	~Transport()
	{
	}


	void setBrand(string b)
	{
		brand = b;
	}
	string getBrand()
	{
		return brand;
	}

	void setModel(string m)
	{
		model = m;
	}
	string getModel()
	{
		return model;
	}

	void setColor(string col)
	{
		color = col;
	}
	string getColor()
	{
		return color;
	}


	void print()
	{
		cout << "Type: " << getTypeText() << endl;
		cout << "Brand: " << getBrand() << endl;
		cout << "Model: " << getModel() << endl;
		cout << "Color: " << getColor() << endl;
	}


	virtual TransportType getType() = 0;
	virtual string getTypeText() = 0;

private:
	string brand, model, color;
};

class Car : public Transport
{
public:
	Car(string b, string m, string col) : Transport(b, m, col)
	{
	}
	~Car()
	{
	}

private:
	TransportType getType()
	{
		return TransportCar;
	}
	string getTypeText()
	{
		return "Car";
	}
};

class Motorcycle : public Transport
{
public:
	Motorcycle(string b, string m, string col) : Transport(b, m, col)
	{
	}
	~Motorcycle()
	{
	}

private:
	TransportType getType()
	{
		return TransportMotorcycle;
	}
	string getTypeText()
	{
		return "Motorcycle";
	}
};

class Boat : public Transport
{
public:
	Boat(string b, string m, string col) : Transport(b, m, col)
	{
	}
	~Boat()
	{
	}

private:
	TransportType getType()
	{
		return TransportBoat;
	}
	string getTypeText()
	{
		return "Boat";
	}
};

class Truck : public Transport
{
public:
	Truck(string b, string m, string col) : Transport(b, m, col)
	{
	}
	~Truck()
	{
	}

private:
	TransportType getType()
	{
		return TransportTruck;
	}
	string getTypeText()
	{
		return "Truck";
	}
};

class Container
{
public:
	Container()
	{
		l = vector<Transport*>();

		l.push_back(new Car("BMW", "X5", "White"));
		l.push_back(new Car("BMW", "X6", "Red"));
		l.push_back(new Car("Audi", "A3", "Black"));
		l.push_back(new Motorcycle("Yamaha", "YZF-R6", "Blue"));
		l.push_back(new Motorcycle("Suzuki", "Gixxer SF", "Black"));
		l.push_back(new Boat("Parker", "100 GT", "Black"));
		l.push_back(new Truck("Volvo", "FH16", "Black"));
		l.push_back(new Truck("Nissan", "Cabstar", "White"));
	}

	void print()
	{
		int cars = 0, motos = 0, boats = 0, trucks = 0;
		int n = 1;

		vector<Transport*>::iterator iter;

		for (iter = l.begin(); iter != l.end(); iter++)
		{
			switch ((*(iter))->getType())
			{
			case TransportCar:
				cars++;
				break;
			case TransportMotorcycle:
				motos++;
				break;
			case TransportBoat:
				boats++;
				break;
			case TransportTruck:
				trucks++;
				break;
			}

			cout << n++ << endl;
			(*(iter))->print();
			cout << endl;
		}

		cout << endl << "Cars: " << cars << endl;
		cout << "Motorcycles: " << motos << endl;
		cout << "Boats: " << boats << endl;
		cout << "Trucks: " << trucks << endl;
	}

	void sell()
	{
		cout << "Index: ";
		int index;
		cin >> index;
		index--;

		delete l.at(index);
		l.erase(l.begin() + index);
	}

	void add()
	{
		cout << "1 - Car\n2 - Motorcycle\n3 - Boat\n4 - Truck\n";
		int type;
		cin >> type;

		string brand, model, color;
		cout << "Brand: ";
		cin >> brand;

		cout << "Model: ";
		cin >> model;

		cout << "Color: ";
		cin >> color;

		switch (type)
		{
		case 1:
			l.push_back(new Car(brand, model, color));
			break;
		case 2:
			l.push_back(new Motorcycle(brand, model, color));
			break;
		case 3:
			l.push_back(new Boat(brand, model, color));
			break;
		case 4:
			l.push_back(new Truck(brand, model, color));
			break;
		default:
			l.push_back(new Truck(brand, model, color));
			break;
		}
	}

	void edit()
	{
		cout << "Index: ";

		int index;
		cin >> index;

		cout << "Color: ";

		string color;
		cin >> color;

		l.at(index - 1)->setColor(color);
	}

private:
	vector<Transport*> l;
};

int main()
{
	Container container = Container();

	while (true)
	{
		cout << "1 - print\n2 - sell\n3 - add\n4 - edit\n";

		int x;
		cin >> x;

		switch (x)
		{
		case 1:
			container.print();
			break;
		case 2:
			container.sell();
			break;
		case 3:
			container.add();
			break;
		case 4:
			container.edit();
			break;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}
