#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main() {
    const std::string charset = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const int length = 10;

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    std::string result;
    result.reserve(length);
    for (int i = 0; i < length; ++i) {
        result += charset[std::rand() % charset.size()];
    }

    std::cout << result << std::endl;
    return 0;
}
