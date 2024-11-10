#include <iostream>
using namespace std;
class Account
{
private:
    double balance;
    double intrestRate;

public:
    Account(double initialBalance, double initialIntrestRate)
    {
        balance = initialBalance;
        intrestRate = initialIntrestRate;
    }
    double getBalance() const
    {
        return balance;
    }
    double computeIntrest()
    {
        return balance * intrestRate;
    }
    void deposit(double amount)
    {
        balance += amount;
    }
    bool withdraw(double amount)
    {
        if (amount > balance)
        {
            return false;
        }
        else
        {
            balance -= amount;
            return true;
        }
    }
};

int main()
{
    Account myAccount(1000, 0.05);
    cout << "Initial balance: ₹" << myAccount.getBalance() << endl;
    double interestEarned = myAccount.computeIntrest();
    cout << "Interest earned: ₹" << interestEarned << endl;
    myAccount.deposit(500);
    cout << "Balance after deposit: ₹" << myAccount.getBalance() << endl;
    bool withdrawalSuccess = myAccount.withdraw(200.00);
    if (withdrawalSuccess)
    {
        cout << "Withdrawal successful. Balance after withdrawal: ₹" << myAccount.getBalance() << endl;
    }
    else
    {
        cout << "Withdrawal failed. Insufficient funds." << endl;
    }

    return 0;
}