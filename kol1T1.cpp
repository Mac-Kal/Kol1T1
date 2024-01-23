
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int tab[10] = { 0 };
    int n = 0, temp = 0, proby = 3;
    do
    {
        cout << "Podaj liczbe n" << "\n";
        cin >> n;
    } while (n > 5 || n <= 0);

    //użytkownik ma ŁĄCZNIE 3 próby, a nie 3 na każdą liczbę
    for (int i = 0; i < n; i++)
    {

        if (proby > 0)
        {
            cout << "\n" << "Podaj liczbe\n";
            cin >> temp;
            if (temp % 2 == 0 && temp < 100 && temp>0)
            {
                tab[i] = temp;
            }
            else
            {
                proby--;
                cout << "Liczba pozostalych prob:" << proby;
                i--;
            }
        }
        else
        {
            i = 10;
        }
    }
 
    cout << "\n" << "Tab Zad 1\n";
    for (int i = 0; i < 10; i++) {
        cout << tab[i] << ", ";
    }


    for (int i = 0; i < 10; i++) {
        if (tab[i]==0)
        {
            tab[i] = 10 + rand() % (100 - 10);
        }
    }

    cout << "\n" << "Tab Zad 2\n";
    for (int i = 0; i < 10; i++) {
        cout << tab[i] << ", ";
    }

    int* odpierwszej = &tab[0];
    int* odostatniej = &tab[9];
    int temp1;

    while (odostatniej > odpierwszej)
    {
        temp1 = *odpierwszej;
        *odpierwszej = *odostatniej;
        *odostatniej = temp1;
        odpierwszej++;
        odostatniej--;
    } 

    cout << "\n" << "Tab Zad 3\n";
    for (int i = 0; i < 10; i++) {
        cout << tab[i] << ", ";
    }
}


