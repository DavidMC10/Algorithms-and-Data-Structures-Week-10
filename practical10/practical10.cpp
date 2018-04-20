//================================================================================
// Name        : practical10.cpp
// Author      :
// Version     : 1.0
// Description : practical 10 test program to utilise HashTable class
//================================================================================

#include <iostream>
#include <string>
#include "HashTableChaining.h"

// for optional question comment out previous include and uncomment this include
//#include "HashTableChaining.h"

using namespace std;


void testHash() {

    // create a table of size 5
	HashTable<string> table(5);
    

    // add 4 entries so table is full -not good practice!
	table.add("Joe", "Joe@gmail.com");
	table.add("Fred", "Fred@gmail.com");
	table.add("Pat", "Pat@gmail.com");
	table.add("Mike", "Mike@gmail.com");
	table.add("James", "James@gmail.com");
   

    // print the table
	cout << table << endl << endl;


    // create a sentinel controlled loop to repeatedly prompt for a key, search table and
    // print result if found or not found, until sentinel key 'quit' is entered

	string key = "";
	string email = "";
	while (key != "quit") {

		cout << "Please enter the key to search the Hashtable (quit to exit): " << endl;
		cin >> key;
	
		if (table.find(key,email) == true) {
			cout << "Found: " << email << endl;
		} else {
			cout << key << " Not found" << endl;
		}

	}

}


// Main method.
int main()
{
    testHash();

    // ---------------------------------------------------
    std::cout << std::endl << "Press enter to quit";
    std::cin.sync(); // flush input buffer
    std::cin.ignore(); // ignore what user enters

    return 0;
}