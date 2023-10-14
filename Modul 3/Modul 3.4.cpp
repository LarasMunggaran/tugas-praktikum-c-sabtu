#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main ()
{
	int bil;
	
	cout<<"Masukkan sebuah bilangan: ";
	cin>>bil;
	
	if (bil%2==0)
	    cout<<bil<<" adalah bilangan GENAP";
	else
		cout<<bil<<" adalah bilangan GANJIL";

	return 0;
	
}
