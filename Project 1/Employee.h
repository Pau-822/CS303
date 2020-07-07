#pragma once
#include <string>
#include <ctime>
using namespace std;

class Employee {
private:
	string name;
	int waiting_time;
	int retaining_time;
	int priority;
public:
	Employee();
	Employee(string name);
	string getName();
	void setName(string name);
	int get_waiting_time();
	void set_waiting_time(int waitingtime);
	int get_retaining_time();
	void set_retaining_time(int retainingtime);
	int get_priority();
	void set_priority(int priority);
	


};