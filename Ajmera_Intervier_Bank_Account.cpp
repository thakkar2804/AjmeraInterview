#include<bits/stdc++.h>

using namespace std;

class Checking_Account
{
	private: float balanceCredit,balanceDebit;
	private: vector<string>credit;
	private: vector<string>debit;
	public:
	
	void setbalanceCredit(int balance)
	{
		balanceCredit=balance;
	}
	
	float getbalanceCredit()
	{
		return balanceCredit;
	}

	void setbalanceDebit(int balance)
	{
		balanceDebit=balance;
	}
	
	float getbalanceDebit()
	{
		return balanceDebit;
	}

	string addMoneyCredit(int money)
	{
		balanceCredit+=money;
		string str=to_string(money)+" Rs. Added to credit card in Checking_Account";
		credit.push_back(str);

		return str;
	}

	string extractMoneyCredit(int money)
	{
		if(money>balanceCredit)
			return "Not Enough balance in Credit card";
		balanceCredit-=money;

		string str=to_string(money)+" Rs. Extracted from Credit card in Checking_Account";
		credit.push_back(str);

		return str;
	}

	string addmoneyDebit(int money)
	{
		balanceDebit+=money;
		string str=to_string(money)+" Rs. Added to debit card in Checking_Account";
		debit.push_back(str);

		return str;
	}

	string extractMoneyDebit(int money)
	{
		if(money>balanceDebit)
			return "Not Enough balance in debit card in Checking_Account";
		balanceDebit-=money;

		string str=to_string(money)+" Rs. Extracted from debit card in Checking_Account";
		debit.push_back(str);

		return str;
	}
	void printall()
	{
		cout<<"Details for Credit card of Checking_Account"<<endl;
		for(int i=0;i<credit.size();i++)
		{
			cout<<credit[i]<<endl;
		}
		cout<<"Final balance in Credit card of Checking_account: Rs."<<balanceCredit<<endl;
		cout<<endl;
		cout<<"Details For Debit card of Checking_Account"<<endl;
		for(int i=0;i<debit.size();i++)
		{
			cout<<debit[i]<<endl;
		}
		cout<<"Final balance in Debit card of Checking_account: Rs."<<balanceDebit<<endl;
		cout<<endl;
	}
};

class Savings_Account
{
	private: float balanceCredit,balanceDebit;
	private: vector<string>credit;
	private: vector<string>debit;
	public:
	
	void setbalanceCredit(int balance)
	{
		balanceCredit=balance;
	}
	
	float getbalanceCredit()
	{
		return balanceCredit;
	}

	void setbalanceDebit(int balance)
	{
		balanceDebit=balance;
	}
	
	float getbalanceDebit()
	{
		return balanceDebit;
	}

	string addMoneyCredit(int money)
	{
		balanceCredit+=money;
		string str=to_string(money)+" Rs. Added to credit card in Savings_Account";
		credit.push_back(str);

		return str;
	}

	string extractMoneyCredit(int money)
	{
		if(money>balanceCredit)
			return "Not Enough balance in Credit card in Savings_Account";
		balanceCredit-=money;

		string str=to_string(money)+" Rs. Extracted from Credit card in Savings_Account";
		credit.push_back(str);

		return str;
	}

	string addmoneyDebit(int money)
	{
		balanceDebit+=money;
		string str=to_string(money)+" Rs. Added to debit card in Savings_Account";
		debit.push_back(str);

		return str;
	}

	string extractMoneyDebit(int money)
	{
		if(money>balanceDebit)
			return "Not Enough balance in debit card in Savings_Account";
		balanceDebit-=money;

		string str=to_string(money)+" Rs. Extracted from debit card in Savings_Account";
		debit.push_back(str);

		return str;
	}
	void printall()
	{
		cout<<"Details for Credit card of Saving_Account"<<endl;
		for(int i=0;i<credit.size();i++)
		{
			cout<<credit[i]<<endl;
		}
		cout<<"Final balance in Credit card of Saving_account: Rs."<<balanceCredit<<endl;
		cout<<endl;
		cout<<"Details for debit card of Saving_Account"<<endl;
		for(int i=0;i<debit.size();i++)
		{
			cout<<debit[i]<<endl;
		}
		cout<<"Final balance in Debit card of Saving_account: Rs."<<balanceDebit<<endl;
		cout<<endl;
	}
};

int main()
{
	int intialCredit,intialDebit;
	cout<<"Enter Initial amount of credit card for Checking_Account"<<endl;
	cin>>intialCredit;
	cout<<"Enter Initial amount of debit card for Checking_Account"<<endl;
	cin>>intialDebit;

	Checking_Account ca;
	ca.setbalanceDebit(intialDebit);
	ca.setbalanceCredit(intialCredit);

	cout<<"Enter Initial amount of credit card for Savings_Account"<<endl;
	cin>>intialCredit;
	cout<<"Enter Initial amount of debit card for Savings_Account"<<endl;
	cin>>intialDebit;

	Savings_Account sa;
	sa.setbalanceDebit(intialDebit);
	sa.setbalanceCredit(intialCredit);

	int option;
	while(true)
	{
		cout<<"Choose an account from which you want to do a transaction:"<<endl;
		cout<<"1.Savings_Account"<<endl<<"2.Checking_Account"<<endl<<"3.Print all details"<<endl;
		
		cin>>option;

		switch(option)
		{
			case 1:
			{
				int cardOption;
				cout<<"Choose a card:"<<endl<<"1.Debit card"<<endl<<"2.Credit card"<<endl<<"0.Cancel transaction"<<endl;
				cin>>cardOption;

				if(cardOption == 1)
				{
					int transactionType;
					cout<<"Choose any one:"<<endl<<"1.Add Money"<<endl<<"2.Withdraw Money"<<endl<<"0.cancel transaction"<<endl;
					cin>>transactionType;

					if(transactionType == 1)
					{
						int money = 1,chances = 3;
						while(chances--)
						{
							cout<<"Enter amount you want to add in a multiple of 500 or press 0 to cancel transaction"<<endl;
							cin>>money;
							if(money == 0)
								break;
							if(money%500 != 0)
							{
								cout<<"Invalid amount Now you have 2 more chances left"<<endl;
							}
							else
								break;
						}
						if(money == 0)
							break;
						if(money%500 == 0)
						cout<<sa.addmoneyDebit(money)<<endl;
					}
					else if(transactionType == 2)
					{
						int money = 1,chances = 3;
						while(chances--)
						{
							cout<<"Enter amount you want to Extract in a multiple of 500 or press 0 to cancel transaction"<<endl;
							cin>>money;
							if(money == 0)
								break;
							if(money%500 != 0)
							{
								cout<<"Invalid amount Now you have 2 more chances left"<<endl;
							}
							else
								break;
						}
						if(money == 0)
							break;
						if(money%500 == 0)
						cout<<sa.extractMoneyDebit(money)<<endl;
					}
					else 
						break;
				}
				else if(cardOption == 2)
				{
					int transactionType;
					cout<<"Choose any one:"<<endl<<"1.Add Money"<<endl<<"2.Withdraw Money"<<endl<<"0.cancel transaction"<<endl;
					cin>>transactionType;

					if(transactionType == 1)
					{
						int money = 1,chances = 3;
						while(chances--)
						{
							cout<<"Enter amount you want to add in a multiple of 500 or press 0 to cancel transaction"<<endl;
							cin>>money;
							if(money == 0)
								break;
							if(money%500 != 0)
							{
								cout<<"Invalid amount Now you have 2 more chances left"<<endl;
							}
							else
								break;
						}
						if(money == 0)
							break;
						if(money%500 == 0)
						cout<<sa.addMoneyCredit(money)<<endl;
					}
					else if(transactionType == 2)
					{
						int money = 1,chances = 3;
						while(chances--)
						{
							cout<<"Enter amount you want to Extract in a multiple of 500 or press 0 to cancel transaction"<<endl;
							cin>>money;
							if(money == 0)
								break;
							if(money%500 != 0)
							{
								cout<<"Invalid amount Now you have 2 more chances left"<<endl;
							}
							else
								break;
						}
						if(money == 0)
							break;
						if(money%500 == 0)
						cout<<sa.extractMoneyCredit(money)<<endl;
					}
					else 
						break;
				}
				break;
			}
			case 2:
			{
				int cardOption;
				cout<<"Choose a card:"<<endl<<"1.Debit card"<<endl<<"2.Credit card"<<endl<<"0.Cancel transaction"<<endl;
				cin>>cardOption;

				if(cardOption == 1)
				{
					int transactionType;
					cout<<"Choose any one:"<<endl<<"1.Add Money"<<endl<<"2.Withdraw Money"<<endl<<"0.cancel transaction"<<endl;
					cin>>transactionType;

					if(transactionType == 1)
					{
						int money = 1,chances = 3;
						while(chances--)
						{
							cout<<"Enter amount you want to add in a multiple of 500 or press 0 to cancel transaction"<<endl;
							cin>>money;
							if(money == 0)
								break;
							if(money%500 != 0)
							{
								cout<<"Invalid amount Now you have 2 more chances left"<<endl;
							}
							else
								break;
						}
						if(money == 0)
							break;
						if(money%500 == 0)
						cout<<ca.addmoneyDebit(money)<<endl;
					}
					else if(transactionType == 2)
					{
						int money = 1,chances = 3;
						while(chances--)
						{
							cout<<"Enter amount you want to Extract in a multiple of 500 or press 0 to cancel transaction"<<endl;
							cin>>money;
							if(money == 0)
								break;
							if(money%500 != 0)
							{
								cout<<"Invalid amount Now you have 2 more chances left"<<endl;
							}
							else
								break;
						}
						if(money == 0)
							break;
						if(money%500 == 0)
						{
							cout<<ca.extractMoneyDebit(money)<<endl;
							break;
						}
					}
					else 
						break;
				}
				else if(cardOption == 2)
				{
					int transactionType;
					cout<<"Choose any one:"<<endl<<"1.Add Money"<<endl<<"2.Withdraw Money"<<endl<<"0.cancel transaction"<<endl;
					cin>>transactionType;

					if(transactionType == 1)
					{
						int money = 1,chances = 3;
						while(chances--)
						{
							cout<<"Enter amount you want to add in a multiple of 500 or press 0 to cancel transaction"<<endl;
							cin>>money;
							if(money == 0)
								break;
							if(money%500 != 0)
							{
								cout<<"Invalid amount Now you have 2 more chances left"<<endl;
							}
							else
								break;
						}
						if(money == 0)
							break;
						if(money%500 == 0)
						cout<<ca.addMoneyCredit(money)<<endl;
					}
					else if(transactionType == 2)
					{
						int money = 1,chances = 3;
						while(chances--)
						{
							cout<<"Enter amount you want to Extract in a multiple of 500 or press 0 to cancel transaction"<<endl;
							cin>>money;
							if(money == 0)
								break;
							if(money%500 != 0)
							{
								cout<<"Invalid amount Now you have 2 more chances left"<<endl;
							}
							else
								break;
						}
						if(money == 0)
							break;
						if(money%500 == 0)
						{
							cout<<ca.extractMoneyCredit(money)<<endl;
							break;
						}
					}
					else 
						break;
				}
				break;
			}
			case 3:
			{
				ca.printall();
				sa.printall();
				break;
			}
		}
		if(option == 3)
			break;
	}
}