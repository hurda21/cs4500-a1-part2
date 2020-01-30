--- OVERVIEW ---

The Map API is created to serve as an organized storage for key-value pairs. It was implemented based off of Python's hashmap class (without the hashing -- for now). 


--- DETAILS ---

The Map object currently contains a constructor and destructor, as well as several standard Map functions.

Map implements the Object class. This allows for recursive type storage. It is possible for a Map to contain any object type that extends the Object class as either a key or value.

StringMap is used for Maps that strictly contain Strings or any class that implements a String. This prevents unnecessary typecasting from Object, allowing natural support for Strings.