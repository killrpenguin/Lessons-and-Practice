#include <iostream>

class Person {
public: Person() {} // default constructor
  bool employee;
  std::string name;

  Person (bool an_employee, std::string a_name) { // paramaterized constructor
	employee = an_employee;
	name = a_name;
  }

  Person (Person &a_copy) { // copy constructor
	employee = a_copy.employee;
	name = a_copy.name;
  }

  void display() {
	if (employee == true) {
	  std::cout << "Employee Name: " << name << std::endl;
	} else {
	  std::cout << "Person's Name: " << name << std::endl;
	}
  }
};

int main () {
  Person first_person;
  Person second_person(false, "David");

  Person first_employee(first_person);
  first_employee.employee = true;
  first_employee.name = "Not David";

  second_person.display();
  first_employee.display();

  return 0;
}
