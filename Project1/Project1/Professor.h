#pragma once
#include <msclr\marshal_cppstd.h>


using namespace System;



ref class Professor
{
public:
	Professor();
	Professor(String^ name, array<String^>^ officeHoursFrom, array<String^>^ officeHoursTo, array<String^>^ officeHoursDate);

	void setOfficeHoursFrom(array<String^>^ officeHoursFrom);
	void setOfficeHoursTo(array<String^>^ officeHoursTo);
	void setOfficeHoursDate(array <String^>^ officeHoursDate);

	void setName(String^ name);


	String^ getName();
	String^ Professor::getOfficeHoursDate(const int i);
	String^ getOfficeHoursFrom(const int i);
	String^ getOfficeHoursTo(const int i);


	array<String^>^ getOfficeHoursDate();
	array<String^>^ getOfficeHoursFrom();
	array<String^>^ getOfficeHoursTo();
private:
	array<String^>^ officeHoursDate;

	array<String^>^ officeHoursFrom;
	array<String^>^ officeHoursTo;
	String^ professorName;



};

