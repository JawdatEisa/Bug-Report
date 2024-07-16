/* 
 * Filename: Customer.h
 * Description: Header file for the Customer class
 * 
 * Version History:
 * 1.0 2024-07-02 - Initial version
 */

#pragma once

#include <string>
#include "Employee.h"

class Customer : public Employee {
public:
    // Constructor
    Customer(const std::string &name, const std::string &phone, const std::string &email);

    // Getters
    std::string getCustomerName() const;
    std::string getPhone() const;
    std::string getEmail() const;

private:
    std::string customerName;
};

