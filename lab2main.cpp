/** 
 *Lab Number: 2
 *Name: Mira Haldar and Jazmyne Newman
 *This main file accepts input and tests the classes intended to simulate currency
 */
#include <iostream> 
#include <string> 
#include <stdexcept> 
#include "currency.cpp"
#include "dollar.cpp"
#include "pound.cpp"
using namespace std; 


int main() { 
    //dont need the try statement here i think 
    try { 
    Currency* currencies[2]; 
    currencies[0] = new Pound(0); 
    currencies[1] = new Dollar(0); 

    // Doing operations and printing results 
    
    std::cout << "Currency: " << currencies[0]->toString(); 

    std::cout << " Currency: " << currencies[1]->toString() << "\n";  
     
    string command1, command2, command3; 
    double quantity; 
    // cin >> command1; 
    // cin >> command2; 
    // cin >> quantity; 
    // cin >> command3;
    while (command1!= "q"){ 
        cin >> command1; 
        if(command1 != "q"){ 
            cin >> command2; 
            cin >> quantity; 
            cin >> command3;
        
        bool adding = false; 
        if(command1 == "a") { 
            adding = true; 
        }
        int i = 0; 
        if(command2 =="d"){ 
            i = 1; 
        }
        Currency * amount = new Currency();  
       // cout << quantity << " " << output << " " << i << "\n"; 
        try{ 
            if(command3 == "dollar"){ 
                amount =new Dollar(quantity);
            }
            else{ 
                amount = new Pound(quantity); 
            }
            if(adding){ 
                currencies[i]->add(*amount); 
            }
            else{ 
                currencies[i]->subtract(*amount);     
            }
        }
        catch(const exception e){ 
            cout << e.what() << "\n" ; 
        }
        std::cout << "\n" << currencies[0]->toString() << "\n" << currencies[1]->toString() << "\n";  
       // cin >> command1; 
        }
    } 
        cout<< "Press a key to quit.." << endl; 
        cin >> command1; 
    } 
    catch (const std::exception& e) { std::cerr << "Exception: " << e.what() << std::endl; 
    } catch (...) {
    std::cerr << "An unknown exception occurred." << std::endl;
    }

return 0; }