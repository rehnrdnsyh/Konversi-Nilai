#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Konversi Nilai\n";
	int n_angka;
	cout << "Nilai Angka: ";
	cin >> n_angka;

	if (n_angka > 100 || n_angka < 0)
	{
		cout << "Input Tidak Valid\n";
	}
	else
	{
		char n_huruf = ' ';
		if (n_angka > 85)
			n_huruf = 'A';
		else if (n_angka > 65)
			n_huruf = 'B';
		else if (n_angka > 45)
			n_huruf = 'C';
		else if (n_angka > 0)
			n_huruf = 'D';
		else
			n_huruf = 'E';

		cout << "Nilai huruf: " << n_huruf << endl;
	}
	system("pause");
	return 0;
}
