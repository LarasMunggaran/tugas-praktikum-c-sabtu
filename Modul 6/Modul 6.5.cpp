#include <stdio.h>

int main()
{
	int bulan = 10; // jumlah bulan
	double saldo = 1000000; // saldo awal
	double bunga = 0.02; // bunga perbulan
	
	for (int i = 1; i<=bulan; i++) {
		double bungabulanan = saldo*bunga;
		saldo += bungabulanan;
	}
	
	printf("jumlah uang setelah %d bulan adalah Rp. %.2lf\n", bulan, saldo);
	
	return 0;
}
