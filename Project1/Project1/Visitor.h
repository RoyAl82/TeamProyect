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
	void setProfessorName(String^ professorName);

	String^ getPurpose();
	String^ getDateOfVisit();
	String^ getIDStudent();
	String^ getHourOfVisit();
	String^ getProfessorName();
private:

	String^ purpose;
	String^ dateOfVisit;
	String^ hourOfVisit;
	String^ idStudent;
	String^ professorName;

};

