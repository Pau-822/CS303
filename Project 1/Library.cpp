#include "Library.h"
#include <iostream>

void Library::add_book(string bookName)
{
	Book book = Book();
	book.setName(bookName);
	this->listCirculatedBooks.push_back(book);
}

void Library::add_employee(string employeeName)
{
	Employee employee = Employee(employeeName);
	this->listEmployees.push_back(employee);
}

int findBook(string bookName, vector<Book> listBooks) {
	for (int i = 0; i < listBooks.size(); i++) {
		if (bookName == listBooks.at(i).getName()) {
			return i;
		}
	}
	return -1;
}

int findEmployee(string employeeName, vector<Employee> listEmployee) {
	for (int i = 0; i < listEmployee.size(); i++) {
		if (employeeName == listEmployee.at(i).getName()) {
			return i;
		}
	}
	return -1;
}
void Library::circulatedBook(string bookName, Date day)
{
	
	int pos = findBook(bookName, listCirculatedBooks);
	if (pos != -1) {

		listCirculatedBooks.at(pos).set_circulated_start_date(day);
		listCirculatedBooks.at(pos).set_pass_date(day);
		listCirculatedBooks.at(pos).set_archived(false);
		for (int i = 0; i < listEmployees.size(); i++) {
			listCirculatedBooks.at(pos).addEmployee(listEmployees.at(i).getName());
		}
	}
}

void Library::passOn(string bookName, Date day)
{
	
	int pos = findBook(bookName, listCirculatedBooks);
	int daysWaiting = day- listCirculatedBooks.at(pos).get_circulated_start_date() ;
	int daysRetaining = day - listCirculatedBooks.at(pos).get_pass_date();
	if (pos != -1) {
		int size = listCirculatedBooks.at(pos).get_queueEmployees().size();
		if (size > 0) {
			string currentEmployee = listCirculatedBooks.at(pos).get_queueEmployees().front();
			listCirculatedBooks.at(pos).passBook();
			listCirculatedBooks.at(pos).set_pass_date(day);
			int epos = findEmployee(currentEmployee, listEmployees);
			listEmployees[epos].set_retaining_time(listEmployees[epos].get_retaining_time()+daysRetaining);
			listEmployees[epos].set_priority(listEmployees[epos].get_waiting_time() - listEmployees[epos].get_retaining_time());
			if (listCirculatedBooks.at(pos).get_queueEmployees().size() > 0) {
				string nextEmployee = listCirculatedBooks.at(pos).get_queueEmployees().front();				
				epos = findEmployee(nextEmployee, listEmployees);
				listEmployees[epos].set_waiting_time(listEmployees[epos].get_waiting_time()+daysWaiting);
				listEmployees[epos].set_priority(listEmployees[epos].get_waiting_time() - listEmployees[epos].get_retaining_time());
			}
			else {
				listCirculatedBooks.at(pos).set_archived(true);
				listCirculatedBooks.at(pos).set_circulated_end_date(day);
				listArchivedBooks.push_back(listCirculatedBooks.at(pos));
				listCirculatedBooks.erase(listCirculatedBooks.begin() + pos);
			}
		}
	
	}
}

