// CGT-113-Lab-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> strVector;
    strVector.push_back({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });
    std::vector<std::string> stringVector;
    stringVector.push_back({ 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' });
    std::string text;
    std::cout << "Input text into the cypher: ";
    getline(std::cin, text);
    std::string statement;
    char test = ' ';
    std::vector<int> positions;

    for (size_t i = 0; i < text.length(); i++)
    {
        if (text[i] >= 97 && text[i] <= 122) {
            text[i] -= 32;
            positions.push_back(i);
        }
    }

    
    
    for (size_t i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            statement += " ";
        }
        else {
            for (size_t j = 0; j < 25; j++) {
                if (text[i] == stringVector[0][j]) {
                    statement += strVector[0][j];
                }
                
            }
        }
    }

    for (size_t i = 0; i < positions.size(); i++) {

        statement[positions[i]] += 32;

    }



   std::cout << statement;
    
}

