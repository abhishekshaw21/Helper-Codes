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
//Sorting a vector in descending order without passing custom comparator function to sort()
sort(myvector.rbegin(),myvector.rend());
//Sorting a vector partially, i.e. sorting elements between the range of [low,mid] by taking all the elements of the array into consideration where mid is considered as the 
//upper bound for elements to be sorted and low is considered as the lower bound for elements that are to be sorted. In the below example, partial_sort() sorts the first 4 elements 
//of myvector
partial_sort(myvector.begin(),myvector.begin()+3,myvector.end());
//Sorting a vector in such a way that the equal elements of myvector are in the same order in the sorted vector as they were in the original one, i.e. sorting in a stable manner
stable_sort(myvector.begin(),myvector.end());
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
sort(): Uses Introsort which is a hybrid of Quicksort, Heapsort and Insertion sort in order to minimize the running time of this function.
stable_sort(): Uses merge sort, so time complexity is O(nlogn).
