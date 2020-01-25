// A1: Part 2
// lang: CwC

#include "object.h"

class KeyValue: public Object {
	private:
		Object key;
		Object value;

	public:
		KeyValue(Object k, Object v) {
			// Constructor for KeyValue pair
		}

		~KeyValue() {
			// Destructor for KeyValue pair
		}

		// Gets the key of the pair
		Object getKey();

		// Gets the value of the pair
		Object getValue();

		// Checks if this pair is equal to another object
		bool equals(Object o);
}