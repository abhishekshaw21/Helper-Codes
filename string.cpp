//String in C++
#include<string>
//Append
string y;
y += d;
or
push_back(d)
//Length of string
y.length()
//Why not use strlen ??
In C++, a string can contain \0 within the characters but C-style-zero-terminated strings 
can not but at the end. If the std::string has a \0 before the last character then 
strlen reports a length less than the actual length.
Efficiency: O(1)
//Reverse a string
reverse(str2.begin(), str2.end());
//copies substring of str to a char array
char ch[100];
str.copy(ch,length_of_string_to_be_copied,starting_position_to_start_copying);
//returns a substring of length len starting from position pos
//Second argument is optional; if length len isn't passed, then the entire string starting from pos till end is returned as the substring
str.substr(pos,len);
//Searches for the first occurence of the string s in the string str and returns the position of the first occurrence
str.find(s);
//Inserts a substring s into str starting at a specific position.
str.insert(pos,s);
//Convert to string
auto s = std::to_string(42); //converts 42 to string
