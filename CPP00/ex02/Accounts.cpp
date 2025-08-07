#include	"Account.hpp"
#include <iostream>

int Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

void	Account::_displayTimestamp()
{
	
}

void	Account::displayAccountsInfos()
{
	std::cout << "accounts : " << _nbAccounts << ";" << "total :" << _totalAmount << ";" << "deposits : " << _totalNbDeposits << ";"
		<< "withdrawls : " << _totalNbWithdrawals << ";" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int new_amount  = this->_amount + deposit;
	std::cout << "index :" << this->_accountIndex << ";" <<  "p_amount :" << this->_amount << ";" <<
		"deposit:" << deposit << ";" << "amount:" << new_amount << ";" << "nb_deposits"<< this->_nbDeposits << std::endl;
	this->_amount  = new_amount; 
	this->_nbDeposits++;
}

bool Account::makeWithdrawal(int withdrawl)
{
	std::cout << "index :" << this->_accountIndex << ";" <<  "p_amount :" << this->_amount << ";";	
	std::cout << "withdrawl:";
	if (withdrawl > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout << withdrawl << ";";
		this->_amount -= withdrawl;
		std::cout << "amout:" << this->_amount << ";";
	}
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int	Account::checkAmount(void) const
{
	return (0);
}

void	Account::displayStatus(void) const
{

}

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_totalAmount += _amount;
	_accountIndex = getNbAccounts();
	_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	//logtime display
}

//destructor
Account::~Account()
{
	//closed
}

