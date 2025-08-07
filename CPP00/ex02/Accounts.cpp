#include	"Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

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

void Account::_displayTimestamp()
{
    std::time_t t = std::time(NULL);
    std::tm* now = std::localtime(&t);

    std::cout << "[" 
        << (now->tm_year + 1900)
        << std::setw(2) << std::setfill('0') << (now->tm_mon + 1)
        << std::setw(2) << std::setfill('0') << now->tm_mday
        << "_"
        << std::setw(2) << std::setfill('0') << now->tm_hour
        << std::setw(2) << std::setfill('0') << now->tm_min
        << std::setw(2) << std::setfill('0') << now->tm_sec
        << "] ";
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";" << "total:" << _totalAmount << ";" << "deposits:" << _totalNbDeposits << ";"
		<< "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	int new_amount = this->_amount + deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "index:" << this->_accountIndex << ";" <<  "p_amount:" << this->_amount << ";" <<
		"deposit:" << deposit << ";" << "amount:" << new_amount << ";" << "nb_deposits:"<< this->_nbDeposits << std::endl;
	this->_amount  = new_amount; 
	_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" <<  "p_amount:" << this->_amount << ";";	
	std::cout << "withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout << withdrawal << ";";
		this->_amount -= withdrawal;
		std::cout << "amount:" << this->_amount << ";";
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
	}

	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
_displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";created" << std::endl;
}

//destructor
Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";closed" << std::endl;
}

