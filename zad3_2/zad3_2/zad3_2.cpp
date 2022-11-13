// zad 3_2 Napisz program wyświetlający na ekranie znaki z klawiatury do momentu,
// aż zostanie podany znak "t"

// Chciałabym żeby automatycznie się kończył,
// żeby nie trzeba było klikać entera. Czy tak się w ogóle da?

// Nie działa jak wpiszę ciąg znaków mających "t" np. jak wpiszę 'tksjr' to się kończy.

#include <iostream>
using namespace std;

int main()
{
	char znak;
	cout << "Enter \"t\" and press enter: ";
	cin >> znak;
	cout << endl;
	while (znak != 't') {
		cin >> znak;
	}
}

