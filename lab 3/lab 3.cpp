#include <iostream>
#include <string>

using namespace std;

class Account {
public:
    double interestRate = 2.5;
};

class Deposit : public Account
{
public:
    string openingDate = "01.01.2020";
    string period = "01.01.2020 - 01.01.2025";
    int sum = 10000;
    int printInfoDeposit() 
    {
        cout << "Iнформацiя про депозитний рахунок:" << endl;
        cout << "Ставка - " << interestRate << endl;
        cout << "Дата початку - " << openingDate << endl;
        cout << "Перiод - " << period << endl;
        cout << "Сума - " << sum << endl << endl <<endl;
        return 0;
    }
};

class Debit : public Account
{
public:
    string lastOperationData = "01.01.2021";
    int balance = 5000;
    int printInfoDebit()
    {
        cout << "Iнформацiя про дебетовий рахунок:" << endl;
        cout << "Ставка - " << interestRate << endl;
        cout << "Дата останньої операцiї - " << lastOperationData << endl;
        cout << "Баланс - " << balance << endl;
        return 0;
    }
};

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    Deposit PrivatBank;
    Debit MonoBank;
    PrivatBank.printInfoDeposit();
    MonoBank.printInfoDebit();
}

