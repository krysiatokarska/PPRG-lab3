// zad 3_2 Napisz program wyświetlający na ekranie znaki z klawiatury do momentu,
// aż zostanie podany znak "t"

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

