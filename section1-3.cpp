/*
 * Section 1.3
 */
int main() {
	// Exercise 1.7
	/* I believe that this should not work
	 * as in it has /* incorrectly nested */ comments
	 * /* Although I think the wording of the question is a little off, 
	 * because this section is called "Comment Pairs Do Not Nest",
	 * so there is no way to incorrectly nest comments, since they do not nest. */
	 */
	// Exercise 1.8: I thought only the 2nd worked, but the 1st and 4th do as well
	std::cout << "/*";  // legal (initially thought illegal)
	std::cout << "*/";  // legal
	std::cout << /* "*/" */";  // illegal (originally had a */ at the end of the statement)
	std::cout << /*  "*/" /*  "/*"  */;  // legal (initially thought illegal)
	// Lesson: the /* comment starter is legal in a string, just can't expect it to be a comment.

	return 0;
}