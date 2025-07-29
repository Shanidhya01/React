#include <iostream>
#include <string>
#include<vector>
using namespace std;
class Product {
public:
    string name;
    double price;
    int quantity;
    int id;
    // Constructor
    Product(string name, double price, int quantity, int id){
        this->id = id;
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }
    // Display Product Information
    void display() const{
        cout << "ID: " << id << "\n"
                  << "Name: " << name << "\n"
                  << "Price: $" << price << "\n"
                  << "Quantity: " << quantity << "\n";
    }
};
class Inventory {
public:
    vector<Product> products;
    // Add a Product to the Inventory
    void addProduct(const Product& product) {
        products.push_back(product);
    }
    // Remove a Product from the Inventory by ID
    void removeProduct(int id) {
        for (auto it = products.begin(); it != products.end(); ++it) {
            if (it->id == id) {
                products.erase(it);
                cout << "Product with ID " << id << " has been removed.\n";
                return;
            }
        }
        cout << "Product with ID " << id << " not found.\n";
    }
    // Display all Products in the Inventory
    void displayProducts(){
        for (const auto& product : products) {
            product.display();
            cout << "---------------------\n";
        }
    }
};
int main() {
    // Create some products
    Product product1("Laptop", 999.99, 10, 1);
    Product product2("Smartphone", 499.99, 20, 2);
    Product product3("Tablet", 299.99, 15, 3);
    // Create an inventory and add products to it
    Inventory inventory;
    inventory.addProduct(product1);
    inventory.addProduct(product2);
    inventory.addProduct(product3);
    // Display all products
    cout << "All Products:\n";
    inventory.displayProducts();
    // Remove a product by ID
    inventory.removeProduct(2);
    // Display all products after removal
    cout << "After Removal:\n";
    inventory.displayProducts();
    return 0;
}