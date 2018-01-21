/*
  outside
*/
function foo() {
return 1
}
function main() {
/*
  inside
*/
foo();
return ("/*\n  outside\n*/\n" + foo.toString() +"\n" + main.toString() + "\nconsole.log(main());")
}
console.log(main());
