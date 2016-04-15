#pragma once
#include "People.h"
ref class Visitor : public People
{
public:
	Visitor();
	Visitor(String^ name, String^ lastname, String^ purpose, String^ dateOfVisit, String^ idStudent);
	Visitor(String^ name, String^ lastname, String^ purpose, String^ dateOfVisit);
private:

	String^ purpose;
	String^ dateOfVisit;
	String^ idStudent;

};

