#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(1251);
    int way;
    const float n = 3.785;
    float L;
    float G;
    do {
        system("cls");
        cout << " Оберіть напрям конвертації: \n Переведення з літрів у галони - 0\n Переведення з галонів у літри - 1\n Вихід з програми - 2 :";
        cin >> way;
        switch (way)
        {
        case 0:
        {
            cout << " Введіть значення (у літрах): ";
            cin >> L;
            float result1 = L / n;
            cout << " Значення ваших літрів у галонах: " << result1;
            break;
        }
        case 1:
        {
            cout << " Введіть значення (у галонах США): ";
            cin >> G;
            float result2 = G * n;
            cout << " Значення ваших галонів у літрах: " << result2;
            break;
        }
        case 2:
        {
            cout << " До побачення. Дякую, що скористалися цим конвертером! /(^w^)/ ";
            break;
        }
        default: {
            cout << " Введено неправильне значення. Дотримуйтесь інструкцій!";
        }
        }
        cout << endl << endl;
        system("pause");
    } while (way != 2);
    return 0;
}

