<<<<<<< HEAD
/*This will be a list of all of the employees. each employee.This will not need a cpp*/

class employee{


private:

int waiting_time = 0;
int retaining_time = 0;


public:


	void prioritize()
	{






	}


};
=======
/*This will be a list of each employee.This will not need a cpp
An employee has the following properties: name, waiting time, and retaining time.

The system should allow the employee to pass the book on to the next employee
on the queue on a given date.
Passing on the book has the following outcome:

- If the employee who is passing on the book is the last in the queue, the book gets archived.
- The total retaining time for the employee who passed on the book gets adjusted.
- The total waiting time for the employee who got the book gets adjusted.
- If there are other queues for other books, and these queues contain the employee who passed on the book and the employee who got the book,
then adjust these queues (because the priorities have changed).

*/
#include <list>

using namespace std;

int Employee(string name, int waiting, int retaining)
{
	waiting++;
	retaining++;

	return (waiting, retaining);
}


template <typename Item_Type>
struct Circulation {
	// Data Fields
	/** The data */
	Item_Type data;
	/** The pointer to the next node. */
	Circulation* next;

	// Constructor
	/** Creates a new Node that points to another Node.
	@param data_item The data stored
	@param next_ptr Pointer to the Node that is
	pointed to by the new Node
	*/
	Circulation(const Item_Type& data_item, Node* next_ptr = NULL) :
		data(data_item), next(next_ptr) {}
};

>>>>>>> refs/remotes/origin/master
