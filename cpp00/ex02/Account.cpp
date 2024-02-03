#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

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
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";created\n";
}

Account::Account(void)
{
	return ;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:"<< _totalAmount << ";closed\n";
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

void Account::makeDeposit(int deposit) //especialitos
{
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	_amount += deposit;
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << "\n";
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	if (withdrawal > _amount)
	{
		std::cout << "withdrawal:refused\n";
		return (false);
	}
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_amount -= withdrawal;
	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_withdrawals:" << _nbWithdrawals << "\n";
	return (true);
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << "\n";
}