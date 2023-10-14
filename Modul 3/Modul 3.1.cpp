#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, t ;
	float sm, luas, keliling;
	
	cout<<"Input panjang alas segitiga : "; cin>>a;
	cout<<"Input tinggi segitiga : "; cin>>t;
	
	sm=sqrt((a*a)+(t*t));
	luas = 0.5*a*t;
	keliling = a+t+sm;
	 
	cout<<"Luasnya="<<luas<<endl;
	cout<<"Kelilingnya="<<keliling<<endl;
	
	return 0;
}
