#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    string ISBN;
    bool available;

public:
    // Method to assign book details
    void setBookDetails(string t, string a, string i, bool avail) {
        title = t;
        author = a;
        ISBN = i;
        available = avail;
    }

    // Method to display book details
    void displayBookDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Availability: " << (available ? "Available" : "Borrowed") << endl;
        cout << "---------------------------" << endl;
    }

    // Borrow the book
    void borrowBook() {
        if (available) {
            available = false;
            cout << "You borrowed \"" << title << "\" successfully!\n";
        } else {
            cout << "Sorry! \"" << title << "\" is already borrowed.\n";
        }
    }

    // Return the book
    void returnBook() {
        if (!available) {
            available = true;
            cout << "You returned \"" << title << "\" successfully!\n";
        } else {
            cout << "This book was not borrowed.\n";
        }
    }

    string getISBN() { return ISBN; }
    bool isAvailable() { return available; }
};