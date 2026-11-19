#include <iostream>

using namespace std;

int main() {
    const int PRICE = 25;
    const int MAX_QTY = 30;
    int quantity = 0;
    int choice;

    do {
        cout << "\nМеню заказа:\n";
        cout << "1 - добавить одну единицу товара\n";
        cout << "2 - убрать одну единицу товара\n";
        cout << "3 - показать текущее количество и стоимость\n";
        cout << "0 - завершить\n";
        cout << "Ваш выбор: ";
        cin >> choice;

        if (choice == 1) {
            if (quantity >= MAX_QTY) {
                cout << "Предупреждение: достигнут максимум (30). Данные не изменены.\n";
            }
            else {
                quantity++;
            }
        }
        else if (choice == 2) {
            if (quantity <= 0) {
                cout << "Предупреждение: количество не может быть меньше 0. Данные не изменены.\n";
            }
            else {
                quantity--;
            }
        }
        else if (choice == 3) {
            cout << "Текущее количество: " << quantity << endl;
            cout << "Текущая стоимость: " << quantity * PRICE << endl;
        }
        else if (choice == 0) {
            cout << "Завершение работы...\n";
        }
        else {
            cout << "Неверный ввод, попробуйте снова.\n";
        }

    } while (choice != 0);

    cout << "Итоговая стоимость заказа: " << quantity * PRICE << endl;

    return 0;
}