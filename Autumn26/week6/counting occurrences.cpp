#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main () {

    int count;

    std::ifstream text;
    text.open("text.txt");

    std::ifstream chosen_words;
    chosen_words.open("words.txt");

    std::string temp;
    std::vector<std::string> wordsintext;

    while (text >> temp) {
        wordsintext.push_back(temp);
    }
    temp = "";
    std::vector<std::string> chosenwords;
    while (chosen_words >> temp) {
        chosenwords.push_back(temp);
    }
    
    text.close();
    chosen_words.close();

    std::ofstream output;
    std::cout << "Enter the name of the output file: " << std::endl;
    std::cin >> temp;
    output.open(temp);


    for (int i = 0; i < chosenwords.size(); i++) {
        count = 0;
        for (int j = 0; j < wordsintext.size(); j++) {
            if (chosenwords[i] == wordsintext[j]) {
                count++;
            }
        }
        std::cout << chosenwords[i] << ": " << count << std::endl;
        output << chosenwords[i] << ": " << count << std::endl;
    }
    output.close();
}