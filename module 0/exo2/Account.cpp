#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>


void Account::_displayTimestamp( void ) {
    // Obtenir la date et l'heure actuelles
    std::time_t now = std::time(nullptr);
    std::tm* localTime = std::localtime(&now);

    // Formater la date et l'heure
    std::ostringstream oss;
    oss << '[' << std::put_time(localTime, "%Y%m%d_%H%M%S") << ']';

    // Afficher le timestamp
    std::cout << oss.str();
}

int	Account::getNbAccounts( void ) {
    return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ) {
   return Account::_totalAmount;
}

int	Account::getNbDeposits( void ) {
    return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
    return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
    _displayTimestamp();
    std::cout << " accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount
     << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;

    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount - deposit
              << ";deposit:" << deposit << ";amount:" << _amount
              << ";nb_deposits:" << _nbDeposits << std::endl;
}

Account::Account( int initial_deposit ) {
    _accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";amount:" << _amount
              << ";created" << std::endl;
    _nbAccounts++;
}

Account::~Account( void ) {
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}


bool	Account::makeWithdrawal( int withdrawal )  {
    if (_amount < withdrawal)
    {
        _displayTimestamp();
        std::cout << " index:" << _accountIndex << ";p_amount:" << _amount
              << ";withdrawal:refused" << std::endl;
        return (false);
    }
    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;

    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount + withdrawal
              << ";withdrawal:" << withdrawal << ";amount:" << _amount
              << ";nb_deposits:" << _nbWithdrawals << std::endl;
    return(true);
}
void Account::displayStatus( void ) const {
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount
              << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

int Account::checkAmount( void ) const {
    return _amount;
}

    int	Account::_nbAccounts = 0;
	int	Account::_totalAmount = 0;
	int	Account::_totalNbDeposits = 0;
	int	Account::_totalNbWithdrawals = 0;