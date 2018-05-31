#include "Scanner.h"

Scanner::Scanner()
{
	this->name = "";
	this->price = 0;
	this->format = "";
	this->resolution = "";
	this->type = "";
}

Scanner::Scanner(string name, double price, string format, string resolution, string type)
{
	this->name = name;
	this->price = price;
	this->format = format;
	this->resolution = resolution;
	this->type = type;
}

string Scanner::getName() const
{
	return name;
}

string Scanner::getFormat() const
{
	return format;
}

double Scanner::getPrice() const
{
	return price;
}

string Scanner::getResolution() const
{
	return resolution;
}

string Scanner::getType() const
{
	return type;
}

istream & operator >> (istream & is, Scanner & s)
{
	is >> s.name >> s.price >> s.format >> s.resolution >> s.type;
	return is;
}

ostream & operator<<(ostream & os, Scanner s)
{
	os << setw(15) << s.name << setw(7) << s.price << setw(10) << s.format << setw(10) << s.resolution << setw(15) << s.type;
	return os;
}
