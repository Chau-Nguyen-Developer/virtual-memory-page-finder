//Programmer: Chau Nguyen

/**
 * This program will calculate the page number and offset of a given virtual 
 * memory address, given the fact that the users will provide the virtual address (in decimal) and 
 * page size in KB from console. 
 */

#include <iostream>
int KB = 1024;
int main()
{
    //Prompt users for input
    std::cout << "Enter page size (in KB): " << std::flush;
    int pageSize = 0;
    std::cin >> pageSize;
    std::cout << "Enter a virtual address: " << std::flush;
    int virtualAddress = 0;
    std::cin >> virtualAddress;

    //Do calculation
    int pageSizeInBytes = pageSize * KB;
    std::cout << "The address " << virtualAddress << "contains: \n" ;
    std::cout << "Page number = " << virtualAddress / pageSizeInBytes << "\n";
    std::cout << "Offset = " << virtualAddress % pageSizeInBytes <<"\n";

    return 0;
}