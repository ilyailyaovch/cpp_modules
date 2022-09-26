/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <pleoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:52:25 by pleoma            #+#    #+#             */
/*   Updated: 2022/07/18 16:30:01 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::t::_totalAmount        = 0;
int	Account::t::_nbAccounts         = 0;
int	Account::t::_totalNbDeposits    = 0;
int	Account::t::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ):
    _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0){

    _accountIndex = getNbAccounts();
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
    _nbAccounts         += 1;
    _totalAmount        += initial_deposit;
    _totalNbDeposits    += _nbDeposits;
    _totalNbWithdrawals += _nbWithdrawals;
}

Account::Account( void ):
    _amount(0), _nbDeposits(0), _nbWithdrawals(0){

    _accountIndex   = getNbAccounts();
    _nbAccounts     += 1;
}

Account::~Account( void ){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
    _totalAmount        -= _amount;
    _nbAccounts         -= 1;
    _totalNbDeposits    -= _nbDeposits;
    _totalNbWithdrawals -= _nbWithdrawals;
}

int     Account::getNbAccounts( void ){
    return _nbAccounts;
}

int 	Account::getTotalAmount( void ){
    return _totalAmount;
}

int     Account::getNbDeposits( void ){
    return _totalNbDeposits;
}

int	    Account::getNbWithdrawals( void ){
    return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ){
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals;
    std::cout << std::endl;
}

void	Account::makeDeposit( int deposit ){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << _amount + deposit << ";";
    std::cout << "nb_deposits:" << _nbDeposits + 1;
    std::cout << std::endl;
    _amount             += deposit;
    _totalAmount        += deposit;
    _nbDeposits         += 1;
    _totalNbDeposits    += 1;
}

bool	Account::makeWithdrawal( int withdrawal ){
    _displayTimestamp();
    if (Account::checkAmount() >= withdrawal){
        std::cout << "index:" << _accountIndex << ";";
        std::cout << "p_amount:" << _amount << ";";
        std::cout << "withdrawal:" << withdrawal << ";";
        std::cout << "amount:" << _amount - withdrawal << ";";
        std::cout << "nb_withdrawals:" << _nbWithdrawals + 1;
        std::cout << std::endl;
        _amount             -= withdrawal;
        _totalAmount        -= withdrawal;
        _nbWithdrawals      += 1;
        _totalNbWithdrawals += 1;
        return true;
    } else{
        std::cout << "index:" << _accountIndex << ";";
        std::cout << "p_amount:" << _amount << ";";
        std::cout << "withdrawal:" << "refused";
        std::cout << std::endl;
        return false;
    }
}

int		Account::checkAmount( void ) const{
    return (this->_amount);    
}

void	Account::displayStatus( void ) const{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals;
    std::cout << std::endl;
}

void	Account::_displayTimestamp( void ){
    std::cout << "[19920104_091532] ";
}