//array 
begin() //point to the 1st element
end()  //points to the empty cell after last elememto
rbegin() //begins from the last elemento
rend() //points to the empty cell before 1st cell

//stings
	// size 
	cout << arr.size(); 
	// front 
	cout << arr.front(); // arr.at(0); 
	// back
	cout << arr.back(); // arr.at(arr.size() - 1); 

//array types
{a empty cell}      1           2           3            4            5         {a empty cell}
    rend()        begin()                                            rbegin()       end()
                                                                             