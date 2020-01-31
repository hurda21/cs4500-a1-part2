#include "object.h"
#include "string.h"
#include "map.h"

void testMapConstructorAndDestructor() {
	Map* map = new Map();
	printf("Successfully constructed map\n");
	map->~Map();
	printf("Successfully deconstructed map\n");

	delete map;
}

void testMapSet() {
	Map* map = new Map();
	printf("Map length is: %zu\n", map->length());
	Object* o1 = new Object();
	Object* o2 = new Object();
	Object* o3 = new Object();
	Object* o4 = new Object();
	map->set(o1, o2);
	printf("Map length is: %zu\n", map->length());

	// Exits the program if map length is incorrect
	if (map->length() != 1) exit(1);

	delete map;
	delete o1;
	delete o2;
	delete o3;
	delete o4;
}

void testMapRemove() {
	Map* map = new Map();
	Object* o1 = new Object();
	Object* o2 = new Object();
	Object* o3 = new Object();
	Object* o4 = new Object();
	map->set(o1, o2);
	map->set(o3, o4);
	printf("Before remove, map length is: %zu\n", map->length());
	map->remove(o1);
	printf("After remove, map length is: %zu\n", map->length());

	// Exits the program if map length is incorrect
	if (map->length() != 1) exit(1);
	
	map->remove(o3);
	printf("After remove, map length is: %zu\n", map->length());

	// Exits the program if map length is incorrect
	if (map->length() != 0) exit(1);

	delete map;
	delete o1;
	delete o2;
	delete o3;
	delete o4;
}

void testMapClear() {
	Map* map = new Map();
	Object* o1 = new Object();
	Object* o2 = new Object();
	Object* o3 = new Object();
	Object* o4 = new Object();
	map->set(o1, o2);
	map->set(o3, o4);
	printf("Before clear, map length is: %zu\n", map->length());
	map->clear();
	printf("After clear, map length is: %zu\n", map->length());

	// Exits the program if map length is incorrect
	if (map->length() != 0) exit(1);

	delete map;
	delete o1;
	delete o2;
	delete o3;
	delete o4;
}

void testMapGet() {
	Map* map = new Map();
	Object* o1 = new Object();
	Object* o2 = new Object();
	Object* o3 = new Object();
	Object* o4 = new Object();
	map->set(o1, o2);
	map->set(o3, o4);

	if (!map->get(o1)->equals(o2) || !map->get(o3)->equals(o4)) {
		exit(1);
	}

	delete map;
	delete o1;
	delete o2;
	delete o3;
	delete o4;
}

void testStringMap() {
	StringMap* stringMap = new StringMap();
	printf("Successfully constructed string map\n");
	String* s1 = new String("hi");
	String* s2 = new String("bye");
	String* s3 = new String("hello");
	String* s4 = new String("goodbye");
	stringMap->set(s1, s2);
	stringMap->set(s3, s4);

	if (!stringMap->get(s1)->equals(s2) || !stringMap->get(s3)->equals(s4)) {
		exit(1);
	}

	printf("Before remove, map length is: %zu\n", stringMap->length());
	stringMap->remove(s1);
	printf("After remove, map length is: %zu\n", stringMap->length());

	// Exits the program if map length is incorrect
	if (stringMap->length() != 1) exit(1);

	stringMap->clear();
	printf("After clear, map length is: %zu\n", stringMap->length());

	// Exits the program if map length is incorrect
	if (stringMap->length() != 0) {
		exit(1);
	}

	delete stringMap;
	delete s1;
	delete s2;
	delete s3;
	delete s4;
}

int main() {
	// Test suite
	testMapConstructorAndDestructor();
	testMapSet();
	testMapRemove();
	testMapClear();
	testMapGet();
	testStringMap();

	// Returns successfully if all tests are successfully completed
	return 0;
}