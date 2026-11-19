#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cout << "Введите количество заказов (1..20): ";
    cin >> n;

    double total_revenue = 0;
    double max_sum = -1;
    int max_order_index = -1;

    for (int i = 1; i <= n; ++i) {
        int price, quantity;
        cout << "Заказ " << i << ". Введите цену единицы (1..1000) и количество (1..20): ";
        cin >> price >> quantity;

        double sum = static_cast<double>(price) * quantity;

        // Применяем скидку 10%, если сумма >= 500
        if (sum >= 500) {
            sum *= 0.9;
        }

        cout << "Сумма заказа после скидки: " << sum << endl;

        total_revenue += sum;

        // При равенстве выбираем первый, поэтому используем строгое ">"
        if (sum > max_sum) {
            max_sum = sum;
            max_order_index = i;
        }
    }

    cout << "\n--- Итоги ---\n";
    cout << "Итоговая выручка: " << total_revenue << endl;
    cout << "Номер самого дорогого заказа: " << max_order_index << endl;

    return 0;
}