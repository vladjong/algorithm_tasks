/*
На вход подается n - длина и вектор;
Нужно развернуть вектор без использования дополнительной памяти;

Пример:
5
1 2 3 4 5
---------------
5 4 3 2 1
*/

#include <iostream>
#include <vector>

void reverse(std::vector<int>& vec);

int main() {
    int count = 0;
    std::cin >> count;
    std::vector<int> vec;
    for (int i = 0; i < count; i++) {
        int number = 0;
        std::cin >> number;
        vec.push_back(number);
    }
    reverse(vec);
    for (auto i : vec) {
        std::cout << i << " ";
    }
}

void reverse(std::vector<int>& vec) {
    int left = 0;
    int right = vec.size() - 1;
    while (left < right) {
        std::swap(vec[left], vec[right]);
        left++;
        right--;
    }
}
