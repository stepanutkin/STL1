#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

int main()
{
    std::string text = "Hello, World! ";
    std::map<char, int> charFrequency;

    for (char c : text)
    {
        if (std::isalnum(c) || std::ispunct(c) || std::isspace(c)) // проверка на символы, цифры и знаки препинания
        {
            charFrequency[c]++;
        }
    }

    // Сортировка по убыванию частоты
    std::vector<std::pair<char, int>> sortedChars(charFrequency.begin(), charFrequency.end());
    std::sort(sortedChars.begin(), sortedChars.end(), [](const std::pair<char, int>& a, const std::pair<char, int>& b) {
        return a.second > b.second;
        });

    // Вывод результатов
    for (const auto& pair : sortedChars)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}