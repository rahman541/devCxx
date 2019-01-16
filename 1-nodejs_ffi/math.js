var ffi = require('ffi')
var ref = require('ref')
var int  = ref.types.int

var mathLibLoc = './math.dll'

var math = ffi.Library(mathLibLoc, {
	'add': [int, [int, int]],
	'minus': [int, [int, int]],
	'multiply': [int, [int, int]],
	'helloWorld': ['string', []]
})

module.exports = math