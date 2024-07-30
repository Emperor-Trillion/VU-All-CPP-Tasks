#include<string>
#include<iostream>

int main() {
    std::string str = " Hello World  !";
    std::erase(str, ' ');
    std::cout << "|" << str <<"|";
}