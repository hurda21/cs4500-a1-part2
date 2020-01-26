// A1: Part 2
// lang: CwC

#pragma once
#include "object.h"

class KeyValue: public Object {
	public:
		Object* key;
		Object* value;

		KeyValue(Object* k, Object* v) {
			// Constructor for KeyValue pair
			key = key;
			vvaue = v;
		}

		~KeyValue() {
			// Destructor for KeyValue pair
			delete key;
			delete value;
		}

		// Gets the key of the pair
		Object* getKey() {
			return this->key;
		}

		// Gets the value of the pair
		Object* getValue() {
			return this->value;
		}

		bool equals(Object* o) {
			assert(o != nullptr);
			KeyValue* otherKV = dynamic_cast<KeyValue*>(o);
			if (otherKV == nullptr) {
				return false;
			}
			return key->equals(otherKV->key) && value->equals(otherKV->value);
		}

		size_t hash() {
			return this->key->hash() + this->value->hash();
		}
}
