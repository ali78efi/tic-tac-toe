#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int main()
{
    int g = 0;
    while (g == 0)
    {

        cout << endl
             << endl
             << endl
             << "             Tic-tac-toe" << endl
             << endl;
        cout << endl
             << "      PRESS 1:  Play against computer" << endl
             << endl
             << "      PRESS 2:  Two players" << endl
             << endl
             << endl
             << "      PRESS E:  Exit" << endl
             << endl
             << "      ";

        char n1 = ' ', n2 = ' ', n3 = ' ', n4 = ' ', n5 = ' ', n6 = ' ', n7 = ' ', n8 = ' ', n9 = ' ';
        char n;
        char S;

        cin >> S;

        system("cls");
        if (S == 'E')
        {
            cout << endl
                 << "Goodbye" << endl;
            g = 15;
        }
        if (S == '2')
        {

            cout << endl
                 << endl
                 << "Player1(O) VS Player(X)" << endl
                 << endl;
            // rasme jadval rahnama
            cout << endl
                 << "PRESS M: Back to top menu" << endl
                 << "PRESS R: Restart game" << endl
                 << "PRESS E:  Exit" << endl
                 << endl;
            cout << "-------------" << endl;
            cout << "| " << 1 << " "
                 << "| " << 2 << " | " << 3 << " |" << endl;
            cout << "-------------" << endl;
            cout << "| " << 4 << " "
                 << "| " << 5 << " | " << 6 << " |" << endl;
            cout << "-------------" << endl;
            cout << "| " << 7 << " "
                 << "| " << 8 << " | " << 9 << " |" << endl;
            cout << "-------------" << endl;

            for (int i = 0; i < 9; i++)
            {

                if (i % 2 == 0)
                    cout << "Player 1 Turn";
                else if (i % 2 == 1)
                    cout << "Player 2 Turn";
                cin >> n;
                system("cls");

                cout << endl
                     << "PRESS M: Back to top menu" << endl
                     << "PRESS R: Restart game" << endl
                     << "PRESS E:  Exit" << endl
                     << endl;

                if (n == 'E')
                {
                    system("cls");
                    cout << endl
                         << "goodbye" << endl;
                    g = 1;
                    break;
                }
                else if (n == 'M')
                {
                    system("cls");
                    break;
                }

                else if (n == 'R')
                {
                    system("cls");
                    i = -1;
                    n1 = ' ';
                    n2 = ' ';
                    n3 = ' ';
                    n4 = ' ';
                    n5 = ' ';
                    n6 = ' ';
                    n7 = ' ';
                    n8 = ' ';
                    n9 = ' ';
                    cout << endl
                         << "PRESS M: Back to top menu" << endl
                         << "PRESS R: Restart game" << endl
                         << "PRESS E:  Exit" << endl
                         << endl;
                }

                else if (n == '1')
                {
                    if (i % 2 == 0 && n1 == ' ')
                        n1 = 'O';
                    else if (n1 != ' ')
                        i--;
                    else
                        n1 = 'X';
                }

                else if (n == '2')
                {
                    if (i % 2 == 0 && n2 == ' ')
                        n2 = 'O';
                    else if (n2 != ' ')
                        i--;

                    else
                        n2 = 'X';
                }

                else if (n == '3')
                {
                    if (i % 2 == 0 && n3 == ' ')
                        n3 = 'O';
                    else if (n3 != ' ')
                        i--;
                    else
                        n3 = 'X';
                }

                else if (n == '4')
                {
                    if (i % 2 == 0 && n4 == ' ')
                        n4 = 'O';
                    else if (n4 != ' ')
                        i--;
                    else
                        n4 = 'X';
                }

                else if (n == '5')
                {
                    if (i % 2 == 0 && n5 == ' ')
                        n5 = 'O';
                    else if (n5 != ' ')
                        i--;
                    else
                        n5 = 'X';
                }

                else if (n == '6')
                {
                    if (i % 2 == 0 && n6 == ' ')
                        n6 = 'O';
                    else if (n6 != ' ')
                        i--;
                    else
                        n6 = 'X';
                }

                else if (n == '7')
                {
                    if (i % 2 == 0 && n7 == ' ')
                        n7 = 'O';
                    else if (n7 != ' ')
                        i--;
                    else
                        n7 = 'X';
                }

                else if (n == '8')
                {
                    if (i % 2 == 0 && n8 == ' ')
                        n8 = 'O';
                    else if (n8 != ' ')
                        i--;
                    else
                        n8 = 'X';
                }

                else if (n == '9')
                {
                    if (i % 2 == 0 && n9 == ' ')
                        n9 = 'O';
                    else if (n9 != ' ')
                        i--;
                    else
                        n9 = 'X';
                }

                else if (n > '9' or n < '1')
                {
                    cout << "adad jadval az 1 ta 9 hsatan" << endl
                         << "_R_ baraye shoroe mojadad bazi"
                         << endl
                         << "_E_ baraye etmame bazi" << endl
                         << endl;
                    i--;
                }

                // rasme jadval bad az har taghir
                cout << "-------------" << endl;
                cout << "| " << n1 << " "
                     << "| " << n2 << " | " << n3 << " |" << endl;
                cout << "-------------" << endl;
                cout << "| " << n4 << " "
                     << "| " << n5 << " | " << n6 << " |" << endl;
                cout << "-------------" << endl;
                cout << "| " << n7 << " "
                     << "| " << n8 << " | " << n9 << " |" << endl;
                cout << "-------------" << endl;

                cout << endl;
                // moshakhas kardane barande
                if (n1 == 'O' && n2 == 'O' && n3 == 'O')
                {
                    cout << "* win";
                    break;
                }
                else if (n1 == 'O' && n4 == 'O' && n7 == 'O')
                {
                    cout << "O win";
                    break;
                }
                else if (n2 == 'O' && n5 == 'O' && n8 == 'O')
                {
                    cout << "O win";
                    break;
                }
                else if (n3 == 'O' && n6 == 'O' && n9 == 'O')
                {
                    cout << "O win";
                    break;
                }
                else if (n4 == 'O' && n5 == 'O' && n6 == 'O')
                {
                    cout << "O win";
                    break;
                }
                else if (n7 == 'O' && n8 == 'O' && n9 == 'O')
                {
                    cout << "O win";
                    break;
                }
                else if (n1 == 'O' && n5 == 'O' && n9 == 'O')
                {
                    cout << "O win";
                    break;
                }
                else if (n3 == 'O' && n5 == 'O' && n7 == 'O')
                {
                    cout << "O win";
                    break;
                }

                else if (n1 == 'X' && n2 == 'X' && n3 == 'X')
                {
                    cout << "X win";
                    break;
                }
                else if (n1 == 'X' && n4 == 'X' && n7 == 'X')
                {
                    cout << "X win";
                    break;
                }
                else if (n2 == 'X' && n5 == 'X' && n8 == 'X')
                {
                    cout << "X win";
                    break;
                }
                else if (n3 == 'X' && n6 == 'X' && n9 == 'X')
                {
                    cout << "X win";
                    break;
                }
                else if (n4 == 'X' && n5 == 'X' && n6 == 'X')
                {
                    cout << "X win";
                    break;
                }
                else if (n7 == 'X' && n8 == 'X' && n9 == 'X')
                {
                    cout << "X win";
                    break;
                }
                else if (n1 == 'X' && n5 == 'X' && n9 == 'X')
                {
                    cout << "X win";
                    break;
                }
                else if (n3 == 'X' && n5 == 'X' && n7 == 'X')
                {
                    cout << "X win";
                    break;
                }

                else if (i == 8)
                    cout << "draw";
                cout << endl;
            }
        }

        if (S == '1')
        {
            cout << endl
                 << endl
                 << "Player (O) VS Computer (X)" << endl
                 << endl;

            cout << endl
                 << "PRESS M: Back to top menu" << endl
                 << "PRESS R: Restart game" << endl
                 << "PRESS E:  Exit" << endl
                 << endl;

            cout << "-------------" << endl;
            cout << "| " << 1 << " "
                 << "| " << 2 << " | " << 3 << " |" << endl;
            cout << "-------------" << endl;
            cout << "| " << 4 << " "
                 << "| " << 5 << " | " << 6 << " |" << endl;
            cout << "-------------" << endl;
            cout << "| " << 7 << " "
                 << "| " << 8 << " | " << 9 << " |" << endl;
            cout << "-------------" << endl;

            for (int i = 0; i < 9; i++)
            {

                cin >> n;

                if (n == 'E')
                {
                    system("cls");
                    cout << endl
                         << "goodbye" << endl;
                    g = 1;
                    break;
                }

                else if (n == 'M')
                {
                    system("cls");
                    break;
                }

                else if (n == 'R')
                {
                    system("cls");
                    i = -1;
                    n1 = ' ';
                    n2 = ' ';
                    n3 = ' ';
                    n4 = ' ';
                    n5 = ' ';
                    n6 = ' ';
                    n7 = ' ';
                    n8 = ' ';
                    n9 = ' ';
                }

                else if (n == '1')
                {
                    if (n1 == ' ')
                        n1 = 'O';
                    else if (n1 != ' ')
                        i--;
                }

                else if (n == '2')
                {
                    if (n2 == ' ')
                        n2 = 'O';
                    else if (n2 != ' ')
                        i--;
                }

                else if (n == '3')
                {
                    if (n3 == ' ')
                        n3 = 'O';
                    else if (n3 != ' ')
                        i--;
                }

                else if (n == '4')
                {
                    if (n4 == ' ')
                        n4 = 'O';
                    else if (n4 != ' ')
                        i--;
                }

                else if (n == '5')
                {
                    if (n5 == ' ')
                        n5 = 'O';
                    else if (n5 != ' ')
                        i--;
                }

                else if (n == '6')
                {
                    if (n6 == ' ')
                        n6 = 'O';
                    else if (n6 != ' ')
                        i--;
                }

                else if (n == '7')
                {
                    if (n7 == ' ')
                        n7 = 'O';
                    else if (n7 != ' ')
                        i--;
                }

                else if (n == '8')
                {
                    if (n8 == ' ')
                        n8 = 'O';
                    else if (n8 != ' ')
                        i--;
                }

                else if (n == '9')
                {
                    if (n9 == ' ')
                        n9 = 'O';
                    else if (n9 != ' ')
                        i--;
                }

                else if (n > '9' or n < '1')
                {
                    cout << "adad jadval az 1 ta 9 hsatan" << endl
                         << "_R_ baraye shoroe mojadad bazi"
                         << endl
                         << "_E_ baraye etmame bazi" << endl
                         << endl;
                    i--;
                }

                system("cls");

                cout << endl
                     << "PRESS M: Back to top menu" << endl
                     << "PRESS R: Restart game" << endl
                     << "PRESS E:  Exit" << endl
                     << endl;

                cout << "-------------" << endl;
                cout << "| " << n1 << " "
                     << "| " << n2 << " | " << n3 << " |" << endl;
                cout << "-------------" << endl;
                cout << "| " << n4 << " "
                     << "| " << n5 << " | " << n6 << " |" << endl;
                cout << "-------------" << endl;
                cout << "| " << n7 << " "
                     << "| " << n8 << " | " << n9 << " |" << endl;
                cout << "-------------" << endl;

                cout << endl;

                if (n1 == 'O' && n2 == 'O' && n3 == 'O')
                {
                    cout << "* win";
                    break;
                }
                else if (n1 == 'O' && n4 == 'O' && n7 == 'O')
                {
                    cout << "O win";
                    break;
                }
                else if (n2 == 'O' && n5 == 'O' && n8 == 'O')
                {
                    cout << "O win";
                    break;
                }
                else if (n3 == 'O' && n6 == 'O' && n9 == 'O')
                {
                    cout << "O win";
                    break;
                }
                else if (n4 == 'O' && n5 == 'O' && n6 == 'O')
                {
                    cout << "O win";
                    break;
                }
                else if (n7 == 'O' && n8 == 'O' && n9 == 'O')
                {
                    cout << "O win";
                    break;
                }
                else if (n1 == 'O' && n5 == 'O' && n9 == 'O')
                {
                    cout << "O win";
                    break;
                }
                else if (n3 == 'O' && n5 == 'O' && n7 == 'O')
                {
                    cout << "O win";
                    break;
                }

                cout << endl;

                if (i == 0 && n5 == ' ')
                {
                    n5 = 'X';
                    i++;
                }

                if (i == 0 && n5 != ' ')
                {

                    srand(time(NULL));

                    int m[4] = {'1', '3', '7', '9'};

                    int RandIndex = rand() % 3;

                    n = char(m[RandIndex]);

                    if (n == '1')
                    {
                        n1 = 'X';
                        i++;
                    }
                    if (n == '3')
                    {
                        n3 = 'X';
                        i++;
                    }
                    if (n == '7')
                    {
                        n7 = 'X';
                        i++;
                    }
                    if (n == '9')
                    {
                        n9 = 'X';
                        i++;
                    }
                }

                if (i > 1 && i % 2 == 0 && i < 8)
                {

                    if (n1 == 'X' && n2 == 'X' && n3 == ' ')
                    {
                        n3 = 'X';
                        i++;
                    }
                    else if (n1 == ' ' && n2 == 'X' && n3 == 'X')
                    {
                        n1 = 'X';
                        i++;
                    }
                    else if (n1 == 'X' && n2 == ' ' && n3 == 'X')
                    {
                        i++;
                        n2 = 'X';
                    }

                    else if (n1 == 'X' && n5 == 'X' && n9 == ' ')
                    {
                        i++;
                        n9 = 'X';
                    }
                    else if (n1 == ' ' && n5 == 'X' && n9 == 'X')
                    {
                        i++;
                        n1 = 'X';
                    }

                    else if (n3 == 'X' && n5 == 'X' && n7 == ' ')
                    {
                        i++;
                        n7 = 'X';
                    }
                    else if (n3 == ' ' && n5 == 'X' && n7 == 'X')
                    {
                        i++;
                        n3 = 'X';
                    }

                    else if (n4 == 'X' && n5 == 'X' && n6 == ' ')
                    {
                        i++;
                        n6 = 'X';
                    }
                    else if (n4 == ' ' && n5 == 'X' && n6 == 'X')
                    {
                        i++;
                        n4 = 'X';
                    }

                    else if (n7 == 'X' && n8 == 'X' && n9 == ' ')
                    {
                        i++;
                        n9 = 'X';
                    }
                    else if (n7 == 'X' && n8 == ' ' && n9 == 'X')
                    {
                        n8 = 'X';
                        i++;
                    }
                    else if (n7 == ' ' && n8 == 'X' && n9 == 'X')
                    {
                        n7 = 'X';
                        i++;
                    }

                    else if (n1 == 'X' && n4 == 'X' && n7 == ' ')
                    {
                        n7 = 'X';
                        i++;
                    }
                    else if (n1 == 'X' && n4 == ' ' && n7 == 'X')
                    {
                        i++;
                        n4 = 'X';
                    }
                    else if (n1 == ' ' && n4 == 'X' && n7 == 'X')
                    {
                        i++;
                        n1 = 'X';
                    }

                    else if (n2 == 'X' && n5 == 'X' && n8 == ' ')
                    {
                        i++;
                        n8 = 'X';
                    }
                    else if (n2 == ' ' && n5 == 'X' && n8 == 'X')
                    {
                        i++;
                        n2 = 'X';
                    }

                    else if (n3 == 'X' && n6 == 'X' && n9 == ' ')
                    {
                        i++;
                        n9 = 'X';
                    }
                    else if (n3 == ' ' && n6 == 'X' && n9 == 'X')
                    {
                        i++;
                        n3 = 'X';
                    }
                    else if (n3 == 'X' && n6 == ' ' && n9 == 'X')
                    {
                        i++;
                        n6 = 'X';
                    }

                    else if (n1 == 'O' && n2 == 'O' && n3 == ' ')
                    {
                        n3 = 'X';
                        i++;
                    }
                    else if (n1 == ' ' && n2 == 'O' && n3 == 'O')
                    {
                        n1 = 'X';
                        i++;
                    }
                    else if (n1 == 'O' && n2 == ' ' && n3 == 'O')
                    {
                        i++;
                        n2 = 'X';
                    }

                    else if (n1 == 'O' && n5 == 'O' && n9 == ' ')
                    {
                        i++;
                        n9 = 'X';
                    }
                    else if (n1 == ' ' && n5 == 'O' && n9 == 'O')
                    {
                        i++;
                        n1 = 'X';
                    }

                    else if (n3 == 'O' && n5 == 'O' && n7 == ' ')
                    {
                        i++;
                        n7 = 'X';
                    }
                    else if (n3 == ' ' && n5 == 'O' && n7 == 'O')
                    {
                        i++;
                        n3 = 'X';
                    }

                    else if (n4 == 'O' && n5 == 'O' && n6 == ' ')
                    {
                        i++;
                        n6 = 'X';
                    }
                    else if (n4 == ' ' && n5 == 'O' && n6 == 'O')
                    {
                        i++;
                        n4 = 'X';
                    }

                    else if (n7 == 'O' && n8 == 'O' && n9 == ' ')
                    {
                        i++;
                        n9 = 'X';
                    }
                    else if (n7 == 'O' && n8 == ' ' && n9 == 'O')
                    {
                        n8 = 'X';
                        i++;
                    }
                    else if (n7 == ' ' && n8 == 'O' && n9 == 'O')
                    {
                        n7 = 'X';
                        i++;
                    }

                    else if (n1 == 'O' && n4 == 'O' && n7 == ' ')
                    {
                        n7 = 'X';
                        i++;
                    }
                    else if (n1 == 'O' && n4 == ' ' && n7 == 'O')
                    {
                        i++;
                        n4 = 'X';
                    }
                    else if (n1 == ' ' && n4 == 'O' && n7 == 'O')
                    {
                        i++;
                        n1 = 'X';
                    }

                    else if (n2 == 'O' && n5 == 'O' && n8 == ' ')
                    {
                        i++;
                        n8 = 'X';
                    }
                    else if (n2 == ' ' && n5 == 'O' && n8 == 'O')
                    {
                        i++;
                        n2 = 'X';
                    }

                    else if (n3 == 'O' && n6 == 'O' && n9 == ' ')
                    {
                        i++;
                        n9 = 'X';
                    }
                    else if (n3 == ' ' && n6 == 'O' && n9 == 'O')
                    {
                        i++;
                        n3 = 'X';
                    }
                    else if (n3 == 'O' && n6 == ' ' && n9 == 'O')
                    {
                        i++;
                        n6 = 'X';
                    }

                    else
                    {
                        int h = 51;

                        while (h == 51)
                        {
                            srand(time(NULL));

                            int m[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

                            int RandIndex = rand() % 8;

                            n = char(m[RandIndex]);

                            if (n == '1' && n1 == ' ')
                            {
                                n1 = 'X';
                                i++;
                                h = 52;
                            }
                            else if (n == '2' && n2 == ' ')
                            {
                                n2 = 'X';
                                i++;
                                h = 52;
                            }
                            else if (n == '3' && n3 == ' ')
                            {
                                n3 = 'X';
                                i++;
                                h = 52;
                            }
                            else if (n == '4' && n4 == ' ')
                            {
                                n4 = 'X';
                                i++;
                                h = 52;
                            }
                            else if (n == '5' && n5 == ' ')
                            {
                                n5 = 'X';
                                i++;
                                h = 52;
                            }
                            else if (n == '6' && n6 == ' ')
                            {
                                n6 = 'X';
                                i++;
                                h = 52;
                            }
                            else if (n == '7' && n7 == ' ')
                            {
                                n7 = 'X';
                                i++;
                                h = 52;
                            }
                            else if (n == '8' && n8 == ' ')
                            {
                                n8 = 'X';
                                i++;
                                h = 52;
                            }
                            else if (n == '9' && n9 == ' ')
                            {
                                n9 = 'X';
                                i++;
                                h = 52;
                            }
                        }
                    }
                }

                system("cls");
                cout << endl
                     << "PRESS M: Back to top menu" << endl
                     << "PRESS R: Restart game" << endl
                     << "PRESS E:  Exit" << endl
                     << endl;

                cout << "-------------" << endl;
                cout << "| " << n1 << " "
                     << "| " << n2 << " | " << n3 << " |" << endl;
                cout << "-------------" << endl;
                cout << "| " << n4 << " "
                     << "| " << n5 << " | " << n6 << " |" << endl;
                cout << "-------------" << endl;
                cout << "| " << n7 << " "
                     << "| " << n8 << " | " << n9 << " |" << endl;
                cout << "-------------" << endl;

                cout << endl;

                if (n1 == 'X' && n2 == 'X' && n3 == 'X')
                {
                    cout << "X win";
                    break;
                }
                else if (n1 == 'X' && n4 == 'X' && n7 == 'X')
                {
                    cout << "X win";
                    break;
                }
                else if (n2 == 'X' && n5 == 'X' && n8 == 'X')
                {
                    cout << "X win";
                    break;
                }
                else if (n3 == 'X' && n6 == 'X' && n9 == 'X')
                {
                    cout << "X win";
                    break;
                }
                else if (n4 == 'X' && n5 == 'X' && n6 == 'X')
                {
                    cout << "X win";
                    break;
                }
                else if (n7 == 'X' && n8 == 'X' && n9 == 'X')
                {
                    cout << "X win";
                    break;
                }
                else if (n1 == 'X' && n5 == 'X' && n9 == 'X')
                {
                    cout << "X win";
                    break;
                }
                else if (n3 == 'X' && n5 == 'X' && n7 == 'X')
                {
                    cout << "X win";
                    break;
                }

                else if (i == 8)
                    cout << "draw";
                cout << endl;
            }
        }
    }
    return 0;
}