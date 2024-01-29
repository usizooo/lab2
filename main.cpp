#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    float a = 0;
    float b = 0;
    
    do{
        cout << "Выберите операцию:\n";
        cout << "1.Сложение\n";
        cout << "2.Вычитание\n";
        cout << "3.Умножение\n";
        cout << "4.Делние\n";
        cout << "5.Возведение в степень\n";
        cout << "6.Квадратный корень\n";
        cout << "7.Один процент от числа\n";
        cout << "8.Факториал числа\n";
        cout << "9.Выйти из программы\n";
        
        cout << "Введите номер операции";
        cin >> choice;
        
        switch (choice){
            case 1:
                cout << "Введите первое число: ";
                cin >> a;
                cout << "Введите второе число: ";
                cin >> b;
                cout << "Результат: " << a + b << endl;
                break;
            case 2:
                cout << "Введите первое число: ";
                cin >> a;
                cout << "Введите второе число: ";
                cin >> b;
                cout << "Результат: " << a - b << endl;
                break;
            case 3:
                cout << "Введите первое число: ";
                cin >> a;
                cout << "Введите второе число: ";
                cin >> b;
                cout << "Результат: " << a * b << endl;
                break;
            case 4:
                cout << "Введите первое число: ";
                cin >> a;
                cout << "Введите второе число: ";
                cin >> b;
                if (b != 0) {
                    cout << "Результат: " << a / b << endl;
                } else {
                    cout << "Ошибка: деление на ноль!" << endl;
                }
                break;
            case 5:
                cout << "Введите первое число: ";
                cin >> a;
                cout << "Введите второе число: ";
                cin >> b;
                cout << "Результат: " << pow(a, b) << endl;
                break;
            case 6:
                cout << "Введите число для извлечение квадратного корня: ";
                cin >> a;
                if (a >= 0){
                    cout << "Результат: " << sqrt(a) << endl;
                } else {
                    cout << "Ошибка: извлечение корн из отрицательного числа";
                }
                break;
            case 7:
                cout << "Введите число: ";
                cin >> a;
                cout << "Один процент от числа: " << a * 0.01 << endl;
                break;
            case 8:
                cout << "Введите число для вычисления факториала: ";
                cin >> a;
                if (a >= 0) {
                    int res = 1;
                    for (int i = 1; i <= a; ++i) {
                        res *=i;
                    }
                    cout << "Факториал числа: " << res << endl;
                } else {
                    cout << "Ошибка: нельзя вычислить факториал отрицательного числа!" << endl;
                }
                break;
            case 9:
                cout << "Программа завершена" << endl;
                break;
            default:
                cout << "Ошибка: некорректный выбор операции" << endl;
        }
    }while (choice !=9);
    
    return 0;
}
