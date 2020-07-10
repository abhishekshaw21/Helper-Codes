//New Stuff
for(auto a:A)
//this iterates over A element by element
max({a,b,c});
min({a,b,c});
//Get nth element
/*
Sort element in range
Rearranges the elements in the range [first,last), 
in such a way that the element at the nth position is the element that would be in that position in a sorted sequence.
The other elements are left without any specific order, 
except that none of the elements preceding nth are greater than it, 
and none of the elements following it are less.

The elements are compared using operator< for the first version, and comp for the second.
*/

nth_element(begin(cs), begin(cs) + cs.size() / 2, end(cs), [](vector<int> &a, vector<int> &b) {
    return (a[0] - a[1] < b[0] - b[1]);
  });

//C++ 11 onwards
//Previously
vector.begin()
//Now
begin(c++)