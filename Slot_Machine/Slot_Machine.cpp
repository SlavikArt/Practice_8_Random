#include <iostream>

using namespace std;

int myRandom(int min, int max) {
    int k = max - min + 1;
    return rand() % k + min;
}

int main()
{
    setlocale(0, "rus");
    srand(time(0));
    rand();

    const int SIZE = 5;
    
    int arr[SIZE] = { 111, 222, 333, 444, 555 };

    bool isInArray;

    bool isZeroSixSeven;

    cout << "Приветствую в слот машине\n\n";



    while (true)
    {
        isInArray = false;
        isZeroSixSeven = false;

        int num1 = myRandom(0, 7);
        int num2 = myRandom(0, 7);
        int num3 = myRandom(0, 7);

        if (num1 == 0 && num2 == 0 && num3 == 0)
        {
            isZeroSixSeven = true;
            cout << "000\n";
            cout << "Вы выиграли 1000 грн!\n\n";
        }
        else if (num1 == 6 && num2 == 6 && num3 == 6)
        {
            isZeroSixSeven = true;
            cout << "666\n";
            cout << "Штраф 1000 грн!\n\n";
        }
        else if (num1 == 7 && num2 == 7 && num3 == 7)
        {
            isZeroSixSeven = true;
            cout << "777\n";
            cout << "ДЖЕКПОТ!!!\n\n";
        }

        if (num1 == 0 || num2 == 0 || num3 == 0)
        {
            cout << num1 << num2 << num3 << "\n";
            cout << "Ничего.\n\n";
        }
        else {
            num1 *= 100;
            num2 *= 10;

            int sum = num1 + num2 + num3;

            for (int i = 0; i < SIZE; i++)
            {
                if (sum == arr[i])
                {
                    isInArray = true;
                    cout << sum << "\n";
                    cout << "Вы выиграли 1000 грн!\n\n";
                }
            }

            if (!isInArray && !isZeroSixSeven)
            {
                cout << sum << "\n";
                cout << "Ничего.\n\n";
            }
        }
        
        system("pause");
        system("cls");
    }
}