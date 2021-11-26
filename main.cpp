#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Endijs Vanags 11.g klase
int main()
{
    int a, b, sumV;

    cout << "Ievadiet divus skaitlus intervala no 5 lidz 7" << endl;
    cout << endl;
    cout << "Pirmais skailis -  ";
    cin >> a;
    cout << "Otrais skaitlis - ";
    cin >> b;

    cout << endl;

        if (a < 5)
            {
                a = 5;
                cout << "Jusu pirmais skaitlis bija mazaks par 5, tapec jusu jauna vertiba ir " << a << " ..." << endl;
            }
            else if (a > 7)
                {
                    a = 7;
                    cout << "Jusu pirmais skaitlis bija lielaks par 7, tapec jusu jauna vertiba ir " << a << " ..." << endl;
                }
                cout << endl;
                if (b < 5)
                    {
                        b = 5;
                        cout << "Jusu otrais skaitlis bija mazaks par 5, tapec jusu jauna vertiba ir " << b << " ..." << endl;
                    }
                    else if (b > 7)
                        {
                            b = 7;
                            cout << "Jusu otrais skaitlis bija lielaks par 7, tapec jusu jauna vertiba ir " << b << " ..." << endl;
                        }

    int mas[a][b];

    srand(time(0));

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            mas[i][j] = rand()% 15;
            cout << mas[i][j] << " ";
            sumV = sumV + mas[i][j];
        }
        cout << endl;
    }
    cout << endl;

        if ( sumV % 2 == 0)
        {
            cout << "PARA" << endl;
        }
            else
            {
                cout << "Visu elementu summa ir " << sumV << endl;
            }

    return 0;
}
