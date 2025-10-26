#include "LinkedList.h"
#include <iostream>

int main(){
    LinkedList myList;

    while(true){
        int userInput;
        std::cout << "\nSelect what to do with your LinkedList:" << std::endl;
        std::cout << "1. Insert" << std::endl;
        std::cout << "2. Search" << std::endl;
        std::cout << "3. Print" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cin >> userInput;


        int input;
        bool isFound; 

        switch(userInput){
            case 1: // Insert case
                std::cout << "Enter DATA number for insertion: ";
                std::cin >> input; 
                myList.insert(input);
                break;

            case 2: // Search case
                std::cout << "Enter DATA number for search: ";
                std::cin >> input; 
                isFound = myList.search(input);

                if(isFound){
                    std::cout << input << " was found in the Linked List!" <<std::endl;
                }
                else{
                    std::cout << input << " was not found in the Linked List." <<std::endl;
                }
                break;

            case 3: // Print case
                myList.print();
                break;

            case 4: //Exit case
                std::cout << "Thank you for using this program!" << std::endl;
                return 0;

            default:
                std::cout << "Invalid input. Try again." << std::endl;
        }
    }



    return 0;
}