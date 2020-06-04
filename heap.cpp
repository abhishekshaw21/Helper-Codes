//Heap
vector<int> stones;
make_heap(stones.begin(),stones.end());
//Pop
pop_heap(stones.begin(),stones.end());//takes the maximum element and stores it in the last element of the vector.
stones.back();//returns last element of the vector
stones.pop_back();// pops the last element of the vector
//Push
stones.push_back(x);//pushes the element to the last position in the vector
push_heap(stones.begin(),stones.end());//performs heapify operation assuming last element has been deleted. 

//Link
// https://en.cppreference.com/w/cpp/algorithm/make_heap