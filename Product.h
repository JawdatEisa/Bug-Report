/* 
 * Filename: Product.h
 * Description: Header file for the Product class
 * 
 * Version History:
 * 1.0 2024-07-02 - Initial version
 */

#pragma once

#include <string>
#include <vector>
#include "ProductRelease.h"

class Product {
public:
    // Constructor
    Product(int productID, const std::string &name, const std::string &releaseDate);

    // Getters
    int getProductID() const;
    std::string getName() const;
    std::string getReleaseDate() const;
    std::vector<ProductRelease*> getReleases() const;

private:
    int productID;
    std::string name;
    std::string releaseDate;
    std::vector<ProductRelease*> releases;
};

