const fs = require('fs');
const cp = require('child_process');

let i = 5;

function quine() {
	if (i < 1)
		return (0);
	if (fs.existsSync("Sully_" + i + ".js"))
		i--;
	fs.writeFileSync("Sully_" + i + ".js", "const fs = require('fs');\nconst cp = require('child_process');\n\nlet i = " + i + ";\n\n" + quine.toString() + "\nquine();");
	cp.execSync("node Sully_" + i + ".js");
}
quine();