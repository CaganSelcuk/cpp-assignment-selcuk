#include <iostream>
#include <vector>
#include <string>

bool isPalindrome(const std::string& str) {
    std::string cleanedStr;
    for (const char& c : str) {
        if (std::isalpha(c)) {
            cleanedStr.push_back(std::tolower(c));
        }
    }

    std::string reversedStr(cleanedStr.rbegin(), cleanedStr.rend());
    return cleanedStr == reversedStr;
}

std::vector<std::string> hw05(const std::vector<std::string>& strings) {
    std::vector<std::string> palindromes;
    for (const std::string& str : strings) {
        if (isPalindrome(str)) {
            palindromes.push_back(str);
        }
    }
    return palindromes;
}

int main() {
    std::vector<std::string> input1 = {"madam", "radar", "anagram", "rotor"};
    std::vector<std::string> result1 = hw05(input1);
    for (const std::string& str : result1) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    std::vector<std::string> input2 = {"Madam, in Eden, I'm Adam"};
    std::vector<std::string> result2 = hw05(input2);
    for (const std::string& str : result2) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    std::vector<std::string> input3 = {"A man, a plan, a canal, Panama!", "SIMPLETEXT"};
    std::vector<std::string> result3 = hw05(input3);
    for (const std::string& str : result3) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    std::vector<std::string> input4 = {};
    std::vector<std::string> result4 = hw05(input4);
    for (const std::string& str : result4) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    std::vector<std::string> input5 = {"apple", "banana", "cherry"};
    std::vector<std::string> result5 = hw05(input5);
    for (const std::string& str : result5) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    std::vector<std::string> input6 = {"racecar", "deified", "level", "hello"};
    std::vector<std::string> result6 = hw05(input6);
    for (const std::string& str : result6) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    std::vector<std::string> input7 = {"A man, a plan, a canal, Panama!", "SIMPLETEXT", "Was it a car or a cat I saw?"};
    std::vector<std::string> result7 = hw05(input7);
    for (const std::string& str : result7) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    std::vector<std::string> input8 = {"Evil is a name of a foeman, as I live."};
    std::vector<std::string> result8 = hw05(input8);
    for (const std::string& str : result8) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    std::vector<std::string> input9 = {"A Toyota's a Toyota.", "No lemon, no melon", "Step on no pets"};
    std::vector<std::string> result9 = hw05(input9);
    for (const std::string& str : result9) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    std::vector<std::string> input10 = {"A nut for a jar of tuna.", "Yo, Banana Boy!"};
    std::vector<std::string> result10 = hw05(input10);
    for (const std::string& str : result10) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}