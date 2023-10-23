#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int main() {
    auto isPalindrome = [](const std::string& str) {
        std::string cleanedStr;
        for (const char& c : str) {
            if (std::isalpha(c)) {
                cleanedStr.push_back(std::tolower(c));
            }
        }

        int left = 0;
        int right = cleanedStr.length() - 1;

        while (left < right) {
            if (cleanedStr[left] != cleanedStr[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    };

    // Test 1
    std::vector<std::string> input1 = {"madam", "radar", "anagram", "rotor"};
    std::vector<std::string> result1;
    for (const std::string& str : input1) {
        if (isPalindrome(str)) {
            result1.push_back(str);
        }
    }
    std::cout << "Test 1 Results: ";
    for (const std::string& str : result1) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    // Test 2
    std::vector<std::string> input2 = {"Madam, in Eden, I'm Adam"};
    std::vector<std::string> result2;
    for (const std::string& str : input2) {
        if (isPalindrome(str)) {
            result2.push_back(str);
        }
    }
    std::cout << "Test 2 Results: ";
    for (const std::string& str : result2) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    // Test 3
    std::vector<std::string> input3 = {"Red roses run no risk, sir, on Nurse's order"};
    std::vector<std::string> result3;
    for (const std::string& str : input3) {
        if (isPalindrome(str)) {
            result3.push_back(str);
        }
    }
    std::cout << "Test 3 Results: ";
    for (const std::string& str : result3) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    // Test 4
    std::vector<std::string> input4 = {"Won't lovers revolt now?"};
    std::vector<std::string> result4;
    for (const std::string& str : input4) {
        if (isPalindrome(str)) {
            result4.push_back(str);
        }
    }
    std::cout << "Test 4 Results: ";
    for (const std::string& str : result4) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    // Test 5
    std::vector<std::string> input5 = {"A man, a plan, a canal, Panama!", "SIMPLETEXT"};
    std::vector<std::string> result5;
    for (const std::string& str : input5) {
        if (isPalindrome(str)) {
            result5.push_back(str);
        }
    }
    std::cout << "Test 5 Results: ";
    for (const std::string& str : result5) {
        std::cout << str << " ";
    }
    
    // Test 6
    std::vector<std::string> input6 = {"racecar", "deified", "level", "hello"};
    std::vector<std::string> result6;
    for (const std::string& str : input6) {
        if (isPalindrome(str)) {
            result6.push_back(str);
        }
    }
    std::cout << "Test 6 Results: ";
    for (const std::string& str : result6) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    // Test 7
    std::vector<std::string> input7 = {"A man, a plan, a canal, Panama!", "SIMPLETEXT", "Was it a car or a cat I saw?"};
    std::vector<std::string> result7;
    for (const std::string& str : input7) {
        if (isPalindrome(str)) {
            result7.push_back(str);
        }
    }
    std::cout << "Test 7 Results: ";
    for (const std::string& str : result7) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    // Test 8
    std::vector<std::string> input8 = {"Evil is a name of a foeman, as I live."};
    std::vector<std::string> result8;
    for (const std::string& str : input8) {
        if (isPalindrome(str)) {
            result8.push_back(str);
        }
    }
    std::cout << "Test 8 Results: ";
    for (const std::string& str : result8) {
        std::cout << str << " ";
    }
    std::cout << std::endl; 
    // Test 9
    std::vector<std::string> input9 = {"A Toyota's a Toyota.", "No lemon, no melon", "Step on no pets"};
    std::vector<std::string> result9;
    for (const std::string& str : input9) {
        if (isPalindrome(str)) {
            result9.push_back(str);
        }
    }
    std::cout << "Test 9 Results: ";
    for (const std::string& str : result9) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    
    std::vector<std::string> input10 = {"A nut for a jar of tuna.", "Yo, Banana Boy!"};
    std::vector<std::string> result10;
    for (const std::string& str : input10) {
        if (isPalindrome(str)) {
            result10.push_back(str);
        }
    }
    std::cout << "Test 10 Results: ";
    for (const std::string& str : result10) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}