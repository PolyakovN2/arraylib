# arraylib

Кроссплатформенная динамическая библиотека операций над массивами `int`.

## Функции
arr_sum, arr_max, arr_min, arr_average, arr_count_positive, arr_count_negative, arr_count_zero, arr_product, arr_median.

## Сборка и тесты
    cmake -S . -B build
    cmake --build build -j
    cd build && ctest --output-on-failure

## Примеры
- `build/app` — демонстрация библиотеки.
- `build/variant_01`, `build/variant_17` — прикладные задачи по варианту.