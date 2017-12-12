#include <iostream>
#include <string>
using namespace std;

#include "employee.h"			//defines class Employee
#include "map_template.h"		//defines template map_template<Key,Value>

int main(void)
{
	Employee("Jan Kowalski","salesman",28);
	
};

/*typedef unsigned int ID; 							//Identification number of Employee
	map_template<ID,Employee> Database;					//Database of employees

	Database.Add(761028073,Employee("Jan Kowalski","salesman",28)); 	//Add first employee: name: Jan Kowalski, position: salseman, age: 28,
	Database.Add(510212881,Employee("Adam Nowak","storekeeper",54)); 	//Add second employee: name: Adam Nowak, position: storekeeper, age: 54
	Database.Add(730505129,Employee("Anna Zaradna","secretary",32)); 	//Add third employee: name: Anna Zaradna, position: secretary, age: 32

	cout << Database << endl;							//Print databese

	map_template<ID,Employee> NewDatabase = Database;	//Make a copy of database
	
	Employee* pE;
	pE = NewDatabase.Find(510212881);					//Find employee using its ID
	pE->Position = "salesman";							//Modify the position of employee
	pE = NewDatabase.Find(761028073);					//Find employee using its ID
	pE->Age = 29;										//Modify the age of employee

	Database = NewDatabase;								//Update original database
	
	cout << Database << endl;							//Print original databese*/

//Napisz wzorzec "map_template" clasy reprezentującej tablicę assocjacyjną oraz clasę "Employee" przechowującą dane personlane pracownika tak, aby mogły one być użyte w przykładzie zaprezentowanym w pliku testmap.cpp . Zademonstruj rownież możliwość użycia wzroca "map_template" do stworzenia bazy danych książek w bibliotece, gdzie kluczem jest tytuł książki a wartością przechowywaną jest infomracja o autorze, kategorii, liczbie stron, statusie (na półce / wypożyczona), itd...

