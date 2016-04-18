#pragma once

#include <msclr\marshal_cppstd.h>


using namespace System;


ref class People
{
public:
	People();
	~People();
	People(String^ name);

	void setName(String^ name);
	

	String^ getName();
	


private:
	String^ name;
	

};

