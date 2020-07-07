#pragma once
#include <string>
#include <vector>
#include "Book.h"

using namespace std;


class Library {

private:
	vector<Book> listCirculatedBooks;
	vector<Book> listArchivedBooks;
	vector<Employee> listEmployees;

public:
	void add_book(string bookName);
	void add_employee(string employeeName);
	void circulatedBook(string bookName, Date day);
	void passOn(string bookName, Date day);
};
