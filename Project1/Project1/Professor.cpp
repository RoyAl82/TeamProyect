#include "Professor.h"



Professor::Professor()
{
}
Professor::Professor(String^ name, String^ officeHoursFrom, String^ officeHoursTo, String^ officeHoursDate):People(name)
{
	this->officeHoursFrom = officeHoursFrom;
	this->officeHoursTo = officeHoursTo;
	this->officeHoursDate = officeHoursDate;
}
void Professor::setOfficeHoursFrom(String^ officeHoursFrom)
{
	this->officeHoursFrom = officeHoursFrom;
}
String^ Professor::getOfficeHoursFrom()
{
	return officeHoursFrom;
}
void Professor::setOfficeHoursTo(String^ officeHoursTo)
{
	this->officeHoursTo = officeHoursTo;
}
String^ Professor::getOfficeHoursTo()
{
	return officeHoursTo;
}
void Professor::setOfficeHoursDate(String^ officeHoursDate)
{
	this->officeHoursDate = officeHoursDate;
}
String^ Professor::getOfficeHoursDate()
{
	return officeHoursDate;
}