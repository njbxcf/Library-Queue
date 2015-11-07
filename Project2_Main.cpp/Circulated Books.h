/*this will be a list for books in circualtion. it will add books when they go into circulation and delete when they are moved to archived. 
The archived or circulated status will be kept by a boolean value. This will not need a cpp*/


//#include <cstddef>



template <typename Item_Type>
class Circulation {
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

