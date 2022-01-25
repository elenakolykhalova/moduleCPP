/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 00:26:19 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/08 18:07:47 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <string>
#include <iostream>
#include <sys/time.h>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	struct timeval time;
    gettimeofday(&time, nullptr);
	std::cout << "[" << time.tv_sec << "_" << time.tv_usec << "] ";
}

Account::Account( int initial_deposit ) {
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	Account::_nbAccounts++;
	Account::_displayTimestamp();
	Account::_totalAmount += initial_deposit;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount 
		<< ";created" << std::endl;
}

int		Account::getNbAccounts() { return (_nbAccounts); }
int		Account::getTotalAmount( void ) { return (_totalAmount); }
int		Account::getNbDeposits( void ) { return (_totalNbDeposits); }
int		Account::getNbWithdrawals( void ) { return (_totalNbWithdrawals); }

void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() 
		<< ";total:" << Account::getTotalAmount() 
		<< ";deposits:" << Account::getNbDeposits() 
		<< ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
	
}

void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount 
		<< ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

int		Account::checkAmount( void ) const { return (this->_amount); }

void	Account::makeDeposit( int deposit ){
	this->_nbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount 
		<< ";deposit:" << deposit << ";amount:" << _amount + deposit
		<< ";nb_deposits:" << this->_nbDeposits << std::endl;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
 }

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex 
		<< ";p_amount:" << this->_amount << ";";
	if (this->_amount - withdrawal >= 0) {
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		std::cout << "amount:" << this->_amount 
			<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		return (true);
	}
	std::cout << "withdrawal:refused" << std::endl;
	return (false);
}

Account::~Account( void ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex 
		<< ";amount:" << this->_amount
		<< ";closed" << std::endl;
}
