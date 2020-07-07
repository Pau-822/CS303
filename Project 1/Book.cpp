#include "Book.h"
#include "Date.h"

Book::Book()
{

}

string Book::getName()
{
    return this-> name;
}

void Book::setName(string name)
{
    this->name = name;
}

Date Book::get_circulated_start_date()
{
    return this->circulated_start_date;
}

void Book::set_circulated_start_date(Date circulated_start_date)
{
    this->circulated_start_date = circulated_start_date;
}

Date Book::get_circulated_end_date()
{
    return this->circulated_end_date;
}

void Book::set_circulated_end_date(Date circulated_end_date)
{
    this->circulated_end_date = circulated_end_date;
}

Date Book::get_pass_date()
{
    return this->pass_date;
}

void Book::set_pass_date(Date date)
{
    this->pass_date = date;
}

bool Book::get_archived()
{
    return false;
}

void Book::set_archived(bool archived)
{
    this->archived = archived;
}

queue<string> Book::get_queueEmployees()
{
    return this->queueEmployees;
}

int Book::queueEmployeesSize() {
    return this->queueEmployees.size();
}
void Book::addEmployee(string employee)
{
    this->queueEmployees.push(employee);
}
void Book::passBook()
{
    this->queueEmployees.pop();
}


