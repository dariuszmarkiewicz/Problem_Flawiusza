#include <iostream>

/*
gdy powstancow jest 41 i zabijana jest co 3 osoba
ostatnie dwie liczby to 16 i 31

*/

using namespace std;

int main()
{
    int n, k;

    cout << "Ilosc elementow tablicy: ";
    cin >> n;

    cout << "Krok przesuniecia: ";
    cin >> k;

    int tab_1[n];
    int tab_2[n] = {0};

    for(int i=0; i<n; i++)
        tab_1[i] = i+1;

    int ilosc_zywych = n;
    int index = -1;
    int sprawdzanie_zywych = 0;
    int j = 0;

        while(ilosc_zywych > 0)

            {
                while(sprawdzanie_zywych < k)
                    {
                        index=index+1;

                        if(index > n-1)
                            index = 0;

                        if(tab_1[index] != 0)
                            {
                                sprawdzanie_zywych = sprawdzanie_zywych+1;
                            }
                    }

                tab_2[j] = tab_1[index];
                j = j + 1;

                tab_1[index] = 0;

                ilosc_zywych = ilosc_zywych - 1;
                sprawdzanie_zywych = 0;

            }

    for(int i=0; i<n; i++)
        cout << tab_2[i] << endl;

    return 0;
}
