var fs = require('fs');
var cp = require('child_process');

var i = 5;

(function foo() {
if (i < 1)
return (0);
if (fs.existsSync("Sully_" + i + ".js"))
i--;
fs.writeFileSync("Sully_" + i + ".js", "var fs = require('fs');\nvar cp = require('child_process');\n\nvar i = " + i + ";\n\n(" + foo.toString() + ")();\n");
cp.execSync("node Sully_" + i + ".js");
})();