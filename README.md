# Weather Prediction

## Project Overview
This project aims to predict weather conditions (temperature, humidity, precipitation) using historical weather data. Machine learning techniques will be applied to forecast future weather conditions, helping in weather monitoring and planning.

## Installation Instructions
1. Clone the repository:
    ```bash
    git clone https://github.com/your-username/weather-prediction.git
    cd weather-prediction-cpp
    ```

2. Install dependencies (if any). For C++, we might need libraries like Eigen for linear algebra, and a compiler like `g++`.

## Usage Guidelines
1. **Data Preparation:**
    - Download the dataset from [Kaggle](https://www.kaggle.com).
    - Place the dataset in the `data` folder.

2. **Build the Project:**
    ```bash
    g++ -o weather_prediction main.cpp preprocess.cpp train.cpp evaluate.cpp -I/path/to/eigen
    ```

3. **Run the Project:**
    ```bash
    ./weather_prediction
    ```

## Contribution Guidelines
We welcome contributions to improve the project. Here are some ways you can contribute:
1. Report bugs or suggest features by creating an issue.
2. Fork the repository and make changes in your fork.
3. Create a pull request with a detailed description of the changes.

### Steps to Contribute:
1. Fork the repository.
2. Create a new branch:
    ```bash
    git checkout -b feature/your-feature-name
    ```
3. Commit your changes:
    ```bash
    git commit -m "Description of the feature"
    ```
4. Push to the branch:
    ```bash
    git push origin feature/your-feature-name
    ```
5. Create a pull request.

---

## d. Implement Software Testing Techniques

### Unit Testing
Create a file named `test_preprocess.cpp`:

```cpp
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
