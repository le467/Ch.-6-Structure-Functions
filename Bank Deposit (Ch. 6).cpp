// Bank Deposit (Ch. 6).cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

struct bank_account
{
    int account_number;
    int balance;
};

void deposit_money(bank_account &account_ref, int desposit_amount)
{
    account_ref.balance = desposit_amount + account_ref.balance;
    cout << " Balance inside fuction (reference) " << account_ref.balance << endl;
}

int main()
{
    bank_account account_main;
    int deposit_amount;

    cin >> account_main.account_number;
    cin >> account_main.balance;
    cin >> deposit_amount;

    cout << " Balance before call (main): " << account_main.balance << endl;

    deposit_money(account_main, deposit_amount);
    cout << " Balance after call (main): " << account_main.balance << endl;

    return 0;
}

