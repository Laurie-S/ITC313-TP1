#ifndef _date1_h
#define _date1_h

#include <string>

class Date {
public:
	Date (int month, int day);
	int getMonth();
	int getDay();
	Date nextDay();
	std::string toString();

private:
	int m_month;
	int m_day;


};
#endif