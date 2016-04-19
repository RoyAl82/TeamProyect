#pragma once
#include <msclr\marshal_cppstd.h>


using namespace System;


ref class Visitor
{
public:
	Visitor();
	Visitor(String^ name, String^ lastname, String^ purpose, String^ dateOfVisit, String^ idStudent);
	Visitor(String^ name, String^ lastname, String^ purpose, String^ dateOfVisit);
	void setPurpose(String^ purpose);
	void setDateOfVisit(String^ dateOfVisit);
	void setIDStudent(String^ idStudent);
	//void setHourOfVisit(String^ hourOfVisit);
	void setProfessorName(String^ professorName);
	void setName(String^ name);


	String^ getName();

	String^ getPurpose();
	String^ getDateOfVisit();
	String^ getIDStudent();
	//String^ getHourOfVisit();
	String^ getProfessorName();
private:

	String^ purpose;
	String^ dateOfVisit;
	//String^ hourOfVisit;
	String^ idStudent;
	String^ professorName;
	String^ name;
};

