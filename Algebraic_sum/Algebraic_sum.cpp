#include <iostream>
#include <string>
#include <regex>
#include <cmath>


//Найти алгебраическую сумму для выражения : 1k + 2k + 3k + … + Nk.N и степень k вводит пользователь.

int inputInt(std::string);

int main()
{
    setlocale(LC_ALL, "ru");
    int N = inputInt("Введите N: "), k = inputInt("Введите степень k: "),rez = 0;
    for (int i = 0; i < N; i++) {
        rez += pow(i + 1,k);
    }
    std::cout << "Сумма: " << rez;
    return 0;
}

int inputInt(std::string textReq = "Enter an integer number") { // textReq текстовый запрос у пользователя
    std::string number;
    std::regex reg("^[0-9]"); //регулярное выражение
    while (true)
    {
        std::cout << textReq << std::endl;
        std::cin >> number;
        if (std::regex_search(number, reg)) {
            return stoi(number); //преобразование string в int. С++ 11
        }
    }
}