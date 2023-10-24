#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <hw05.h>



VecOfStr hw05(const VecOfStr& strings) {
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

    VecOfStr out{};

    for (const std::string& str : strings) {
        if (isPalindrome(str)) {
            out.push_back(str);
        }
    }

    // std::vector<std::string> input1 = {"madam", "radar", "anagram", "rotor"};
    // std::cout << "Test 1 Results: ";
    // for (const std::string& str : input1) {
    //     if (isPalindrome(str)) {
    //         std::cout << str << " ";
    //     }
    // }
    // std::cout << std::endl;

    // std::vector<std::string> input2 = {"Madam, in Eden, I'm Adam"};
    // std::cout << "Test 2 Results: ";
    // for (const std::string& str : input2) {
    //     if (isPalindrome(str)) {
    //         std::cout << str << " ";
    //     }
    // }
    // std::cout << std::endl;

    // std::vector<std::string> input3 = {"Red roses run no risk, sir, on Nurse's order"};
    // std::cout << "Test 3 Results: ";
    // for (const std::string& str : input3) {
    //     if (isPalindrome(str)) {
    //         std::cout << str << " ";
    //     }
    // }
    // std::cout << std::endl;

    // std::vector<std::string> input4 = {"Won't lovers revolt now?"};
    // std::cout << "Test 4 Results: ";
    // for (const std::string& str : input4) {
    //     if (isPalindrome(str)) {
    //         std::cout << str << " ";
    //     }
    // }
    // std::cout << std::endl;

    // std::vector<std::string> input5 = {"A man, a plan, a canal, Panama!", "SIMPLETEXT"};
    // std::cout << "Test 5 Results: ";
    // for (const std::string& str : input5) {
    //     if (isPalindrome(str)) {
    //         std::cout << str << " ";
    //     }
    // }
    // std::cout << std::endl;

    // std::vector<std::string> input6 = {"racecar", "deified", "level", "hello"};
    // std::cout << "Test 6 Results: ";
    // for (const std::string& str : input6) {
    //     if (isPalindrome(str)) {
    //         std::cout << str << " ";
    //     }
    // }
    // std::cout << std::endl;

    // std::vector<std::string> input7 = {"A man, a plan, a canal, Panama!", "SIMPLETEXT", "Was it a car or a cat I saw?"};
    // std::cout << "Test 7 Results: ";
    // for (const std::string& str : input7) {
    //     if (isPalindrome(str)) {
    //         std::cout << str << " ";
    //     }
    // }
    // std::cout << std::endl;

    // std::vector<std::string> input8 = {"Evil is a name of a foeman, as I live."};
    // std::cout << "Test 8 Results: ";
    // for (const std::string& str : input8) {
    //     if (isPalindrome(str)) {
    //         std::cout << str << " ";
    //     }
    // }
    // std::cout << std::endl;

    // std::vector<std::string> input9 = {"A Toyota's a Toyota.", "No lemon, no melon", "Step on no pets"};
    // std::cout << "Test 9 Results: ";
    // for (const std::string& str : input9) {
    //     if (isPalindrome(str)) {
    //         std::cout << str << " ";
    //     }
    // }
    // std::cout << std::endl;

    // std::vector<std::string> input10 = {"A nut for a jar of tuna.", "Yo, Banana Boy!"};
    // std::cout << "Test 10 Results: ";
    // for (const std::string& str : input10) {
    //     if (isPalindrome(str)) {
    //         std::cout << str << " ";
    //     }
    // }
    // std::cout << std::endl;

    return out;
}