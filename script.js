var myArgs = process.argv.slice(2);

for(var i = 0; i < myArgs[0].length; i++) {
	process.stdout.write(myArgs[0].charCodeAt(i) + ", ");
}