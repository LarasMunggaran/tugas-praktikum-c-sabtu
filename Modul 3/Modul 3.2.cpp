#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main ()
{
	int cel;
	float fah, rea;
	
	cout<<"Masukkan suhu dalam celcius: ";
	cin>>cel;
	rea=(0.8*cel);
	fah=(1.8*cel)+32;
	
	cout<<"Suhu Dalam Fahrenheit="<<fah<<endl;
	cout<<"Suhu dalam Reamur="<<rea<<endl;
	return 0;
	
}
