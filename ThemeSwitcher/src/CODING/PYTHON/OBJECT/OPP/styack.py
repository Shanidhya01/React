# Write a Python program to create a class representing a stack data structure.
# Include methods for pushing and popping elements
class Stack :
    def __init__ (self):
        self.item = []
        
    def push(self,item):
        self.item.append(item)
    def pop(self):
        if not self.is_empty():
            return self.item.pop()
        else:
            return "Cannot pop from an empty stack."
    def is_empty(self):
        return len(self.item) == 0
    def size(self):
        return len(self.item)
    # Peek at the top item of the stack without removing it, if the stack is not empty
       
    def peek(self):
        if not self.is_empty():
            return self.item[-1]
        else:
            return "Empty Stack."

stack = Stack()
stack.push(0)
stack.push(1)
stack.push(2)
stack.push(3)
stack.push(4)

print("STACK SIZE : ",stack.size())
print("TOP ELEMENT:  ",stack.peek())

popped_item = stack.pop()
print("\n popped item  : ",popped_item)
print("\nSTACK SIZE : ",stack.size())  
print("TOP ELEMENT:  ",stack.peek()) 

stack1= Stack()
print("\nSTACK SIZE : ",stack1.size())
popped_item = stack1.pop()
print("\n popped item  : ",popped_item)
     