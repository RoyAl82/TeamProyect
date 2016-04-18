#pragma once
#include "People.h"
ref class Professor : public People
{
public:
	Professor();
	Professor(String^ name, String^ officeHoursFrom, String^ officeHoursTo, String^ officeHoursDate);

	void setOfficeHoursFrom(String^ officeHoursFrom);
	void setOfficeHoursTo(String^ officeHoursTo);
	void setOfficeHoursDate(String^ officeHoursDate);

	String^ getOfficeHoursFrom();
	String^ getOfficeHoursTo();
	String^ getOfficeHoursDate();
private:

	String^ officeHoursFrom;
	String^ officeHoursTo;
	String^ officeHoursDate;
};

