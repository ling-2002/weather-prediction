#include <iostream>
#include <cassert>
#include "preprocess.h"
#include "train.h"
#include "evaluate.h"

void test_full_pipeline() {
    std::vector<std::vector<double>> data = {{1, 2}, {3, 4}};
    auto preprocessed_data = preprocess_data(data);
    
    auto model = train_model(preprocessed_data);
    double accuracy = evaluate_model(model, preprocessed_data);
    
    assert(accuracy > 0.5);
    std::cout << "test_full_pipeline passed!" << std::endl;
}

int main() {
    test_full_pipeline();
    return 0;
}
