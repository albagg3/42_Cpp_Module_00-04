/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:19:42 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/11 17:01:16 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include "time.h"
//**************************PUBLIC*****************************************//

//--------------------Constructor----Destructor----------------------------//
Account::Account(int initial_deposit) : _amount(initial_deposit){
	this->makeDeposit(this->_amount);
	std::cout << "[" << this->_displayTimestamp << "]" << "index:" << this->_accountIndex << ";" 
		<< "amount:" << this->getTotalAmount << ";" << "created" << std::endl;
	return ;
}
Account::~Account(){
	std::cout << "[" << this->_displayTimestamp << "]" << "index:" << this->_accountIndex << ";" 
		<< "amount:" << this->getTotalAmount << ";" << "closed" << std::endl;
	return ;
}

//------------------------------Getters-------------------------------------//
int	Account::getNbAccounts(void){
	
	return _nbAccounts;	
}

int Account::getTotalAmount(void){
	return _totalAmount;	
}

int Account::getNbDeposits(void){
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void){
	return _totalNbWithdrawals;	
}

void Account::displayAccountsInfos(void){
	
	std::cout << "[" << _displayTimestamp << "]" << "accounts:" << _nbAccounts << ";" << "total:"<< getTotalAmount 
		<< "deposits:" << _totalNbDeposits << _totalNbWithdrawals << std::endl;
	
}

int Account::checkAmount(void) const
{
	
}

void Account::displayStatus(void)const
{
	std::cout << "[" << this->_displayTimestamp << "]" << "index:" << this->_accountIndex << ";" 
		<< "amount:" << this->_amount << ";" << "deposits" << this->_nbDeposits << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

//-------------------------Insert data-----------------------------------//

void Account::makeDeposit(int deposit)
{
	this->_totalNbDeposits++;
	this->_totalAmount += deposit;
	
	
}

bool Account::makeWithdrawal(int withdrawal)
{
	this->_totalNbWithdrawals++;
	if(withdrawal > this->getTotalAmount())
		return false;
	this->_totalAmount -= withdrawal;
	return (true);
}

//**************************PRIVATE***************************************//

void	Account::_displayTimestamp(void)
{
	time_t	timer;
	struct tm * timeinfo;

	timer = time(&timer);
	timeinfo = localtime (&timer);
	 

	std::cout << "[" << timeinfo->tm_year + 1900 
	<< std::setfill ('0') << std::setw(2) << timeinfo->tm_mon + 1 
	<< std::setfill ('0') << std::setw(2) << timeinfo->tm_mday 
	<< "_"<< std::setfill ('0') << std::setw(2) << timeinfo->tm_hour 
	<< std::setfill ('0') << std::setw(2) << timeinfo->tm_min 
	<< std::setfill ('0') << std::setw(2)<< timeinfo->tm_sec << "]" << std::endl;
	
}