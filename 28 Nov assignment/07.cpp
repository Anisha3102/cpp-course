
//07 Define a structure Product with fields ProductID, ProductName, and Price. Create a vector to 
// store 10 products. Write a program to print all products whose price is above a given threshold.



#include<bits/stdc++.h>
using namespace std;

struct Product {
    int ProductID;
    string ProductName;
    double Price;
};

int main() {
    
    vector<Product> products(10);
    
    cout << "Enter details for 10 products (ProductID, ProductName, Price):\n";
    for (int i = 0; i < 10; ++i) {
        cout << "Product " << i + 1 << ":\n";
        cout << "ProductID: ";
        cin >> products[i].ProductID;
        cin.ignore(); 
        cout << "ProductName: ";
        getline(cin, products[i].ProductName);
        cout << "Price: ";
        cin >> products[i].Price;
    }

    double threshold;
    cout << "Enter the price threshold: ";
    cin >> threshold;

    cout << "\nProducts with price above " << threshold << ":\n";
    bool found = false;
    for (const auto& product : products) {
        if (product.Price > threshold) {
            cout << "ProductID: " << product.ProductID
                 << ", ProductName: " << product.ProductName
                 << ", Price: " << product.Price << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No products found with price above " << threshold << ".\n";
    }

    return 0;
}

