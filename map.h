// A1: Part 2
// lang: CwC
#pragma once

#include "object.h"

class Map: public Object {
	public:
		Map() {
			// Constructor for Map
		}

		~Map() {
			// Destructor for Map
		}

		// Returns the amount of entries in this map
		size_t length();

		// Removes all entries in this map
		void clear();

		// Gets the value at a specific key
		Object* get(Object* key);

		// Sets the value at the specified key to the value
		void set(Object* key, Object* value);
		
		// Removes value at the specified key and returns the removed object
		Object* remove(Object* key);

		// Gets all the keys of this map
		Object** getKeys();

		// Gets all the values of this map
		Object** getValues();

		// Checks if this map is equal to another object
		bool equals(Object* o);

		// Returns the hash of this map
		size_t hash();
};

class StringMap: public Map {
	public:
		StringMap() {
			// Constructor for StringMap
		}

		~StringMap() {
			// Destructor for StringMap
		}

		// Gets the value at a specific key
		String* get(String* key);

		// Sets the value at the specified key to the value
		void set(String* key, String* value);

		// Removes value at the specified key and returns the removed object
		String* remove(String* key);

		// Gets all the keys of this map
		String** getKeys();

		// Gets all the values of this map
		String** getValues();
};