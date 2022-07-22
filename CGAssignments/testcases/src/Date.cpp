#include <iostream>
#include <Date.h>

using namespace std;

Date::Date()
{
      day = 1;
      month = 1;
      year = 2001;
      cout << "\tDefault constructor called " << endl;
};

Date::Date(int d)
{
      day = d;
      cout << "\tParameterised constructor 1 called " << endl;
};

Date::Date(int d, int m, int y)
{
      day = d;
      month = m;
      year = y;
      cout << "\tParameterised constructor 2 called " << endl;
}

int Date::getYear() 
{
    return year;
}
void Date::setDate(int day, int month, int year) 
{
    cout << day << ":" << month << ":" << year << endl;

    this->day = day;
    this->month = month;
    this->year = year;
}
void Date::getDate()
{
    cout << day << "/" << month << "/" << year << endl;																																				         
}

																																																				// TODO: Write C++ code to return name of month
																																																				// For month = 1 function returns "January", if month = 2 function returns "February" and so on ... 
																																																				string Date::getMonthName() {
	int monthname=0;
	switch(monthname)
																																																				{
case 1:
cout<<"January";
break;

case 2:
cout<<"February";
break;
 
case 3:
cout<<"March";
break;

case 4:
cout<<"April";
break;

case 5:
cout<<"May";
break;

case 6:
cout<<"June";
break;

case 7:
cout<<"July";
break;

case 8:
cout<<"August";
break;

case 9:
cout<<"September";
break;

case 10:
cout<<"October";
break;

case 11:
cout<<"November";
break;

case 12:
cout<<"December";
break;

case 13:
cout<<"Try Again";
break;
}

return "January";
																																																		          }
 
																																																				  // TODO: Write C++ code to return true if year is leap year else return false
																																																				  // year is leap year if it is divisible by 400 or 
																																																				  // (it is divisible for 4 but not by 100)
																																																				bool Date::checkLeapYear()
																																																				{
	//int year;
																																																				if (year % 400 == 0)
   return true;

if (year % 100 == 0)
   return false;

if (year % 4 == 0)
   return true;
return false;
};

