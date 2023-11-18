#include <iostream>
using namespace std;
int main() {

	//1 den ,kullanýcýnýn girdiði sayýya kadar 7 nin katlarýný yazdýran kod
	int index = 1;
	int max;
	cout << "Lutfen max degerini giriniz: ";
	cin >> max;
	// koþul doðru olduðu sürece parantez içindeki kodlar çalýþýr
	while (index <= max) {
		if (index % 7 == 0) {
			cout << index << " ";
		}
			index++;
	};
	cout << endl;
	return 0;

}
