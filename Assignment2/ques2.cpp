#include<iostream>
#include<string>
using namespace std;

class Account
{
	public:
		Account(int);
		void credit(int);
		void debit(int);
		int getAccountbalance();
	private:
	    int Accountbalance;	
};
Account::Account(int balance)
{
	if(balance>=0)
	Accountbalance=balance;
	else
	{
		Accountbalance=0;
		cout<<"Initial balance was Invalid"<<endl;
	}
}
void Account::credit(int balance)
{
	Accountbalance=Accountbalance+balance;
}
void Account::debit(int balance)
{
	if(Accountbalance>=balance)
	{
		Accountbalance=Accountbalance-balance;
	}
	else
	{
		cout<<"debit amount exceed Account balance"<<endl;
	}
}
int Account::getAccountbalance()
{
	return Accountbalance;
}
int main()
{
	Account Account1(89);
	Account Account2(-76);
	cout<<"Account1's initial balance is:"<<Account1.getAccountbalance()<<"\nAccount2's initial balance is:"<<Account2.getAccountbalance()<<endl;
	Account1.credit(200);
	Account2.credit(34);
	cout<<"\nAccount1's balance after credit is:"<<Account1.getAccountbalance()<<"\nAccount2's balance after credit is:"<<Account2.getAccountbalance()<<endl;
	Account1.debit(50);
	Account1.debit(34);
	cout<<"\nAccount1's balance after debit  is:"<<Account1.getAccountbalance()<<"\nAccount2's balance after debit is:"<<Account2.getAccountbalance()<<endl;
}
