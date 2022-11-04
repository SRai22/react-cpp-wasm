import React from 'react';
import ReactDOM from 'react-dom';

import Calculator from './Calculator.js';
import CalculatorWASM from './Calculator.wasm';

const calculator = Calculator({
    locateFile: () => {
        return CalculatorWASM;
    }
});

calculator.then((core) => {
    console.log(core.add(1, 2));
});

ReactDOM.render(
    <div>
        <h1>react-cpp-wasm-calculator-demo</h1>
    </div>,
    document.getElementById('root')
);