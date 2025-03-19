#include <iostream>

using namespace std;

int main() {
    int arr[10]; // масив для введення 10 чисел
    bool isPal = true;

    // Вводимо елементи масиву з консолі
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Перевірка на паліндром
    for (int i = 0; i < 5; i++) {
        if (arr[i] != arr[10 - 1 - i]) {
            isPal = false;
            break;
        }
    }

    // Виведення результату
    if (isPal) {
        cout << "The array is a palindrome" << endl;
    }
    else {
        cout << "The array is not a palindrome" << endl;
    }

    return 0;
}
