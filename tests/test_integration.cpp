#include "arraylib.h"

#include <cassert>
#include <cmath>
#include <cstddef>
#include <iostream>

static bool close(double a, double b, double eps = 1e-9) {
    return std::fabs(a - b) < eps;
}

int main() {
    int data[] = {7, 3, 9, 1, 5, 8, 2, 6, 4};
    const std::size_t n = sizeof(data) / sizeof(data[0]);

    // Сумма и максимум согласованы
    assert(arr_sum(data, n) == 45);
    assert(arr_max(data, n) == 9);

    // Среднее лежит между min и max и равно sum / n
    double avg = arr_average(data, n);
    assert(avg >= arr_min(data, n));
    assert(avg <= arr_max(data, n));
    assert(close(avg, static_cast<double>(arr_sum(data, n)) / n));

    // Счётчики в сумме дают n
    int pos = arr_count_positive(data, n);
    int neg = arr_count_negative(data, n);
    int zero = arr_count_zero(data, n);
    assert(static_cast<std::size_t>(pos + neg + zero) == n);

    // Медиана отсортированного массива и медиана той же выборки
    int sorted[] = {1, 2, 3, 4, 5, 6, 7};
    assert(close(arr_median(sorted, 7), 4.0));
    assert(close(arr_median(data, n), 5.0));

    std::cout << "[integration] All tests passed\n";
    return 0;
}