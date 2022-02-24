#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int i, n, data[5];
	float rata, jumlah;
cout	<<"Masukkan banyaknya data = "; cin>>n;
for (i=0; i<n; i++){
	cout	<<"Data ["<<i+1<<"] = ";
	cin>>data[i];
	jumlah += data[i];
}
	rata = jumlah/n;
cout	<<"Banyaknya data = "<<n<<endl;
cout	<<"Rata-rata = "<<rata<<endl;
cout	<<"Jumlah = "<<jumlah<<endl;

getch();
}
