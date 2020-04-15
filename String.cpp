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
//Convert to string
auto s = std::to_string(42); //converts 42 to string
