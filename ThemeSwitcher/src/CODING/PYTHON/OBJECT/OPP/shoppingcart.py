# Write a Python program to create a class representing a shopping cart.
# Include methods for adding and removing items, and calculating the total price
class ShoppingCart:
    def __init__ (self):
        self.items = []
    def add_item(self,item_name,qty):
        item = (item_name ,qty)
        self.items.append(item)
    def remove_item(self,item_name):
        for item in self.items:
            if item[0] == item_name:
                self.items.remove(item)
                break
    def calculate_total(self):
        total =0
        for item in self.items:
            total += item[1]
        return total
    
cart = ShoppingCart()

cart.add_item("PAPAYA",100)
cart.add_item("GUAVA",200)
cart.add_item("ORANGE",150)

print("CURRENT ITEM IN CART : ")
for item in cart.items:
    print(item[0], "-", item[1])
    
total_qty = cart.calculate_total()
print("TOtaL QUANTITY: ",total_qty)

cart.remove_item("ORANGE")
print("\n UPDATED ITEMS IN THE SHOPPING CART ARE : ")
for item in cart.items:
    print(item[0], " - ", item[1])
total_qty = cart.calculate_total()
print(" TOTAL QUANTITY : ",total_qty)