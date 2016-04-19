#include "Professor.h"



Professor::Professor()
{
}
Professor::Professor(String^ name, array<String^>^ officeHoursFrom, array<String^>^ officeHoursTo, array<String^>^ officeHoursDate)
{
	this->professorName = name;
	this->officeHoursFrom = officeHoursFrom;
	this->officeHoursTo = officeHoursTo;
	this->officeHoursDate = officeHoursDate;
}
void Professor::setOfficeHoursFrom(array<String^>^ officeHoursFrom)
{
	this->officeHoursFrom = gcnew array<String^>(officeHoursFrom->Length);

	for (int i = 0; i < officeHoursFrom->Length; i++)
	{
		this->officeHoursFrom[i] = officeHoursFrom[i];
	}
}
String^ Professor::getOfficeHoursFrom(const int i)
{
	return officeHoursFrom[i];
}
void Professor::setOfficeHoursTo(array<String^>^ officeHoursTo)
{
	this->officeHoursTo = gcnew array<String^>(officeHoursTo->Length);

	for (int i = 0; i < officeHoursTo->Length; i++)
	{
		this->officeHoursTo[i] = officeHoursTo[i];
	}
}
String^ Professor::getOfficeHoursTo(const int i)
{
	return officeHoursTo[i];
}
void Professor::setOfficeHoursDate(array <String^>^ officeHoursDate)
{
	this->officeHoursDate = gcnew array<String^>(officeHoursDate->Length);

	for (int i = 0; i < officeHoursDate->Length; i++)
	{
		this->officeHoursDate[i] = officeHoursDate[i];
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