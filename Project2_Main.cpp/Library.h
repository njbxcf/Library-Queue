#include <iostream>
#include "Queue.h"
#include "employee.h"
#include "Circulated Books.h"

using namespace std;

class Library{

private:




	void add_book(string book);
	void add_employee(string name);
	void pass_on();






public:

	//add the book to the archived queue
	void add_book(string book)
	{
		archived.push(book);
	}

	//add employee
	void add_employee(string name)
	{

		employee.push(name);
	}

	//add the book into the circulated queue, it will also remove the book from the archived queue
	void circulate_book(string book, Date date)
	{
		circulated.push(book);

		for (int i = 0, i < archived.size(), i++)
		{
			if (archived[i].title == book)
				archived[i].pop;
		}

	}


	void pass_on(string book, Date date)
	{

		/*This function will add the book to the next person in the Circulated Books queue. If there is nobody in that queue it will call the add_book function putting it back in the archived book list.
		It will also update the retaining time and waiting time adn adjust the queue if needed.*/


	}




};
	
	
	
	
	
	
	
