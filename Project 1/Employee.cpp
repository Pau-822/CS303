#include "Employee.h"

Employee::Employee()
{
}

Employee::Employee(string name)
{
	this->name = name;
	this->waiting_time = 0;
	this->retaining_time = 0;
	this->priority = 0;
}

string Employee::getName()
{
	return this->name;
}

void Employee::setName(string name)
{
	this->name = name;
}

int Employee::get_waiting_time()
{
	return this->waiting_time;
}

void Employee::set_waiting_time(int waitingtime)
{
	this->waiting_time=waitingtime;
}

int Employee::get_retaining_time()
{
	return this->retaining_time;
}

void Employee::set_retaining_time(int retainingtime)
{
	this->retaining_time=retainingtime;
}

int Employee::get_priority()
{
	return this->priority;
}

void Employee::set_priority(int priority)
{
	this->priority = priority;
}
