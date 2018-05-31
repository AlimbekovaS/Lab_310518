#pragma once
#include<string>
#include<iomanip>
using namespace std;
class Scanner {
	string name;
	double price;
	string format;
	string resolution;
	string type;
public:
	Scanner();
	Scanner(string, double, string, string, string);
	string getName()const;
	string getFormat() const;
	double getPrice()const;
	string getResolution() const;
	string getType()const;
	friend istream & operator >> (istream & is, Scanner& s);
	friend ostream & operator << (ostream & os, Scanner s);
};
