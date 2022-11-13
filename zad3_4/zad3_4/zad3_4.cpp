// zad3_4 utwórz trójkąt Pascala dla n liczb

// Spróbuj nadać mu kształt żeby był wyrównany do środka

#include <iostream>
using namespace std;

int factorial(int n) {
    // // Sposób liczenia silni przez rekurencję
    //if (n > 1) {
    //    return n * factorial(n - 1);
    //}
    //else {
    //    return 1;
    //}
    
    // Sposób liczenia silni przez pętlę for
    int silnia=1;
    for (int i = 1; i <= n; i++) {
        silnia *= i;
    }
    return silnia;
}

int main()
{
    int n, i, j;
    int liczba;
    cout << "Enter nuber of rows: ";
    cin >> n;
    // Pętla przechodzi do kolejnych wierszy trójkąta Pascala
    for (i = 0; i <= n; i++) {
        // Pętla oblicza każdą kolejną liczbę przy pomocy dwumianu Newtona (i po j), gdzie i jest 
        // indeksem wiersza (wiersz na samej górze to 0, potem 1 i ostatni to n) a j kolejnym miejscem 
        // w rzędzie liczonym od lewej (w rzędzie 0 będzie tylko jedna liczba, w rzędzie 1 dwie liczby itd
        for (j = 0; j <= i; j++) {
            liczba = factorial(i) / (factorial(j) * factorial(i - j));
            cout << liczba << " ";
        }
        j = 0;
        cout << endl;
    }
}

