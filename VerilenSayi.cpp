#include <iostream>
using namespace std;
int main() {

	//1 den ,kullan�c�n�n girdi�i say�ya kadar 7 nin katlar�n� yazd�ran kod
	int index = 1;
	int max;
	cout << "Lutfen max degerini giriniz: ";
	cin >> max;
	// ko�ul do�ru oldu�u s�rece parantez i�indeki kodlar �al���r
	while (index <= max) {
		if (index % 7 == 0) {
			cout << index << " ";
		}
			index++;
	};
	cout << endl;
	return 0;

}
