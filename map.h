// A1: Part 2
// lang: CwC

#pragma once
#include "object.h"
#include "keyvalue.h"

class Map: public Object {
	public:
		// Fields
		KeyValue* map;

		Map() {
			// Constructor for Map
		}

		~Map() {
			// Destructor for Map
		}

		// Returns the amount of entries in this map
		void length();

		// Removes all entries in this map
		void clear();

		// Gets the value at a specific key
		Object* get(Object* key);

		// Sets the value at the specified key to the value
		void set(Object* key, Object* value);
		
		// Removes value at the specified key and returns the removed object
		Object* remove(Object* key);

		// Gets all the keys of this map
		Object* getKeys();

		// Gets all the values of this map
		Object* getValues();

		// Gets all the key value pairs of the map
		KeyValue* getItems();

		// Checks if this map is equal to another object
		bool equals(Object* o);

		size_t hash();
}


