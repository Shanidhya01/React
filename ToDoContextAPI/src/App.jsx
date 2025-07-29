import { useState, useEffect } from "react";
import { TodoProvider } from "./contexts";
import "./App.css";
import TodoForm from "./components/TodoForm";
import TodoItem from "./components/TodoItem";

function App() {
  const [todos, setTodos] = useState([]);

  // Load todos from localStorage on mount
  useEffect(() => {
    try {
      const storedTodos = JSON.parse(localStorage.getItem("todos")) || [];
      setTodos(storedTodos);
      console.log("Loaded todos from localStorage:", storedTodos);
    } catch (error) {
      console.error("Error loading todos from localStorage:", error);
    }
  }, []);

  // Save todos to localStorage whenever the todos state changes
  useEffect(() => {
    try {
      localStorage.setItem("todos", JSON.stringify(todos));
      console.log("Todos saved to localStorage:", todos);
    } catch (error) {
      console.error("Error saving todos to localStorage:", error);
    }
  }, [todos]);

  // Function to add a new todo
  const addTodo = (todo) => {
    setTodos((prev) => [{ id: Date.now(), completed: false, ...todo }, ...prev]);
  };

  // Function to update a todo
  const updateTodo = (id, updatedTodo) => {
    setTodos((prev) =>
      prev.map((todo) => (todo.id === id ? { ...todo, ...updatedTodo } : todo))
    );
  };

  // Function to delete a todo
  const deleteTodo = (id) => {
    setTodos((prev) => prev.filter((todo) => todo.id !== id));
  };

  // Function to toggle completion status of a todo
  const toggleComplete = (id) => {
    setTodos((prev) =>
      prev.map((todo) =>
        todo.id === id ? { ...todo, completed: !todo.completed } : todo
      )
    );
  };

  return (
    <TodoProvider value={{ todos, addTodo, updateTodo, deleteTodo, toggleComplete }}>
      <div className="bg-[#172842] min-h-screen py-8">
        <div className="w-full max-w-2xl mx-auto shadow-md rounded-lg px-4 py-3 text-white">
          <h1 className="text-2xl font-bold text-center mb-8 mt-2">Manage Your Todos</h1>
          <div className="mb-4">
            <TodoForm />
          </div>
          <div className="flex flex-wrap gap-y-3">
            {todos.map((todo) => (
              <div key={todo.id} className="w-full">
                <TodoItem todo={todo} />
              </div>
            ))}
          </div>
        </div>
      </div>
    </TodoProvider>
  );
}

export default App;