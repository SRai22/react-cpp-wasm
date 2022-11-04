# Repository for learning react.js and webassembly based applications

## Starting out..
* Create a new directory <br />
``` $mkdir react-cpp-wasm && cd react-cpp-wasm``` <br />
* Initialize npm and create the package.json <br />
``` $npm init -y ``` <br />
* Install react packages. starting out with just [react](https://reactjs.org/) and 
  [react-dom](https://reactjs.org/docs/react-dom.html) <br />
``` $npm i -D react react-dom ``` <br />
* Create two new files index.html and index.js <br />
  Add the basic structure here to start out <br />

* Install [webpack](https://webpack.js.org/) and [babel](https://babeljs.io/docs/en/) packages for creating webpack dev server and compiling <br />
```$npm install -D webpack webpack-dev-server webpack-cli @babel/core babel-loader @babel/preset-react html-webpack-plugin ```<br />
* Create webpack.config.js file for storing webpack configurations <br />

* Add these two script lines to package.json as part of scripts <br />
```"start": "webpack serve" ``` <br />
```"build": "webpack"``` <br />

* Start the webapp to visualize the progress so far <br />
```npm run start``` 

* Next create webassembly package from cpp<br />

* The package for compiling C or C++ projects as webassembly is [Emscripten](https://emscripten.org/docs/introducing_emscripten/index.html) and its installation can be found [here](https://emscripten.org/docs/getting_started/downloads.html) <br />

* Create the C++ directory, where the cpp sources will be placed <br />
```$mkdir cpp && cd cpp``` <br />

* Create new files for the application. Here is Calculator.h and Calculator.cpp <br />

* Create new directory for writing the emscripten bindings <br />
```$mkdir bindings && cd bindings``` <br />

* Add bindingfile CalculatorBindings.cpp which will be used by emscripten to compile wasm files <br />

* Compiling the cpp source into webassembly(wasm) and corresponding .js files using emscripten <br />
```$emcc --bind bindings/CalculatorBindings.cpp -Icpp/ cpp/*.cpp -s WASM=1 -s MODULARIZE=1 -o Calculator.js -s LLD_REPORT_UNDEFINED  --no-entry``` <br />



