--- OVERVIEW ---
The Map API is created to serve as an organized storage for key-value pairs. It was implemented based off of Python's hashmap class (without the hashing -- for now). 

--- DETAILS ---
The Map object currently contains only one field: "pairs". This is a pointer to an array of objects known as KeyValues. They serve as key-value pairs of the map. 

It contains a constructor and destructor, as well as several standard Map functions.

Both Map and KeyValue implement the Object class. This allows for recursive type storage. It is possible for a KeyValue pair to contain another KeyValue pair or even entire Map as a key or value. Therefore, a Map can recursively contain several other Maps.