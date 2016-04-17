#include "People.h"



People::People()
{
	name = "Not name provided.";
	
}

People::~People()
{

}
People::People(String^ name)
{
	this->name = name;
	
}

void People::setName(String^ name)
{
	this->name = name;
}


String^ People::getName()
{
	return name;
}

