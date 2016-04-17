#include "Visitor.h"



Visitor::Visitor()
{
}
Visitor::Visitor(String^ name, String^ lastname, String^ purpose, String^ dateOfVisit, String^ idStudent):People(name)
{
	this->purpose = purpose;
	this->dateOfVisit = dateOfVisit;
	this->idStudent = idStudent;
}
Visitor::Visitor(String^ name, String^ lastname, String^ purpose, String^ dateOfVisit):People(name)
{
	this->purpose = purpose;
	this->dateOfVisit = dateOfVisit;
}

void Visitor::setPurpose(String^ purpose)
{
	this->purpose = purpose;
}
void Visitor::setDateOfVisit(String^ dateOfVisit)
{
	this->dateOfVisit = dateOfVisit;
}
void Visitor::setIDStudent(String^ idStudent)
{
	this->idStudent = idStudent;
}
void Visitor::setHourOfVisit(String^ hourOfVisit)
{
	this->hourOfVisit = hourOfVisit;
}

String^ Visitor::getPurpose()
{
	return purpose;
}
String^ Visitor::getDateOfVisit()
{
	return dateOfVisit;
}
String^ Visitor::getIDStudent()
{
	return idStudent;
}

String^ Visitor::getHourOfVisit()
{
	return hourOfVisit;
}