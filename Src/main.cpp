/// 
 // Filename: main.cpp
 // Description: Main driver for our program
 // 
 // Version History:
 // 1.0 2024-07-02 - Initial version
 ///

#include <iostream>
#include <limits>

//================================
// Application Menu
//================================
void ShowMenu() {
    std::cout << "Application Menu" << std::endl;
    std::cout << "1. Create Request" << std::endl;
    std::cout << "2. Bug Report by Program" << std::endl;
    std::cout << "3. Create a new Customer" << std::endl;
    std::cout << "4. Delete a Customer" << std::endl;
    std::cout << "5. Create a new Product" << std::endl;
    std::cout << "6. Delete a Product" << std::endl;
    std::cout << "7. Exit" << std::endl;
}

//================================
// Check Credentials
//================================
bool CheckCredentials() {
    std::string username;
    std::string password;

    std::cout << "Enter username: ";
    std::cin >> username;
    std::cout << "Enter password: ";
    std::cin >> password;

    // For demonstration purposes, let's assume the correct credentials are:
    // Username: admin
    // Password: password
    if (username == "admin" && password == "password") {
        std::cout << "Access granted." << std::endl;
        return true;
    } else {
        std::cout << "Invalid credentials. Access denied." << std::endl;
        return false;
    }
}

//================================
// Main Function
//================================
int main() {

    // Loop until valid credentials are entered
    while (!CheckCredentials()) {
        std::cout << "Please try again." << std::endl;
    }

    int choice;

    // Main menu loop
    do {
        ShowMenu();
        std::cout << "Enter your choice (1-5): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "You selected Create Bug 1" << std::endl;
                break;
            case 2:
                std::cout << "You selected Modify Bug 2" << std::endl;
                break;
            case 3:
                std::cout << "You selected Filter Bug 3" << std::endl;
                break;
            case 4:
                std::cout << "You selected Delete Bug 4" << std::endl;
                break;
            case 5:
                std::cout << "Exiting the program..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please select a valid option (1-5)." << std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                choice = 0; // reset choice, goes back up
                break;
        }
        
        std::cout << std::endl; // Print a new line for better readability
    } while (choice != 5);

    return 0;
}



///
 // Coding Convention
 //
 // 1. Each major section of a listing should be separated by a dividing comment line.
 //    e.g. //================================ or //-------------------------------------
 //    For classes, put public members first, then protected, then private.
 //
 // 2. Each module .cpp will start with a comment stating that file’s name, then should have a 
 //    paragraph-long comment describing the purpose of the class/module. After that, it should have 
 //    a Version History section, with oldest to newest.
 //
 // 3. Use descriptive names for all exported program entities, modules, and files. The first letter
 //    of a type or class is always upper case. Each parameter line should include the unit of measure
 //    for each parameter (e.g. radians or degrees, Celsius or Fahrenheit) if relevant. Variables will
 //    follow camel case convention. For functions, maximum 5 arguments in one line.
 //
 // 4. Indenting, spacing, and punctuation conventions:
 //    - Use tabs for indentation.
 //    - The opening brace “{“ goes on a new line by itself.
 //    - The body of an else clause is indented 4 spaces.
 //    - Surround “=” with spaces, and use spaces after commas and colons.
 ///