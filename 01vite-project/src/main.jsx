import React from 'react';
import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
import App from './App.jsx'

function MyApp(){
    return(
        <>
            <h1>Custom React</h1>
        </>
    )
}

// const ReactElement = {
//     type: "a",
//     props: {
//         href: 'https://google.com',
//         target: '_blank'
//     },
//     children: "Click me to go to Google"
// }

const anotherElement = (
    <a href='https://google.com' target='_blank'>Visit Google</a>
)

const reactElement = React.createElement(
    'a',
    {href: 'https://google.com', target: '_blank'},
    "Click me to go to Google"
)

createRoot(document.getElementById('root')).render(
    // reactElement
    <App />
)
