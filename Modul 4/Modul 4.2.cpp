#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main ()
{
	int bil;
	
	cout<<"Masukkan sebuah bilangan: ";
	cin>>bil;
	
	if(bil>50)	
	    bil=bil+10;
	else
	 bil=bil-25;
	cout<<"Bilangan menjadi : " <<bil;

	return 0;
	
}
