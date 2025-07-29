import { useState, useContext } from "react";
import { TodoContext } from "../contexts";

function TodoForm() {
  const [todoText, setTodoText] = useState("");
  const { addTodo } = useContext(TodoContext);

  const handleSubmit = (e) => {
    e.preventDefault();
    if (!todoText.trim()) return;
    addTodo({ text: todoText });
    setTodoText("");
  };

  return (
    <form onSubmit={handleSubmit} className="flex gap-2">
      <input
        type="text"
        placeholder="Write Todo..."
        value={todoText}
        onChange={(e) => setTodoText(e.target.value)}
        className="flex-1 px-4 py-2 rounded bg-gray-600 text-white"
      />
      <button
        type="submit"
        className="px-4 py-2 bg-green-600 rounded text-white"
      >
        Add
      </button>
    </form>
  );
}

export default TodoForm;
