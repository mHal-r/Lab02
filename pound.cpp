/** 
 *Lab Number: 2
 *Name: Mira Haldar and Jazmyne Newman
 *This file defines the Pound class, which inherits from the Currency class 
 */
#include <iostream> 
#include <string> 
#include <stdexcept> 
#include "currency.cpp"
class Pound : public Currency {
private: 
    std::string currencyName = "Pound"; 
public: Pound(double amount) : Currency(amount) {} 
std::string getCurrencyName() override { return currencyName;} 
}; 