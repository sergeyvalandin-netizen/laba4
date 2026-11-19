#include <iostream>
#include <climits>

using namespace std;

int main() {
    int purchase;
    int count = 0;

    // Инициализируем максимумы минимально возможным значением
    int max1 = INT_MIN;
    int max2 = INT_MIN;

    cout << "Вводите суммы покупок (0 для завершения):\n";

    while (cin >> purchase && purchase != 0) {
        // Отрицательные суммы пропускаем
        if (purchase < 0) {
            continue;
        }

        count++;

        // Обновляем два максимума
        if (purchase >= max1) {
            max2 = max1;
            max1 = purchase;
        }
        else if (purchase > max2) {
            max2 = purchase;
        }
    }

    cout << "\n--- Результаты ---\n";
    cout << "Число принятых покупок: " << count << endl;

    if (count < 2) {
        cout << "Недостаточно данных" << endl;
    }
    else {
        cout << "Две наибольшие покупки: " << max1 << " и " << max2 << endl;
    }

    return 0;
}