# Strings
- Storing a character using char datatype is done by:
```cpp
char ch = 'a';
```
- Strings are objects of a class std::string in C++.
- These are used to represent a sequence of characters.

## Definition
1. 
```cpp
string string_name = "abcd";
```
2. 
```cpp
string string_name("abcd");
```

## Indexing of Characters in a String
- Indexing of characters in a string is similar to that of arrays. (0 based indexing)
- At n index --> null character --> shows end of string
- Every string has a null character at the end.

## ASCII Values
- Every character has a numeric value attached to them.
- A-Z --> 65-90
- a-z --> 79-122
- 0-9 --> 48-57
- Other values: https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

## String vs Character Array:
1. String is a class and string variables are objects of this class.
Array of characters is a datatype.
2. string string_name;
char array_name[size];
3. Dynamic memory allocation in strings.
Static memory allocation in character arrays.
4. No pre-allocated memory in strings.
Unused allocated memory gets wasted in character arrays.
5. There are number of in-built functions in strings.
Not much in-built functions in character arrays.
6. Strings are slower.
Character arrays are faster.

## Some In-built functions:
1. reverse(): reverse a string from starting ptr to end ptr.
```cpp
reverse(ptr1, ptr2);
```
Time Complexity: O(length of string)

2. substr(): find a substring of a given string
```cpp
string_name.substr(position, length);
```
If length is not provided, it will print of given position to end.
Time Complexity: O(length)

3. '+' Operator: concatenate strings
```cpp
S1 + S2; //OR
S1+=S2; //but it is not equal to S1 = S1 + S2
```
S1 +=S2 --> S2 is getting appended after S1
S1 = S1 + S2 --> A copy string for S1 is getting created leading to extra space
Note: strcat() is used to concatenate character arrays.

4. push_back(): insert character at the end of the string
```cpp
string_name.push_back(char);
```

5. size()/length(): find length of a string
```cpp
string_name.size(); //Works in O(1) time --> faster
string_name.length(); 
```
Note: strlen() is used to find length of character array; Time Complexity: O(N)

6. to_string(): convert numeric value to string
```cpp
to_string(num);
```

## String Questions
1. [C++ Strings](https://www.geeksforgeeks.org/problems/c-strings4609/1?page=1&category=Strings&sortBy=difficulty)

2. [Check String](https://www.geeksforgeeks.org/problems/check-string1818/1?page=1&category=Strings&sortBy=difficulty)

3. [Sort a String](https://www.geeksforgeeks.org/problems/sort-a-string2943/1?page=2&category=Strings&difficulty=School,Basic&sortBy=submissions) 