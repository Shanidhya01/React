import { useContext, useState } from "react";
import { TodoContext } from "../contexts";

function TodoItem({ todo }) {
  const { deleteTodo, updateTodo, toggleComplete } = useContext(TodoContext);
  const [isEditing, setIsEditing] = useState(false);
  const [newText, setNewText] = useState(todo.text);

  const handleUpdate = () => {
    if (!newText.trim()) return;
    updateTodo(todo.id, { text: newText });
    setIsEditing(false);
  };

  return (
    <div className={`flex items-center justify-between p-4 rounded ${todo.completed ? "bg-green-200" : "bg-purple-300"}`}>
      {isEditing ? (
        <input
          value={newText}
          onChange={(e) => setNewText(e.target.value)}
          className="flex-1 px-2"
        />
      ) : (
        <span className={`${todo.completed ? "line-through" : ""}`}>
          {todo.text}
        </span>
      )}

      <div className="flex gap-2">
        <input
          type="checkbox"
          checked={todo.completed}
          onChange={() => toggleComplete(todo.id)}
        />
        {isEditing ? (
          <button onClick={handleUpdate} className="bg-blue-500 px-2">✔</button>
        ) : (
          <button onClick={() => setIsEditing(true)} className="bg-yellow-500 px-2">✎</button>
        )}
        <button onClick={() => deleteTodo(todo.id)} className="bg-red-500 px-2">✖</button>
      </div>
    </div>
  );
}

export default TodoItem;
