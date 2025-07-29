import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {

  const [counter, setCounter] =useState(0)

  // let counter = 15

  const addvalue = () => {
    // counter = counter + 1
    setCounter(counter + 1)
  }
  const decreseValue = () => {
    // counter = counter - 1
    setCounter(counter - 1)
  }

  return (
    <>
      <h1>Chai aur React</h1>
      <h2>Counter value: {counter}</h2>

      <button
      onClick={addvalue}
      >Add Value {counter}</button>
      <br/>
      <button
      onClick={decreseValue}
      >Decrease Value {counter}</button>
      <p>Footer : {counter}</p>
    </>
  )
}

export default App
