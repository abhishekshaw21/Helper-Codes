/*
Valid Assumption:
The elements of a vector are stored contiguously, 
meaning that if v is a vector where T is some type other than bool, 
then it obeys the identity &v[n] == &v[0] + n for all 0 <= n < v.size().

*/
//Swap two variables
swap(first,second);
//Maximum
max(first,second);
//Minimum
min(first,second);
//Sort a vector
sort(myvector.begin(), myvector.end());
//Reverse Sort a vector
reverse(myvector.begin(), myvector.end());
//Initialize a 2 D vector
vector::vector(count, value);
//Eg.
vector<vector<int>> result(size,vector<int>(size));
//Pop Element from Vector
myvector.pop_back();
//Get element before popping
val = myvector.back();
//Memset equivalent
std::fill(myVector.begin(), myVector.end(), 0);
//Delete element from vector
// Deletes the second element (vec[1])
vec.erase(vec.begin() + 1);
//Insert at a sepcific position
v1.insert(v1.begin()+i, v2[i])


//Time Complexity:
size(): Returns the number of elements in the vector. Its time complexity is O(1).
push_back(): Inserts a new element at the end of the vector. Its time complexity is O(1).
pop_back(): Removes the last element from the vector. Its time complexity is O(1).
front(): Returns the reference to the first element. Its time complexity is O(1).

