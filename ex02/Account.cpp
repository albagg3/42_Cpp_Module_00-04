/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:19:42 by albagarc          #+#    #+#             */
/*   Updated: 2023/09/07 19:50:31 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include "time.h"
//**************************PUBLIC*****************************************//

//--------------------Constructor----Destructor----------------------------//
Account::Account(int initial_deposit) : _amount(initial_deposit){
	this->makeDeposit(this->_amount);
	std::cout << this->_displayTimestamp << "index:" << this->_accountIndex << ";" << "amount:" << this->getTotalAmount << ";" << "created" << std::endl;
	return ;
}
Account::~Account(){
	return ;
}

//------------------------------Getters-------------------------------------//
int	Account::getNbAccounts(void){
	
	
	return _nbAccounts;	
}

int Account::getTotalAmount(void){
	return ;	
}

int Account::getNbDeposits(void){
	return ;
}

int Account::getNbWithdrawals(void){
	return ;	
}

void Account::displayAccountsInfos(void){
	
}

int Account::checkAmount(void) const
{
	
}

void Account::displayStatus(void)const
{
	
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
	if(withdrawal > this->getTotalAmount)
	this->_totalAmount -= withdrawal;
}

//**************************PRIVATE***************************************//

void	Account::_displayTimestamp(void)
{
	time_t	timer;
	timer = time(&timer);
	
	
}