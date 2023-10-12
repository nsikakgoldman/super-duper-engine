#include <iostream>
using std::cout;
//working with string
using std::cin;

#include <string>
using std::string;

#include <vector>
using std::vector;
using std::begin;
using std::end;

#include <algorithm>
using std::sort;
using std::count;

#include "Functions.h"

#include "Account.h"

//function pointers
#include <cstdio>

//int addition(int a, int b) {return (a + b);}
//int subtraction(int a, int b) {return (a - b);}
typedef int (*operation)(int a, int b);
//#define ARRAYSIZE 5
//
//#define SQ(a) (a)*(a)

int main() {
// function pointers
//    int numbers[ARRAYSIZE] = {200, 600, 123, 456, 789};
//    int twentyfive = SQ(ARRAYSIZE);
//
//    int total = 0;
//    operation op = addition;
//    for (int n = 0; n < ARRAYSIZE; n++)
//    {
//        total = op(total, numbers[n]);
//    }
//    printf("Array total: %d \n", total);
//    printf("\n\n");
//
//    op = subtraction;
//    total = op(total, numbers[ARRAYSIZE - 1]);
//    printf("Array total without last element: %d \n", total);
//    printf("\n\n");
//
//    const char* greeting = "Hello";
//    printf("string: %s", greeting);
//    printf("\n\n");
//    printf("character: %c", greeting[0]);
//    printf("\n\n");
//    printf("pointer: %p", greeting);
//    printf("\n\n");
//    printf("hex: 0x08%x\n", greeting);
//    printf("\n\n");
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
//    cout << "Enter the first word ";
//    cin >> word1;
//    cout << "enter the second word ";
//    cin >> word2;
//    if (word1.length() > word2.length())
//    {
//        cout<< "word1 is greater than word2";
//    } else {
//        cout << "word2 is greater than word1";
//    }

//    collections
//    vector<int> nums;
//    for (int i= 0; i < 10; i++)
//    {
//        nums.push_back(i);
//    }
//
//    for(auto item : nums){
//        cout << item << "";
//    }
//    cout << '\n';
//    vector<string> words;
//
//    cout << "enter three words " << '\n';
//    for (int i = 0; i < 3; i++)
//    {
//        string s;
//        cin >> s;
//        words.push_back(s);
//    }
//
//    for(auto item: words)
//    {
//        cout << item << " ";
//    }
//    cout << '\n';
    // operator overloading
//    += == << >> ::
//classes
//    Account a1;
//    a1.Deposite(90);
//    cout << "After depositing $90 " <<
//    "balance is $"<< a1.GetBalance() << '\n';
//    for (auto s : a1.Report())
//    {
//        cout << s << '\n';
//    }
//
//    a1.Withdraw(50);
//    if (a1.Withdraw(100))
//    {
//        cout << "Second withdraw succeeds" << '\n';
//    }
//    cout << "After withdrawing $50 then $100" << '\n';
//    for (auto s : a1.Report())
//    {
//        cout << s << '\n';
//    }
//    pointer
/**
    int a = 3;
    printf("a is %i \n", a);
    int& rA = a;
    rA = 5;
    printf("a is %i \n", a);

    Person Kate("Georgegoldman", "John", 234);
    Person& rKate = Kate;
    rKate.SetNumber(345);
    printf("rKate: %s %i", rKate.GetName(), rKate.GetNumber())
    **/
//      const
    /**int i = 3;
    int const ci = 3;
    i = 4;

    int& ri = i;
    ri = 5;

    // the const precedence will disable the mutation of cri
    int const & cri = i;

    int j = 10;
     **/
    return 0;

}
