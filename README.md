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
