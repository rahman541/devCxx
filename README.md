# C/C++
1. [Binding C/C++ in Nodejs using Foreign Fetch Interface](1-nodejs_ffi)
```
cd 1-nodejs_ffi
npm i
cd lib
node-gyp rebuild
cd ..
# Copy build/Release/math.dll file to this dir.
node index.js
```