// To input the next character in the input stream regardless of what it is, since there are times we don't want to skip whitespaces before inputting a character.
```
char ch;
cin.get(ch);
```

//To skip the rest of the values on a line and go to the beginning of the next line. Skips the number of characters specified in the first parameter or all the characters up 
//to and including the character specified in the second parameter, whichever comes first.
```
cin.ignore(80,'\n'); /*skips 80 characters or skips to the beginning of the next line depending on whether '\n' is encountered before 80 characters are skipped*/
cin.ignore();       /*ignores all input until the next newline character is encountered*/
```

//To prevent from stopping of reading any further input once a whitespace character is encountered, we use getline() which takes as 2 parameters: the first is the name of the input 
//stream and the second is the name of the string variable into which the string is to be read.
```
string str;
getline(cin,str); /*begins reading characters into str and continues until '\n' is encountered which is read but not stored in str*/
```

**getline(..,..) removes newline from the input stream while cin doesn't.**
**cin ignores leading whitespaces but getline doesn't ignore them.**


