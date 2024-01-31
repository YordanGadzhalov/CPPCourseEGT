#include <iostream>
#include <vector>
#include <string>
#include "Book.h"
#include "Library.h"
using namespace std;

int main()
{
    enum Genre { CLASSIC, CRIME, FANTASY };


    Authors Author1("J. K.", "Rowling", "British");
    Authors Author2("George", "Lucas", "American");
    Book HarryPotter("Harry Potter", Author1, "GenreHarry", 1997);
    Book IndianaJones("Indiana Jones", Author2, "GenreIndiana", 1999);
    Library library;
    library.addBook(HarryPotter);
    library.addBook(IndianaJones);
    library.printVector();
    cout << endl;
    library.findBook("Harry");

    //for (int i = 0; i < Library.size(); i++) {
    //  Library.at(i).print();           // Another way to print the vector
    //    cout << endl;
    // }




}