#include "People.h"



People::People()
{
	name = "Not name provided.";
	lastname = "Not lastname provided.";
}

People::~People()
{

}
People::People(String^ name, String^ lastname)
{
	this->name = name;
	this->lastname = lastname;
}