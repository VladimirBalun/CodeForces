#include <iostream>
#include <string>

bool is_vowel(char symbol)
{
    return symbol == 'A' || symbol == 'E' || symbol == 'I' ||
           symbol == 'O' || symbol == 'U' || symbol == 'Y';
}

int main()
{
    std::string input;
    std::cin >> input;

    size_t distance = 0u;
    size_t max_distance = 0u;
    for (const char symbol : input) {
        if (!is_vowel(symbol))
            max_distance = std::max(max_distance, ++distance);
        else
            distance = 0u;
    }

    std::cout << max_distance + 1 << std::endl;
    return EXIT_SUCCESS;
}