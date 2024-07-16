/* 
 * Filename: unitTestMain.cpp
 * Description: Unit tests for header file - Employee.h
 * 
 * Version History:
 * 1.0 2024-07-02 - Initial version
 */
#include <iostream>
#include <cassert>
#include "Employee.h"

// Function prototype for unit test
void testEmployee();

// Main function for running unit tests
int main() {
    testEmployee();
    
    std::cout << "All tests passed successfully!" << std::endl;
    return 0;
}

// Unit test for Employee class
void testEmployee() {
    // Create an Employee instance
    Employee* employee = new Employee("John Doe", "123-456-7890", "Developer");

    // Test getters
    assert(employee->getName() == "John Doe");
    assert(employee->getPhone() == "123-456-7890");
    assert(employee->getEmail() == ""); // Assuming getEmail() is not implemented in Employee.h
    assert(employee->getRole() == "Developer");

    // Clean up
    delete employee;
}
