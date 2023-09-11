/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:19:42 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/11 20:58:43 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include "time.h"
//**************************PUBLIC*****************************************//

//--------------------Constructor----Destructor----------------------------//
Account::Account(int initial_deposit) : _amount(initial_deposit){
	
	// this->checkAmount();
	this->_accountIndex = this->getNbAccounts();
	this->_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout	<< " index:" << this->_accountIndex << ";" 
				<< "amount:" << this->checkAmount() << ";" 
				<< "created" << std::endl;
	return ;
}
Account::~Account(){
	
	_displayTimestamp();
	std::cout	<< " index:" << this->_accountIndex << ";" 
				<< "amount:" << this->checkAmount() << ";" 
				<< "closed" << std::endl;
	return ;
}

//------------------------------Getters-------------------------------------//
int	Account::_nbAccounts = -1;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void){
	_nbAccounts++;
	return _nbAccounts;	
}

int Account::getTotalAmount(void){
	
	return _totalAmount;	
}

int Account::getNbDeposits(void){
	_totalNbDeposits++;
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void){
	return _totalNbWithdrawals;	
}

void Account::displayAccountsInfos(void){

	_displayTimestamp();
	std::cout	<< " accounts:" << _nbAccounts + 1 << ";"
			 	<< "total:"<< _totalAmount << ";" 
				<< "deposits:" << _totalNbDeposits << ";" 
				<< "withdrawals:" << _totalNbWithdrawals << std::endl;
}

int Account::checkAmount(void) const
{
	return this->_amount;
}

void Account::displayStatus(void)const

{
	this->_displayTimestamp();
	std::cout	<< " index:" << this->_accountIndex << ";" 
				<< "amount:" << this->_amount << ";" 
				<< "deposits:" << this->_nbDeposits << ";" 
				<< "withdrawals:" << this->_nbWithdrawals << std::endl;

}

//-------------------------Insert data-----------------------------------//

void Account::makeDeposit(int deposit)
{
	this->_totalNbDeposits++;
	this->_totalAmount += deposit;
	if (deposit > 0)
		this->_nbDeposits = 1;
	this->_displayTimestamp();
	std::cout 	<< " index:" << this->_accountIndex << ";" 
				<< "p_amount:" << this->checkAmount() << ";" 
				<< "deposit:" << deposit << ";" 
				<< "amount:" << this->checkAmount() + deposit << ";" 
				<< "nb_deposits:" << this->_nbDeposits << std::endl;
	this->_amount += deposit;
	//printa linea
	
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > this->checkAmount())
	{
		this->_displayTimestamp();
		std::cout 	<< " index:" << this->_accountIndex << ";" 
					<< "p_amount:" << this->checkAmount() << ";" 
					<< "withdrawal:refused" << std::endl;
		return false;
	}
	else
	{	
		this->_totalNbWithdrawals++;
		this->_nbWithdrawals = 1;
		this->_totalAmount -= withdrawal;
		this->_displayTimestamp();
		
		std::cout 	<< " index:" << this->_accountIndex << ";" 
					<< "p_amount:" << this->checkAmount() << ";" 
					<< "withdrawal:" << withdrawal << ";" 
					<< "amount:" <<  this->checkAmount() - withdrawal << ";" 
					<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		this->_amount -= withdrawal;
	}
	return (true);
	//printa linea
}

//**************************PRIVATE***************************************//

void	Account::_displayTimestamp(void)
{
	time_t	timer;
	struct tm * timeinfo;

	timer = time(&timer);
	timeinfo = localtime (&timer);
	 
	// std::cout << "[19920104_091532]";
	std::cout << "[" << timeinfo->tm_year + 1900 
		<< std::setfill ('0') << std::setw(2) << timeinfo->tm_mon + 1 
		<< std::setfill ('0') << std::setw(2) << timeinfo->tm_mday 
		<< "_"<< std::setfill ('0') << std::setw(2) << timeinfo->tm_hour 
		<< std::setfill ('0') << std::setw(2) << timeinfo->tm_min 
		<< std::setfill ('0') << std::setw(2)<< timeinfo->tm_sec << "]";
	
}