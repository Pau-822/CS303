// 
//

#include <iostream>
#include "Library.h"
#include "Date.h"
using namespace std;

int main()
{
	Library library = Library();
	library.add_book("Data Structure");
	library.add_book("Math");
	library.add_employee("Ann");
	library.add_employee("Sam");
	library.add_employee("Adam");
	library.circulatedBook("Data Structure", Date(2015, 3, 7, DateFormat::US));
	library.circulatedBook("Math", Date(2015, 4, 1, DateFormat::US));
	library.passOn("Data Structure", Date(2015, 3, 8, DateFormat::US));
	library.passOn("Data Structure", Date(2015, 3, 10, DateFormat::US));
	library.passOn("Data Structure", Date(2015, 3, 10, DateFormat::US));

	library.passOn("Math", Date(2015, 4, 5, DateFormat::US));
	library.passOn("Math", Date(2015, 4, 10, DateFormat::US));
	library.passOn("Math", Date(2015, 4, 15, DateFormat::US));
}

