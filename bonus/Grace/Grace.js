var fs = require('fs');
/*
	comment
*/
const A = 'a';
const B = 'b';
const T = function foo() {
	try {
		fs.accessSync("Grace_kid.js", fs.constants.F_OK);
	} catch (err) {
		fs.writeFileSync("Grace_kid.js", "var fs = require('fs');\n/*\n\tcomment\n*/\nconst A = 'a';\nconst B = 'b';\nconst T = " + foo.toString() + "\nT();");
	}
	try {
  		fs.accessSync("Grace_kid.js", fs.constants.W_OK);
  		fs.writeFileSync("Grace_kid.js", "var fs = require('fs');\n/*\n\tcomment\n*/\nconst A = 'a';\nconst B = 'b';\nconst T = " + foo.toString() + "\nT();");
  	} catch (err) {
  		console.log("no access to Grace_kid.js");
  	}
}
T();