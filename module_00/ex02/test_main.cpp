#include <time.h>
#include <iomanip>
#include<iostream>
int main(){

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