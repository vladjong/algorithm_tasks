/*
На вход подается n - длина и вектор;
Нужно найти max длину отрезка без повторяющих элементов;

Пример:
8
3 1 2 3 4 1 5 6
---------------
6
*/

#include <algorithm>
#include <iostream>
#include <vector>

int getMaxLen(const std::vector<int>& arr);
int findIndex(const std::vector<int>& arr, int item, int point);
int max(int sumVector, int result);

int main() {
    int len = 0;
    std::cin >> len;
    std::vector<int> arr;
    for (int i = 0; i < len; i++) {
        int num = 0;
        std::cin >> num;
        arr.push_back(num);
    }
    int result = getMaxLen(arr);
    std::cout << result;
}

int getMaxLen(const std::vector<int>& arr) {
    int result = 0;
    int sumVector = 0;
    std::vector<int> vec;
    int point = 0;
    for (int i = 0; i < arr.size(); i++) {
        vec.push_back(arr[i]);
        int count = std::count(vec.begin(), vec.end(), arr[i]);
        if (count > 1) {
            i = findIndex(vec, arr[i], point);
            point = i + 1;
            result = max(sumVector, result);
            sumVector = 0;
            std::vector<int>().swap(vec);
        } else {
            sumVector++;
        }
    }
    result = max(sumVector, result);
    return result;
}

int max(int sumVector, int result) {
    if (sumVector > result) {
        result = sumVector;
    }
    return result;
}

int findIndex(const std::vector<int>& arr, int item, int point) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == item) {
            return i + point;
        }
    }
    return -1;
}
