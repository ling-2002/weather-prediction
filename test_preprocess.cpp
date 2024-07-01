#include <iostream>
#include <cassert>
#include "preprocess.h"

void test_preprocess_data() {
    std::vector<std::vector<double>> data = {{1, 2}, {3, 4}};
    std::vector<std::vector<double>> expected = {{0.5, 1}, {1.5, 2}};
    auto result = preprocess_data(data);
    assert(result == expected);
    std::cout << "test_preprocess_data passed!" << std::endl;
}

int main() {
    test_preprocess_data();
    return 0;
}
