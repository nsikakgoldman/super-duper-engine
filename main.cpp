#include <iostream>
using std::cout;
//working with string
using std::cin;

#include <string>
using std::string;

#include "Functions.h"

int main() {
//    int total = add(3, 4);
//    cout << "3 + 4 is "<< total << '\n';

//    auto totalofthree = add(1.1, 2.2, 3.3);
//    cout << "1.1 + 2.2 + 3.3 = "<< totalofthree << '\n';
// working with string
//    string name;
//    cout << "who are you? ";
//    cin >> name;
//    string greeting = "Hello, "+ name;
//    if (name == "goldman")
//    {
//        greeting += ", I know you!";
//    }
//    cout << greeting << '\n';
//    unsigned int l = greeting.length();
//    cout << "\"" + greeting + "\" is " << l << " characters long." << '\n';
//    string beginning = greeting.substr(greeting.find(' ') + 1);
//    cout << beginning << '\n';
//    if (beginning == name)
//    {
//        cout<<"expected result."<<'\n';
//    }
//    return 0;
    string word1, word2;
    cout << "Enter the first word ";
    cin >> word1;
    cout << "enter the second word ";
    cin >> word2;
    if (word1.length() > word2.length())
    {
        cout<< "word1 is greater than word2";
    } else {
        cout << "word2 is greater than word1";
    }

}
