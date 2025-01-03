# Strings
Storing a character using char datatype is done by:
```cpp
char ch = 'a';
```
Strings are objects of a class std::string in C++.

These are used to represent a sequence of characters.

Syntax:
```cpp
    string string_name = "abcd";
    //OR
    string string_name("abcd");
```

### Indexing of Characters in a String
Indexing of characters in a string is similar to that of arrays. (0 based indexing)

At nth index, there is a null character which shows end of string i.e. every string has a null character at the end.

### ASCII Values
Every character has a numeric value attached to them.
- A-Z --> 65-90
- a-z --> 79-122
- 0-9 --> 48-57
- Other values: https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

## String vs Character Array:
| String | Character Array |
| ------- | ------- |
| String is a class and string variables are objects of this class. | Array of characters is a datatype. |
| Syntax: ```string string_name;``` | Syntax: ```char array_name[size];``` |
| Dynamic memory allocation | Static memory allocation |
| No pre-allocated memory | Unused allocated memory gets wasted. |
| There are number of in-built functions in strings. | There are not much in-built functions in character arrays. |
| Strings are slower. | Character arrays are faster. |

## Some In-built functions:
1. **reverse()**: Reverse a string from starting_ptr to end_ptr.
```cpp
    reverse(ptr1, ptr2);
```

Time Complexity: O(length of string)

2. **substr()**: Find a substring of a given string
```cpp
    string_name.substr(position, length);
    string_name.substr(position); //If length is not provided, it will print string from given position till the end.
```

Time Complexity: O(length)

3. **'+' Operator**: Concatenate strings
```cpp
    S1 + S2;
    //OR
    S1 +=S2; //but it is not equal to S1 = S1 + S2
```
- S1 +=S2 --> S2 is getting appended after S1.
- S1 = S1 + S2 --> A copy string for S1 is getting created leading to extra space.

> *Note*: strcat() is used to concatenate character arrays.

4. **push_back()**: Insert character at the end of the string
```cpp
    string_name.push_back(char);
```

5. **size()/length()**: Find length of a string
```cpp
    string_name.size(); //Works in O(1) time --> faster
    string_name.length(); 
```
> *Note*: strlen() is used to find length of character array.
> Time Complexity: O(N)

6. **to_string()**: Convert numeric value to string
```cpp
    to_string(num);
```

## String Questions
1. [C++ Strings](https://www.geeksforgeeks.org/problems/c-strings4609/1?page=1&category=Strings&sortBy=difficulty)

2. [Check String](https://www.geeksforgeeks.org/problems/check-string1818/1?page=1&category=Strings&sortBy=difficulty)

3. [Sort a String](https://www.geeksforgeeks.org/problems/sort-a-string2943/1?page=2&category=Strings&difficulty=School,Basic&sortBy=submissions)

4. [Anagram](https://www.geeksforgeeks.org/problems/anagram-1587115620/1) OR [242. Valid Anagram](https://leetcode.com/problems/valid-anagram)

5. [Isomorphic Strings](https://www.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1) OR [205. Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings)

6. [Longest Common Prefix of Strings](https://www.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1) OR [Longest common prefix](https://www.geeksforgeeks.org/problems/minimum-shift-for-longest-common-prefix0759/1) OR [14. Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix)

7. [Decode the string](https://www.geeksforgeeks.org/problems/decode-the-string2444/1) OR [394. Decode String](https://leetcode.com/problems/decode-string)

8. [Maximize Number of 1's](https://www.geeksforgeeks.org/problems/maximize-number-of-1s0905/1) OR [1004. Max Consecutive Ones III](https://leetcode.com/problems/max-consecutive-ones-iii)