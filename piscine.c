/*
 *  Display the given character to the console.
 */
void my_put_char(char c);

/*
 *  Display the given string to the console, and add a line end character.
 */
void my_put_str(char* str);

/*
 *  Returns the length of string (omitting the string termination character).
 */
int my_str_len(char* str);

/*
 *  Now that you can get the length of a given string, update `my_put_str` to be more efficient
 */
void my_put_str(char* str);

/*
 *  Returns the next character in the alphabet, if the given character is 'z', returns 'a'. Handle both min & maj (e.g: 'B' => 'C', 'f' => 'g').
 */
char my_next_char(char c);

/*
 *  Returns the previous character in the alphabet, if the given character is 'a', returns 'z'. Handle both min & maj (e.g: 'B' => 'A', 'f' => 'e').
 */
char my_previous_char(char c);

/*
 *  Tells if a given int is negative or positive, we consider zero as a positive integer.
 */
bool is_negative(int i);

/*
 *  Tells if a given int is odd.
 */
bool is_odd(int i);

/*
 *  Tells if a given int is even.
 */
bool is_even(int i);

/*
 *  Display all ints (0 to 9)
 */
void my_put_ints();

/*
 *  Display all letters, can handle both upper case and lower case.
 */
void my_put_characters(bool lowerCase);

/*
 *  Return the given string in lower case.
 */
char* to_lower_case(char* str);

/*
 *  Return the given string in upper case.
 */
char* to_upper_case(char* str);

/*
 *  Tells if a given string is a palindrome.
 */
bool is_palindrome(char* str);

/*
 *  Display the given string backward
 */
char* my_put_rev_str(char* str);

/*
 *  Returns the factorial of the given int. (this can and SHOULD be done recursively).
 */
int factorial(int input);

/*
 *  Swap the content of the two given int*
 */
void my_swap(int* a, int* b);

/*
 *  Tells if the given string contains the given substring. If so, return a pointer to the first character of the substring in the main string, else return NULL.
 */
char* strstr(char* str, char* subStr);

/*
 *  Display all given strings.
 */
void my_aff_params(char** args);

/*
 *  Returns an array of strings for each word in the input string. (e.g: "Je suis un gros null" returns ["Je", "suis", "un", "gros", "null"])
 */
char** my_str_to_word_tab(char* str);

/*
 *  Copy the content of source to a new pointer and returns it.
 */
char* my_str_copy(char* source);