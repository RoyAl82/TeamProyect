#pragma once
#include "People.h"
ref class Visitor : public People
{
public:
	Visitor();
	Visitor(String^ name, String^ lastname, String^ purpose, String^ dateOfVisit, String^ idStudent);
	Visitor(String^ name, String^ lastname, String^ purpose, String^ dateOfVisit);
	void setPurpose(String^ purpose);
	void setDateOfVisit(String^ dateOfVisit);
	void setIDStudent(String^ idStudent);
	void setHourOfVisit(String^ hourOfVisit);

	String^ getPurpose();
	String^ getDateOfVisit();
	String^ getIDStudent();
	String^ getHourOfVisit();

private:

	String^ purpose;
	String^ dateOfVisit;
	String^ hourOfVisit;
	String^ idStudent;

};

