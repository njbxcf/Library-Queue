/*This will have a list for archived books. it will delete from list if book is put into circulation and add again when it returns to archive.
This will not need a cpp*/
#include <list>

	template <typename Item_Type>
struct Archived {
	// Data Fields
	/** The data */
	Item_Type data;
	/** The pointer to the next node. */
	Archived* next;

	// Constructor
	/** Creates a new Node that points to another Node.
	@param data_item The data stored
	@param next_ptr Pointer to the Node that is
	pointed to by the new Node
	*/
	Archived(const Item_Type& data_item, Node* next_ptr = NULL) :
		data(data_item), next(next_ptr) {}
};
