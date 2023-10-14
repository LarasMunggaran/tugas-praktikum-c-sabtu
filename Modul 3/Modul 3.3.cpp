#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int a,t;
	float sm;
	cout<<"Input Alas Segitiga: ";
	cin>>a;
	cout<<"Input Tinggi Segitiga:";
	cin>>t;
	sm=sqrt((a*a)+(t*t));
	
	cout<<"Sisi Miring Segitiga="<<sm<<endl;
	return 0;
	
}
