/*
  comment
*/
function foo() {
	return;
}
function main() {
/*
  comment 2
*/
	foo();
	console.log("/*\n  comment\n*/\n" + foo.toString() +"\n" + main.toString() + "\nmain();")
}
main();
