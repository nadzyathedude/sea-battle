#include <iostream>
#include <ctime>
using namespace std;
void create_auto(int arr[10][10])
{
    int a;
    int poz_i;
    int poz_j;
    int kol;
    int side;
    int ship;
    for (a = 1; a < 5; a++)
    {
        switch (a)
        {
        case 4://4х палубный
            side = rand() % 2;
            if (side == 0)
            {
                do
                {
                    kol = 0;
                    poz_i = rand() % 10;
                    poz_j = rand() % 10;
                    if (poz_j < 7 && arr[poz_i][poz_j] == 0 && arr[poz_i][poz_j + 1] == 0 && arr[poz_i][poz_j + 2] == 0 && arr[poz_i][poz_j + 3] == 0 && poz_j < 7)
                        for (int i = 0; i < 4; i++)
                        {
                            arr[poz_i][poz_j + i] = 1;
                            kol++;
                        }
                } while (kol < 4);
                if (kol == 4)
                {
                    for (int l = 0; l < 10; l++)
                    {
                        for (int k = 0; k < 10; k++)
                        {
                            if (arr[l][k] == 1 && arr[l - 1][k + 1] == 0 && k < 9)
                                arr[l - 1][k + 1] = 2;
                            if (arr[l][k] == 1 && arr[l - 1][k - 1] == 0 && k - 1 >= 0)
                                arr[l - 1][k - 1] = 2;
                            if (arr[l][k] == 1 && arr[l + 1][k - 1] == 0 && k - 1 >= 0)
                                arr[l + 1][k - 1] = 2;
                            if (arr[l][k] == 1 && arr[l + 1][k + 1] == 0 && k + 1 < 9)
                                arr[l + 1][k + 1] = 2;
                            if (arr[l][k] == 1 && arr[l][k - 1] == 0 && k - 1 >= 0)
                                arr[l][k - 1] = 2;
                            if (arr[l][k] == 1 && arr[l - 1][k] == 0)
                                arr[l - 1][k] = 2;
                            if (arr[l][k] == 1 && arr[l + 1][k] == 0)
                                arr[l + 1][k] = 2;
                            if (arr[l][k] == 1 && arr[l][k + 1] == 0 && k < 9)
                                arr[l][k + 1] = 2;
                        }
                    }
                }
            }
            else
            {

                do
                {
                    kol = 0;
                    poz_i = rand() % 10;
                    poz_j = rand() % 10;
                    if (poz_i < 7 && arr[poz_i][poz_j] == 0 && arr[poz_i + 1][poz_j] == 0 && arr[poz_i + 2][poz_j] == 0 && arr[poz_i + 3][poz_j] == 0)
                        for (int i = 0; i < 4; i++)
                        {
                            arr[poz_i + i][poz_j] = 1;
                            kol++;
                        }
                } while (kol < 4);
                if (kol == 4)
                {
                    for (int l = 0; l < 10; l++)
                    {
                        for (int k = 0; k < 10; k++)
                        {
                            if (arr[l][k] == 1 && arr[l - 1][k + 1] == 0 && k < 9)
                                arr[l - 1][k + 1] = 2;
                            if (arr[l][k] == 1 && arr[l - 1][k - 1] == 0 && k - 1 >= 0)
                                arr[l - 1][k - 1] = 2;
                            if (arr[l][k] == 1 && arr[l + 1][k - 1] == 0 && k - 1 >= 0)
                                arr[l + 1][k - 1] = 2;
                            if (arr[l][k] == 1 && arr[l + 1][k + 1] == 0 && k + 1 < 9)
                                arr[l + 1][k + 1] = 2;
                            if (arr[l][k] == 1 && arr[l][k - 1] == 0 && k - 1 >= 0)
                                arr[l][k - 1] = 2;
                            if (arr[l][k] == 1 && arr[l - 1][k] == 0)
                                arr[l - 1][k] = 2;
                            if (arr[l][k] == 1 && arr[l + 1][k] == 0)
                                arr[l + 1][k] = 2;
                            if (arr[l][k] == 1 && arr[l][k + 1] == 0 && k < 9)
                                arr[l][k + 1] = 2;
                        }
                    }
                }
            }
            break;
        case 3://3х палубный
            ship = 0;
            do
            {
                side = rand() % 2;
                if (side == 0)
                {
                    do
                    {
                        kol = 0;
                        poz_i = rand() % 10;
                        poz_j = rand() % 10;
                        if (arr[poz_i][poz_j] == 0 && arr[poz_i][poz_j + 1] == 0 && arr[poz_i][poz_j + 2] == 0 && poz_j < 8)
                            for (int i = 0; i < 3; i++)
                            {
                                arr[poz_i][poz_j + i] = 1;
                                kol++;
                            }
                    } while (kol > 3);
                    if (kol == 3)
                        ship++;
                    if (kol == 3)
                    {
                        for (int l = 0; l < 10; l++)
                        {
                            for (int k = 0; k < 10; k++)
                            {
                                if (arr[l][k] == 1 && arr[l - 1][k + 1] == 0 && k < 9)
                                    arr[l - 1][k + 1] = 2;
                                if (arr[l][k] == 1 && arr[l - 1][k - 1] == 0 && k - 1 >= 0)
                                    arr[l - 1][k - 1] = 2;
                                if (arr[l][k] == 1 && arr[l + 1][k - 1] == 0 && k - 1 >= 0)
                                    arr[l + 1][k - 1] = 2;
                                if (arr[l][k] == 1 && arr[l + 1][k + 1] == 0 && k + 1 < 9)
                                    arr[l + 1][k + 1] = 2;
                                if (arr[l][k] == 1 && arr[l][k - 1] == 0 && k - 1 >= 0)
                                    arr[l][k - 1] = 2;
                                if (arr[l][k] == 1 && arr[l - 1][k] == 0)
                                    arr[l - 1][k] = 2;
                                if (arr[l][k] == 1 && arr[l + 1][k] == 0)
                                    arr[l + 1][k] = 2;
                                if (arr[l][k] == 1 && arr[l][k + 1] == 0 && k < 9)
                                    arr[l][k + 1] = 2;
                            }
                        }
                    }
                }
                else
                {
                    do
                    {
                        kol = 0;
                        poz_i = rand() % 10;
                        poz_j = rand() % 10;
                        if (arr[poz_i][poz_j] == 0 && arr[poz_i + 1][poz_j] == 0 && arr[poz_i + 2][poz_j] == 0)
                            for (int i = 0; i < 3; i++)
                            {
                                arr[poz_i + i][poz_j] = 1;
                                kol++;
                            }
                    } while (kol > 3);
                    if (kol == 3)
                        ship++;
                    if (kol == 3)
                    {
                        for (int l = 0; l < 10; l++)
                        {
                            for (int k = 0; k < 10; k++)
                            {
                                if (arr[l][k] == 1 && arr[l - 1][k + 1] == 0 && k < 9)
                                    arr[l - 1][k + 1] = 2;
                                if (arr[l][k] == 1 && arr[l - 1][k - 1] == 0 && k - 1 >= 0)
                                    arr[l - 1][k - 1] = 2;
                                if (arr[l][k] == 1 && arr[l + 1][k - 1] == 0 && k - 1 >= 0)
                                    arr[l + 1][k - 1] = 2;
                                if (arr[l][k] == 1 && arr[l + 1][k + 1] == 0 && k + 1 < 9)
                                    arr[l + 1][k + 1] = 2;
                                if (arr[l][k] == 1 && arr[l][k - 1] == 0 && k - 1 >= 0)
                                    arr[l][k - 1] = 2;
                                if (arr[l][k] == 1 && arr[l - 1][k] == 0)
                                    arr[l - 1][k] = 2;
                                if (arr[l][k] == 1 && arr[l + 1][k] == 0)
                                    arr[l + 1][k] = 2;
                                if (arr[l][k] == 1 && arr[l][k + 1] == 0 && k < 9)
                                    arr[l][k + 1] = 2;
                            }
                        }
                    }
                }
            } while (ship < 2);
            break;
        case 2: //2х палубныйы
            ship = 0;
            do
            {
                side = rand() % 2;
                if (side == 0)
                {
                    do
                    {
                        kol = 0;
                        poz_i = rand() % 10;
                        poz_j = rand() % 10;
                        if (arr[poz_i][poz_j] == 0 && arr[poz_i][poz_j + 1] == 0 && poz_j < 9)
                            for (int i = 0; i < 2; i++)
                            {
                                arr[poz_i][poz_j + i] = 1;
                                kol++;
                            }
                    } while (kol > 2);
                    if (kol == 2)
                        ship++;
                    if (kol == 2)
                        for (int l = 0; l < 10; l++)
                        {
                            for (int k = 0; k < 10; k++)
                            {
                                if (arr[l][k] == 1 && arr[l - 1][k + 1] == 0 && k < 9)
                                    arr[l - 1][k + 1] = 2;
                                if (arr[l][k] == 1 && arr[l - 1][k - 1] == 0 && k - 1 >= 0)
                                    arr[l - 1][k - 1] = 2;
                                if (arr[l][k] == 1 && arr[l + 1][k - 1] == 0 && k - 1 >= 0)
                                    arr[l + 1][k - 1] = 2;
                                if (arr[l][k] == 1 && arr[l + 1][k + 1] == 0 && k + 1 < 9)
                                    arr[l + 1][k + 1] = 2;
                                if (arr[l][k] == 1 && arr[l][k - 1] == 0 && k - 1 >= 0)
                                    arr[l][k - 1] = 2;
                                if (arr[l][k] == 1 && arr[l - 1][k] == 0)
                                    arr[l - 1][k] = 2;
                                if (arr[l][k] == 1 && arr[l + 1][k] == 0)
                                    arr[l + 1][k] = 2;
                                if (arr[l][k] == 1 && arr[l][k + 1] == 0 && k < 9)
                                    arr[l][k + 1] = 2;
                            }
                        }
                }
                else
                {
                    do
                    {
                        kol = 0;
                        poz_i = rand() % 10;
                        poz_j = rand() % 10;
                        if (arr[poz_i][poz_j] == 0 && arr[poz_i + 1][poz_j] == 0)
                            for (int i = 0; i < 2; i++)
                            {
                                arr[poz_i + i][poz_j] = 1;
                                kol++;
                            }
                    } while (kol > 2);
                    if (kol == 2)
                        ship++;
                    if (kol == 2)
                        for (int l = 0; l < 10; l++)
                        {
                            for (int k = 0; k < 10; k++)
                            {
                                if (arr[l][k] == 1 && arr[l - 1][k + 1] == 0 && k < 9)
                                    arr[l - 1][k + 1] = 2;
                                if (arr[l][k] == 1 && arr[l - 1][k - 1] == 0 && k - 1 >= 0)
                                    arr[l - 1][k - 1] = 2;
                                if (arr[l][k] == 1 && arr[l + 1][k - 1] == 0 && k - 1 >= 0)
                                    arr[l + 1][k - 1] = 2;
                                if (arr[l][k] == 1 && arr[l + 1][k + 1] == 0 && k + 1 < 9)
                                    arr[l + 1][k + 1] = 2;
                                if (arr[l][k] == 1 && arr[l][k - 1] == 0 && k - 1 >= 0)
                                    arr[l][k - 1] = 2;
                                if (arr[l][k] == 1 && arr[l - 1][k] == 0)
                                    arr[l - 1][k] = 2;
                                if (arr[l][k] == 1 && arr[l + 1][k] == 0)
                                    arr[l + 1][k] = 2;
                                if (arr[l][k] == 1 && arr[l][k + 1] == 0 && k < 9)
                                    arr[l][k + 1] = 2;
                            }
                        }
                }
            } while (ship < 3);
            break;
        case 1: //1 палубный 
            ship = 0;
            do
            {
                do
                {
                    kol = 0;
                    poz_i = rand() % 10;
                    poz_j = rand() % 10;
                    if (arr[poz_i][poz_j] == 0)
                    {
                        arr[poz_i][poz_j] = 1;
                        kol++;
                    }
                } while (kol > 1);
                if (kol == 1)
                    ship++;
                if (kol == 1)
                    for (int l = 0; l < 10; l++)
                    {
                        for (int k = 0; k < 10; k++)
                        {
                            if (arr[l][k] == 1 && arr[l - 1][k + 1] == 0 && k < 9)
                                arr[l - 1][k + 1] = 2;
                            if (arr[l][k] == 1 && arr[l - 1][k - 1] == 0 && k - 1 >= 0)
                                arr[l - 1][k - 1] = 2;
                            if (arr[l][k] == 1 && arr[l + 1][k - 1] == 0 && k - 1 >= 0)
                                arr[l + 1][k - 1] = 2;
                            if (arr[l][k] == 1 && arr[l + 1][k + 1] == 0 && k + 1 < 9)
                                arr[l + 1][k + 1] = 2;
                            if (arr[l][k] == 1 && arr[l][k - 1] == 0 && k - 1 >= 0)
                                arr[l][k - 1] = 2;
                            if (arr[l][k] == 1 && arr[l - 1][k] == 0)
                                arr[l - 1][k] = 2;
                            if (arr[l][k] == 1 && arr[l + 1][k] == 0)
                                arr[l + 1][k] = 2;
                            if (arr[l][k] == 1 && arr[l][k + 1] == 0 && k < 9)
                                arr[l][k + 1] = 2;
                        }
                    }
            } while (ship < 4);
            break;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr[i][j] == 2)
                arr[i][j] = 0;
        }
    }
}
void visual(int arr[10][10], char arr1[10][10])
{
    int arr_num[10];
    for (int l = 0; l < 10; l++)
    {
        arr_num[l] = l;
        cout << arr_num[l] << " ";
    }
    cout << endl << endl;
    for (int l = 0; l < 10; l++)
    {
        for (int k = 0; k < 10; k++)
        {
            if (arr[l][k] == 1)
                arr1[l][k] = '+';
            if (arr[l][k] == 3)
                arr1[l][k] = '*';
            if (arr[l][k] == 4)
                arr1[l][k] = 'X';
            if (arr[l][k] == 5)
                arr1[l][k] = '.';
            if (arr[l][k] == 0 || arr[l][k] == 2)
                arr1[l][k] = 'o';
            cout << arr1[l][k] << " ";
        }
        cout << "  " << l << endl;
    }
}
void visual_CPU(int arr[10][10], char arr1[10][10])
{
    int arr_num[10];
    for (int l = 0; l < 10; l++)
    {
        arr_num[l] = l;
        cout << arr_num[l] << " ";
    }
    cout << endl << endl;
    for (int l = 0; l < 10; l++)
    {
        for (int k = 0; k < 10; k++)
        {
            if (arr[l][k] == 1)
                arr1[l][k] = 'o';
            if (arr[l][k] == 3)
                arr1[l][k] = '*';
            if (arr[l][k] == 4)
                arr1[l][k] = 'X';
            if (arr[l][k] == 5)
                arr1[l][k] = '.';
            if (arr[l][k] == 0 || arr[l][k] == 2)
                arr1[l][k] = 'o';
            cout << arr1[l][k] << " ";
        }
        cout << "  " << l << endl;
    }
}
void shot_cpu(int arr[10][10])
{
    int a = 0;
    int side;
    int poz_i;
    int poz_j;
    int kol = 0;
    int b = 0;
    for (int l = 0; l < 10; l++)
    {
        for (int k = 0; k < 10; k++)
        {
            if (arr[l][k] == 3 && arr[l][k + 1] == 3)
                a = 1;
            if (arr[l][k] == 3 && arr[l + 1][k] == 3)
                a = 2;
            if (arr[l][k] == 3 && arr[l + 1][k] != 3 && arr[l - 1][k] != 3 && arr[l][k + 1] != 3 && arr[l][k - 1] != 3)
                a = 3;
        }
    }
    switch (a)
    {
    case 3://первый выстрел после попадания
        for (int l = 0; l < 10; l++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (arr[l][k] == 3 && arr[l][k + 1] != 2 && k + 1 < 10 && arr[l][k + 1] != 5)
                {
                    b = 1;
                    poz_i = l;
                    poz_j = k;
                }
                if (arr[l][k] == 3 && arr[l][k - 1] != 2 && k - 1 < 10 && arr[l][k - 1] != 5)
                {
                    b = 2;
                    poz_i = l;
                    poz_j = k;
                }
                if (arr[l][k] == 3 && arr[l - 1][k] != 2 && l - 1 >= 0 && arr[l - 1][k] != 5)
                {
                    b = 3;
                    poz_i = l;
                    poz_j = k;
                }
                if (arr[l][k] == 3 && arr[l + 1][k] != 2 && l + 1 < 10 && arr[l + 1][k] != 5)
                {
                    b = 4;
                    poz_i = l;
                    poz_j = k;
                }

            }
        }
        cout << "схема выстрела " << b << endl;
        switch (b)
        {
        case 1:
            if (arr[poz_i][poz_j + 1] == 1)
            {
                arr[poz_i][poz_j + 1] = 3;
                cout << endl << poz_i << " " << poz_j + 1 << "Попал!" << endl;
            }
            else
            {
                arr[poz_i][poz_j + 1] = 5;
                cout << endl << poz_i << " " << poz_j + 1 << "Мимо!" << endl;
            }
            break;
        case 2:
            if (arr[poz_i][poz_j - 1] == 1)
            {
                arr[poz_i][poz_j - 1] = 3;
                cout << endl << poz_i << " " << poz_j - 1 << "Попал!" << endl;
            }
            else
            {
                arr[poz_i][poz_j - 1] = 5;
                cout << endl << poz_i << " " << poz_j - 1 << "Мимо!" << endl;
            }
            break;
        case 3:
            if (arr[poz_i - 1][poz_j] == 1)
            {
                arr[poz_i - 1][poz_j] = 3;
                cout << endl << poz_i - 1 << " " << poz_j << "Попал!" << endl;
            }

            else
            {
                arr[poz_i - 1][poz_j] = 5;
                cout << endl << poz_i - 1 << " " << poz_j << "Мимо!" << endl;
            }
            break;
        case 4:
            if (arr[poz_i + 1][poz_j] == 1)
            {
                arr[poz_i + 1][poz_j] = 3;
                cout << endl << poz_i + 1 << " " << poz_j << "Попал!" << endl;
            }

            else
            {
                arr[poz_i + 1][poz_j] = 5;
                cout << endl << poz_i + 1 << " " << poz_j << "Мимо!" << endl;
            }
            break;
        }

        break;
    case 1://горизонтальный выстрел
        for (int l = 0; l < 10; l++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (arr[l][k] == 3 && arr[l][k + 1] != 3 && arr[l][k + 1] != 2 && k + 1 < 10 && arr[l][k + 1] != 5)
                {
                    if (arr[l][k + 1] == 1)
                    {
                        arr[l][k + 1] = 3;
                        cout << endl << l  << " " << k + 1 << "Попал!" << endl;
                    }
                    else
                    {
                        arr[l][k + 1] = 5;
                        cout << endl << l << " " << k+1 << "Мимо!" << endl;
                    }
                    break;
                }
                if (arr[l][k] == 3 && arr[l][k - 1] != 3 && arr[l][k - 1] != 2 && k - 1 >= 0 && arr[l][k - 1] != 5)
                {
                    if (arr[l][k - 1] == 1)
                    {
                        arr[l][k - 1] = 3;
                        cout << endl << l<< " " << k - 1  << "Попал!" << endl;
                    }
                    else
                    {
                        arr[l][k - 1] = 5;
                        cout << endl << l << " " << k-1 << "Мимо!" << endl;
                    }
                    break;
                }
            }
        }
        break;
    case 2://вертикальный выстрел
        for (int l = 0; l < 10; l++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (arr[l][k] == 3 && arr[l + 1][k] != 3 && arr[l + 1][k] != 2 && l + 1 < 10 && arr[l + 1][k] != 5)
                {
                    if (arr[l + 1][k] == 1)
                    {
                        arr[l + 1][k] = 3;
                        cout << endl << l + 1 << " " << k << "Попал!" << endl;
                    }
                    else
                    {
                        arr[l + 1][k] = 5;
                        cout << endl << l+1 << " " << k << "Мимо!" << endl;
                    }
                    break;
                }
                if (arr[l][k] == 3 && arr[l - 1][k] != 3 && arr[l - 1][k] != 2 && l - 1 >= 0 && arr[l - 1][k] != 5)
                {
                    if (arr[l - 1][k] == 1)
                    {
                        arr[l - 1][k] = 3;
                        cout << endl << l - 1 << " " << k << "Попал!" << endl;
                    }
                    else
                    {
                        arr[l - 1][k] = 5;
                        cout << endl << l-1 << " " << k << "Мимо!" << endl;
                    }
                    break;
                }
            }
        }
        break;
    case 0: //рандомный выстрел
        do
        {
            poz_i = rand() % 10;
            poz_j = rand() % 10;
            if (arr[poz_i][poz_j] == 0)
            {
                arr[poz_i][poz_j] = 5;
                cout << "Мимо!" << endl;
            }
            if (arr[poz_i][poz_j] == 1)
            {
                arr[poz_i][poz_j] = 3;
                cout << "Ранил!" << endl;
            }
        } while (arr[poz_i][poz_j] != 3 && arr[poz_i][poz_j] != 5);
        cout << endl << poz_i << " " << poz_j << endl;
        break;

    }
}
void kill(int arr[10][10])
{
    int chek = 0;
    for (int l = 0; l < 10; l++)
    {
        for (int k = 0; k < 10; k++)
        {
            if (arr[l][k] == 3 && arr[l][k + 1] != 1 && arr[l][k - 1] != 1 && arr[l + 1][k] != 1 && arr[l - 1][k] != 1
                && arr[l][k + 1] != 3 && arr[l][k - 1] != 3 && arr[l + 1][k] != 3 && arr[l - 1][k] != 3)
            {

                if (arr[l][k] == 3 && arr[l - 1][k + 1] == 0 && k < 9)
                    arr[l - 1][k + 1] = 2;
                if (arr[l][k] == 3 && arr[l - 1][k - 1] == 0 && k - 1 >= 0)
                    arr[l - 1][k - 1] = 2;
                if (arr[l][k] == 3 && arr[l + 1][k - 1] == 0 && k - 1 >= 0)
                    arr[l + 1][k - 1] = 2;
                if (arr[l][k] == 3 && arr[l + 1][k + 1] == 0 && k + 1 < 9)
                    arr[l + 1][k + 1] = 2;
                if (arr[l][k] == 3 && arr[l][k - 1] == 0 && k - 1 >= 0)
                    arr[l][k - 1] = 2;
                if (arr[l][k] == 3 && arr[l - 1][k] == 0)
                    arr[l - 1][k] = 2;
                if (arr[l][k] == 3 && arr[l + 1][k] == 0)
                    arr[l + 1][k] = 2;
                if (arr[l][k] == 3 && arr[l][k + 1] == 0 && k < 9)
                    arr[l][k + 1] = 2;
                arr[l][k] = 4;
                cout << endl << "Убил!" << endl;
            }
            if (arr[l][k] == 3 && (arr[l][k + 1] == 3 || arr[l + 1][k] == 3))
                chek++;
            if (arr[l][k] == 3 && (arr[l][k + 1] == 1 || arr[l][k - 1] == 1 || arr[l + 1][k] == 1 || arr[l - 1][k] == 1))
            {
                chek = 0;
                break;
            }

        }
    }
    if (chek > 0)
    {
        for (int l = 0; l < 10; l++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (arr[l][k] == 3 && arr[l - 1][k + 1] == 0 && k < 9)
                    arr[l - 1][k + 1] = 2;
                if (arr[l][k] == 3 && arr[l - 1][k - 1] == 0 && k - 1 >= 0)
                    arr[l - 1][k - 1] = 2;
                if (arr[l][k] == 3 && arr[l + 1][k - 1] == 0 && k - 1 >= 0)
                    arr[l + 1][k - 1] = 2;
                if (arr[l][k] == 3 && arr[l + 1][k + 1] == 0 && k + 1 < 9)
                    arr[l + 1][k + 1] = 2;
                if (arr[l][k] == 3 && arr[l][k - 1] == 0 && k - 1 >= 0)
                    arr[l][k - 1] = 2;
                if (arr[l][k] == 3 && arr[l - 1][k] == 0)
                    arr[l - 1][k] = 2;
                if (arr[l][k] == 3 && arr[l + 1][k] == 0)
                    arr[l + 1][k] = 2;
                if (arr[l][k] == 3 && arr[l][k + 1] == 0 && k < 9)
                    arr[l][k + 1] = 2;
                if (arr[l][k] == 3)
                    arr[l][k] = 4;
            }
        }
        cout << endl << "Убил!" << endl;
    }
}
int chek_vin(int arr[10][10])
{
    int chek = -0;
    for (int l = 0; l < 10; l++)

        for (int k = 0; k < 10; k++)
            if (arr[l][k] == 3 || arr[l][k] == 1)
                chek++;
    if (chek > 0)
        return -1;
    else
        return 1;
}
void shot_human(int arr[10][10])
{
    int poz_i;
    int poz_j;
    cout << "Стреляй!";

    do
    {
        cout << "\nвертикаль -> ";
        cin >> poz_j;
    } while (poz_j < 0 || poz_j > 9);

    

    do
    {
        cout << "\nГоризонталь -> ";
        cin >> poz_i;
    } while (poz_j < 0 || poz_j > 9);

    if (arr[poz_i][poz_j] == 1)
    {
        arr[poz_i][poz_j] = 3;
        cout << "\nПопал!\n";
    }
    else
    {
        arr[poz_i][poz_j] = 5;
        cout << "\nМимо!\n";
    }
}



int main()

{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int a = 0;
    int cpu[10][10] = { 0 };
    int human[10][10] = { 0 };
    char cpu_v[10][10] = { 0 };
    char human_v[10][10] = { 0 };
    create_auto(cpu);
    create_auto(human);
    for (;;)
    {
        cout << "CPU" << endl;
        visual_CPU(cpu, cpu_v);
       // cout << endl << "HUMAN" << endl;
        //visual(human, human_v);
        shot_cpu(human);
        cout << endl << "HUMAN" << endl;
        kill(human);
        visual(human, human_v);
        a = chek_vin(human);
        if (a == 1)
        {
            cout << "Победа моя, Кожанный мешок!!!";
            break;
        }
        shot_human(cpu);
        kill(cpu);
        a = chek_vin(cpu);
        if (a == 1)
        {
            cout << "Ты победил!!!";
            break;
        }
    }
}