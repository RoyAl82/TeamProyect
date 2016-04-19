#include "Visitor.h"



Visitor::Visitor()
{
}
Visitor::Visitor(String^ name, String^ lastname, String^ purpose, String^ dateOfVisit, String^ idStudent)
{
	this->purpose = purpose;
	this->dateOfVisit = dateOfVisit;
	this->idStudent = idStudent;
	this->name = name;
}
Visitor::Visitor(String^ name, String^ lastname, String^ purpose, String^ dateOfVisit)
{
	this->purpose = purpose;
	this->dateOfVisit = dateOfVisit;
	this->name = name;
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
void Visitor::setProfessorName(String^ professorName)
{
	this->professorName = professorName;
}
String^ Visitor::getProfessorName()
{
	return professorName;
}


void Visitor::setName(String^ name)
{
	this->name = name;
}


String^ Visitor::getName()
{
	return name;
}
