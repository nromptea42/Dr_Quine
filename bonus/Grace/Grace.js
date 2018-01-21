var fs = require('fs');
// comment
const A = 'a';
const B = 'b';
const T = function foo() {fs.writeFileSync("Grace_kid.js", "var fs = require('fs');\n// comment\nconst A = 'a';\nconst B = 'b';\nconst T = " + foo.toString() + "\nT();");}
T();