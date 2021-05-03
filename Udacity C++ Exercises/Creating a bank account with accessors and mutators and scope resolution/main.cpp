#include <iostream>
#include <string>

class BankAccount
{
  private:
      // TODO: declare member variables
        std::string ownerName;
        int accountNumber;
        float funds;
  public:
      // TODO: declare setters
        void OwnerName(std::string Name);
        void AccountNumber(int AcctNumb);
        void Funds(float Fnds);
      // TODO: declare getters
        std::string OwnerName() const;
        int AccountNumber() const;
        float Funds() const;
};

// TODO: implement setters
void BankAccount::OwnerName(std::string Name)
{
    BankAccount::ownerName = Name;
}
void BankAccount::AccountNumber(int AcctNumb)
{
    BankAccount::accountNumber = AcctNumb;
}
void BankAccount::Funds(float Fnds)
{
    BankAccount::funds = Fnds;
}
// TODO: implement getters
std::string BankAccount::OwnerName() const {return BankAccount::ownerName;}
int BankAccount::AccountNumber() const {return BankAccount::accountNumber;}
float BankAccount::Funds() const {return BankAccount::funds;}

int main(){
    // TODO: instantiate and output a bank account
    BankAccount account;
    account.OwnerName("Jhon Doe");
    account.AccountNumber(1029384756);
    account.Funds(100000.00);
    std::cout << "Account Owner :  " << account.OwnerName() << "\n";
    std::cout << "Account Number : " << account.AccountNumber() << "\n";
    std::cout << "Available Funds : $" << account.Funds() << "\n";
}
