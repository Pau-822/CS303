#pragma once
#include <string>
#include "Date.h"
#include "Employee.h"
#include "queue.h"

using namespace std;

class Book {

private:
	string name;
	Date circulated_start_date;
	Date circulated_end_date;
	Date pass_date;
	bool archived;
	queue<string> queueEmployees;
public:
	Book();	
	string getName();
	void setName(string name);
	Date get_circulated_start_date();
	void set_circulated_start_date(Date circulated_start_date);
	Date get_circulated_end_date();
	void set_circulated_end_date(Date circulated_end_date);
	Date get_pass_date();
	void set_pass_date(Date date);
	bool get_archived();
	void set_archived(bool archived);
	queue<string> get_queueEmployees();
	int queueEmployeesSize();
	void addEmployee(string employee);
	void passBook();

};

