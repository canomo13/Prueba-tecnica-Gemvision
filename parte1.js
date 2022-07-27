import { useState } from "react";

import _raw from './txt/Input.txt'; //este archivo esta en mi ubicacion, contiene el texto "Hola Mundo!!..."

 

export default function App() {

  const [raw, setRaw] = useState("");

 

  fetch(_raw)

  .then(r => r.text())

  .then(text => { setRaw(text) });

 

  return (

    <div className="App">

      <h1>{ raw }</h1>

    </div>

  );

}