#include "Professor.h"



Professor::Professor()
{
	for (int i = 0; i < 7; i++)
	{
		this->officeHoursDate[i] = " ";
		this->officeHoursFrom[i] = " ";
		this->officeHoursTo[i] = " ";
	}
}
Professor::Professor(String^ name, array<String^>^ officeHoursFrom, array<String^>^ officeHoursTo, array<String^>^ officeHoursDate)
{
	this->professorName = name;
	this->officeHoursFrom = officeHoursFrom;
	this->officeHoursTo = officeHoursTo;
	this->officeHoursDate = officeHoursDate;
}
void Professor::setOfficeHoursFrom(String^ officeHoursFrom)
{
	for (int i = 0; i < this->officeHoursFrom->Length; i++)
	{
		if (this->officeHoursFrom[i] == " ")
		{
			this->officeHoursFrom[i] = officeHoursFrom;
			break;
		}

	}
}
String^ Professor::getOfficeHoursFrom(const int i)
{
	return officeHoursFrom[i];
}
void Professor::setOfficeHoursTo(String^ officeHoursTo)
{
	for (int i = 0; i < this->officeHoursTo->Length; i++)
	{
		if (this->officeHoursTo[i] == " ")
		{
			this->officeHoursTo[i] = officeHoursTo;
			break;
		}

	}
}
String^ Professor::getOfficeHoursTo(const int i)
{
	return officeHoursTo[i];
}
void Professor::setOfficeHoursDate(String^ officeHoursDate)
{
	for (int i = 0; i < officeHoursDate->Length; i++)
	{
		if (this->officeHoursDate[i] == " ")
		{
			this->officeHoursDate[i] = officeHoursDate;
			break;
		}

	}
	

	
	
}
array<String^>^ Professor::getOfficeHoursDate()
{
	return officeHoursDate;
}

String^ Professor::getOfficeHoursDate(const int i)
{
	return officeHoursDate[i];
}

void Professor::setName(String^ name)
{
	this->professorName = name;
}


String^ Professor::getName()
{
	return professorName;
}
array<String^>^ Professor::getOfficeHoursFrom()
{
	return officeHoursFrom;
}
array<String^>^ Professor::getOfficeHoursTo()
{
	return officeHoursTo;
}