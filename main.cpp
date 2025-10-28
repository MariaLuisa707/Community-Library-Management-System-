#include <iostream>
#include "Book.cpp"
using namespace std;

int main() {
    Book books[5];
books[0].setBookDetails("C++ Basics", "John Smith", 1001, true);
    books[1].setBookDetails("Python Guide", "Alice Brown", 1002, true);
    books[2].setBookDetails("Data Structures", "David Lee", 1003, true);
    books[3].setBookDetails("Algorithms Made Easy", "Maria Green", 1004, true);
    books[4].setBookDetails("OOP Concepts", "Sophia Johnson", 1005, true);
    // Initialize 5 books
    books[0].setBookDetails("C++ Basics", "John Smith", "101", true);
    books[1].setBookDetails("Data Structures", "Jane Doe", "102", true);
    books[2].setBookDetails("Algorithms", "Bob Lee", "103", true);
    books[3].setBookDetails("Database Systems", "Mary Ann", "104", true);
    books[4].setBookDetails("Software Design", "David Kim", "105", true);

    string inputISBN;
    while (true) {
        cout << "\nEnter ISBN of the book to borrow (or 0 to exit): ";
        cin >> inputISBN;

        if (inputISBN == "0") break;

        bool found = false;
        for (int i = 0; i < 5; i++) {
            if (books[i].getISBN() == inputISBN) {
                found = true;
                if (books[i].isAvailable())
                    books[i].borrowBook();
                else
                    cout << "Book is not available.\n";
            }
        }

        if (!found)
            cout << "Book with ISBN " << inputISBN << " not found.\n";
    }

    cout << "\nFinal list of books:\n";
    for (int i = 0; i < 5; i++) {
        books[i].displayBookDetails();
    }

    return 0;
}