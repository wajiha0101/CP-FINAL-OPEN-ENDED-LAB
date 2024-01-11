#include<iostream>
#include<string>
using namespace std;

struct books {
   std:: string title;
    int publication_year;
    string genre;
    string author;
    int pages;
};

const int total_books = 6;
books book[total_books]; // Specify the size of the array

void details(books book[]);
void catagories(const books book[], int fiction[], int non_fiction[], int& numfiction, int& numnon_fiction);
void earlist_book(books& earliest_book);
void display_details();

int main() {
    details(book);
    display_details();

    int fiction[total_books], non_fiction[total_books];
    int numFiction = 0, numNonFiction = 0;
    catagories(book, fiction, non_fiction, numFiction, numNonFiction);

    books earliestBook;
    earlist_book(earliestBook);

    cout << "Earliest Book:" << endl;
    cout << "Title: " << earliestBook.title << endl;

    return 0;
}

void details(books book[]) {
    for (int i = 0; i < total_books; i++) {
        cout << "Enter details of your books:" << endl;
        cout << "Title:";
        getline(cin, book[i].title);
        cout << "Author:";
        getline(cin, book[i].author);
        cout << "Publication_year:";
        cin >> book[i].publication_year;
        cin.ignore();
        cout << "Genre:";
        getline(cin, book[i].genre);
        cout << "Pages:";
        cin >> book[i].pages;
        cin.ignore();
    }
}

void catagories(const books book[], int fiction[], int non_fiction[], int& numfiction, int& numnon_fiction) {
    for (int i = 0; i < total_books; i++) {
        if (book[i].genre == "Fiction") {
            fiction[numfiction++] = i;
        }
        else
            non_fiction[numnon_fiction++] = i;
    }
}

void earlist_book(books& earliest_book) {
    earliest_book = book[0];
    for (int i = 1; i < total_books; i++) {
        if (book[i].publication_year < earliest_book.publication_year) {
            earliest_book = book[i];
        }
    }
}

void display_details() {
    cout << "Details of books are:" << endl;
    for (int i = 0; i < total_books; i++) {
        cout << "Title: " << book[i].title << endl;
        cout << "Author: " << book[i].author << endl;
        cout << "Publication_year: " << book[i].publication_year << endl;
        cout << "Genre: " << book[i].genre << endl;
        cout << "Pages: " << book[i].pages << endl;
        cout << endl;
    }
}













/*#include<iostream>
#include<string>
using namespace std;

struct books {
    string title;
    int publication_year;
    string genre;
    string author;
    int pages;
};
const int total_books = 6;
books book[];

void details(books book[]) {
    for (int i = 0;i < total_books;i++) {
        cout << "Enter details of your books:";
        cout << "Title:";
        getline(cin, book[i].title);
        cout << "Author:";
        getline(cin, book[i].author);
        cout << "Publication_year:";
        cin >> book[i].publication_year;
        cout << "Genre:";
        getline(cin, book[i].genre);
        cout << "Pages:";
        cin >> book[i].pages;
    }
}
void catagories(const books book[], int fiction[], int non_fiction[], int& numfiction, int& numnon_fiction) {
    for (int i = 0;i < total_books;i++) {
        if (book[i].genre == "Fiction") {
            fiction[numfiction++] = book[i];
        }
        else
            non_fiction[numnon_fiction++] = book[i];
    }

}
void earlist_book(books earliest_book) {
    earliest_book = book[0];
    for (int i = 1;1 < total_books;i++) {
        if (book[i].publication_year < earliest_book) {
            earliest_book = book[i];
        }
    }
}
void display_details() {
    cout << "detail of books are:";
    for (int i = 0;i < total_books;i++) {
        cout << "Titel" << book[i].title << endl;
        cout << "Author" << book[i].author << endl;
        cout << "Publication_year" << book[i].publication_year << endl;
        cout << "Genre" << book[i].genre << endl;
        cout << "Pages" << book[i].pages << endl;
        cout << endl;
    }
}
int main() {
    cout << "Details" << display_details() << endl;
    cout << "Catagories" << catagories(books book[], fiction[], non_fiction[], numfiction, numnon_fiction) << endl;
    cout << "Nearst publiction year:" << earlist_book(earliest_book) << endl;
    return 0;
}
*/






