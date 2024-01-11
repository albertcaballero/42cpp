#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

void Account::_displayTimestamp(void)
{
	std::time_t now = std::time(nullptr);
    std::tm* time_info = std::localtime(&now);
    std::cout << std::put_time(time_info, "[%Y%m%d_%H%M%S] ");
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << "amount:" << initial_deposit << ";created";
}

Account::Account(void)
{
	return ;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << "amount:"<< _totalAmount << ";created";
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_amount += deposit;
	_nbDeposits++;
}