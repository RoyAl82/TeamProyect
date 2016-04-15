#pragma once

#include <msclr\marshal_cppstd.h>


using namespace System;


ref class People
{
public:
	People();
	~People();
	People(String^ name, String^ lastname);
private:
	String^ name;
	String^ lastname;

};

