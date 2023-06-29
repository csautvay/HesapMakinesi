#include <iostream>


using namespace std;


int main() {

	cout << "  C++ DERSI   " << endl<< endl<< endl;


	int sayi1, sayi2, secilenislem, sonuc;
	sonuc = -1;

	cout << "Lutfen ilk sayiyi giriniz = ";
	cin >> sayi1;

	cout << "Lutfen ikinci sayiyi giriniz = ";
	cin >> sayi2;

	cout << "Lutfen Yapmak Ýstediginiz islemi seciniz 1.+ 2.- 3.* 4./ = ";

	cin >> secilenislem;

	if (secilenislem == 1 )
	{
		sonuc = sayi1 + sayi2;

	}
	else if (secilenislem == 2)
	{
		sonuc = sayi1 - sayi2;
	}
	else if (secilenislem == 3)
	{
		sonuc = sayi1 * sayi2;

	}
	else if (secilenislem == 4)
	{
		sonuc = sayi1 / sayi2;
	}
	else
	{
		cout << "Lutfen 1-4 arasi bir sayi giriniz.... " << endl <<  endl;
	}

	if (sonuc != -1)
	{
		cout << "Isleminizin sonucu = " << sonuc << endl;
	}
	
	
	return 0;

}