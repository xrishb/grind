#include <iostream>
#include <string>

int main() {
    // String declaration and initialization
    std::string str1 = "Hello";
    std::string str2("world");
    std::string str3(5, 'x');

    // String concatenation
    std::string result = str1 + " " + str2;
    str1.append(" ").append(str2);

    // String comparison
    if (str1 == str2) {
        std::cout << "Strings are equal" << std::endl;
    }
    if (str1.compare(str2) == 0) {
        std::cout << "Strings are equal" << std::endl;
    }

    // Accessing characters
    char ch = str1[0];
    char ch2 = str1.at(1);

    // String length
    int len = str1.size();
    int len2 = str2.length();

    // Substring
    std::string substr = str1.substr(1, 3); // Extract substring starting from index 1 of length 3

    // Finding substrings
    size_t pos = str1.find("lo"); // Find the first occurrence of "lo"
    size_t pos2 = str2.rfind("ld"); // Find the last occurrence of "ld"

    // Output results
    std::cout << "Result of concatenation: " << result << std::endl;
    std::cout << "First character of str1: " << ch << std::endl;
    std::cout << "Second character of str1: " << ch2 << std::endl;
    std::cout << "Length of str1: " << len << std::endl;
    std::cout << "Substring of str1: " << substr << std::endl;
    std::cout << "Position of 'lo' in str1: " << pos << std::endl;
    std::cout << "Last position of 'ld' in str2: " << pos2 << std::endl;

    return 0;
}
