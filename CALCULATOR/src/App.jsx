import React, { useState } from 'react';

export default function App() {
  const [input, setInput] = useState('');

  const handleClick = (value) => {
    if (value === '=') {
      try {
        setInput(eval(input).toString());
      } catch {
        setInput('Error');
      }
    } else if (value === 'C') {
      setInput('');
    } else if (value === '%') {
      try {
        setInput((parseFloat(input) / 100).toString());
      } catch {
        setInput('Error');
      }
    } else {
      setInput(input + value);
    }
  };

  const buttons = [
    '7', '8', '9', '/',
    '4', '5', '6', '*',
    '1', '2', '3', '-',
    '0', '.', '+', '%',
  ];

  return (
    <div className="min-h-screen flex items-center justify-center bg-blue-100">
      <div className="bg-white p-6 rounded-2xl shadow-lg w-72">
        <h1 className="text-2xl font-bold mb-4 text-center">Calculator</h1>
        <div className="mb-4">
          <input
            type="text"
            value={input}
            className="w-full text-right text-2xl p-2 border rounded"
            readOnly
          />
        </div>
        <div className="grid grid-cols-4 gap-2">
          {/* Place C button at the top (spanning the full width) */}
          <button
            onClick={() => handleClick('C')}
            className="bg-red-500 text-white py-2 rounded col-span-4"
          >
            C
          </button>

          {/* Map over the rest of the buttons */}
          {buttons.map((btn, i) => (
            <button
              key={i}
              onClick={() => handleClick(btn)}
              className="bg-blue-500 text-white py-2 rounded hover:bg-blue-600"
            >
              {btn}
            </button>
          ))}

          {/* Modify the = button to be the same color as C */}
          <button
            onClick={() => handleClick('=')}
            className="bg-red-500 text-white py-2 rounded col-span-4 hover:bg-red-600"
          >
            =
          </button>
        </div>
      </div>
    </div>
  );
}
