#include "arraylib.h"

#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
    int receipts[] = {850, 1240, 430, 2190, 760, 1580, 990, 3100};
    const std::size_t n = sizeof(receipts) / sizeof(receipts[0]);

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Чеки (" << n << " шт.):\n";
    for (std::size_t i = 0; i < n; ++i) {
        std::cout << receipts[i] << (i + 1 < n ? ' ' : '\n');
    }

    std::cout << "Общая сумма покупок: " << arr_sum(receipts, n) << '\n';
    std::cout << "Самый дорогой чек:   " << arr_max(receipts, n) << '\n';
    std::cout << "Самый дешёвый чек:   " << arr_min(receipts, n) << '\n';
    std::cout << "Средняя сумма чека:  " << arr_average(receipts, n) << '\n';
    std::cout << "Медиана чеков:       " << arr_median(receipts, n) << '\n';
    return 0;
}