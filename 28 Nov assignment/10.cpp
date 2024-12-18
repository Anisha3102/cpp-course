
//10 Define a structure Book with fields title, author, and price. Write a program that stores 
// 5 books in an array of structures and sorts the books by their price in descending order using
// a custom sorting function.



#include<bits/stdc++.h>
using namespace std;

    
 struct Book {
    string title;
    string author;
    double price;
};

bool compareByPrice(const Book &b1, const Book &b2) {
    return b1.price > b2.price; 
}

int main() {
    
    Book books[5] = {
        {"The Catcher in the Rye", "J.D. Salinger", 10.99},
        {"1984", "George Orwell", 15.50},
        {"To Kill a Mockingbird", "Harper Lee", 12.30},
        {"The Great Gatsby", "F. Scott Fitzgerald", 20.00},
        {"Moby Dick", "Herman Melville", 8.75}
    };

    sort(books, books + 5, compareByPrice);

    cout << "Books sorted by price in descending order:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Title: " << books[i].title 
             << ", Author: " << books[i].author 
             << ", Price: $" << books[i].price << endl;
    }


    return 0;
}

