#include "List.h"
#include "List.cpp"
#include"Scanner.h"
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	Scanner *scan = new Scanner[10];
	int i = 0;
	string name, format, resolution, type;
	double price;
	ifstream read("scanner.txt");
	if (read.is_open())
	{
		while (!read.eof())
		{
			read >> name >> price>>format >> resolution >> type;
			Scanner S(name, price,format, resolution, type);
			scan[i++] = S;

		}
	}
	else
		cout << "Error with file" << endl;
	read.close();
	/*List<Scanner> L;
	L.push_back(Scanner("Canon",100000,"LFU", "1208*640","Laser"));*/
	
	
	//L.print();

	//L.removeLast();
	//L.removeFirst();
	//L.print();
	//L.find(12);
	//L.~List();
	system("pause");
	return 0;
}