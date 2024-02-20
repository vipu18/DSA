//#include <bits/stdc++.h> //includes everything (string, math)
#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main()
//array
/*  {
    array <int,5> arr = {1, 2, 3, 8, 9};
 for (auto it = arr.begin(); it != arr.end(); it++) //begin ()
    {
        cout << "" << *it;
    }
    cout << endl;
    for (auto it = arr.cbegin(); it != arr.cend(); it++)
    {
        cout << "" << *it;
    }  
    for (auto it = arr.rbegin(); it != arr.rend(); it++) //begin ()
    {
        cout << "" << *it;
    } 
    for (auto it = arr.crbegin(); it < arr.crend(); it++) //begin ()
    {
        cout << "" << *it;
    } 
    for (auto it = arr.crend(); it != arr.crbegin(); it++) //begin ()
    for (auto it = arr.crend(); it != arr.crbegin(); it++) //begin ()
    {
        cout << "" << *it;
    }
    cout << endl;
    return 0;
 } */

 //string
/*  {
    string vipu = "vipu18";
    for(auto c:vipu)
    {
        cout << c << " ";
    }
    return 0;
 } */

 //vectors
/*  {
    vector <int> vipu;
    cout << "the size is "<< vipu.size() << endl;
    vipu.push_back (0);
    vipu.push_back (2);
    vipu.clear();
    cout << "the size is: "<< vipu.size() << endl;
    for (auto c:vipu)
    {
        cout << c << "";
    }
    vipu.clear();
    return 0;
 } */

 //copying a vector
/*  {
    vector <int>vipu1, vipu2, vipu4;
    vipu1.push_back(12);
    vipu2.push_back(13);
    // vector <int> vipu3 (vipu2); //1 way
    // vector <int> vipu3 (vipu1.begin(), vipu1.end()); //2nd way to print the vector
    //vipu4.swap(vipu1); //to swap a varibale using vector
    for (auto v:vipu4)
    {
        cout<< v << "";
    }
    return 0;
 } */

 //to print some elements
/*  {
    vector <int> v1;
    v1.emplace_back(12);
    v1.emplace_back(14);
    v1.emplace_back(13);
    // vector <int> v2 (v1.begin(), v1.begin() + 2); // using begin()
    vector <int> v2 (v1.begin(), v1.end() - 1); // using end()
    for (auto v:v2)
    {
        cout << v << " ";
    }
    return 0;
 } */

 //2d vector
 /* {
    vector<vector<int>>vec;
    vector <int>vec1;
    vec1.push_back(1);
    vec1.push_back(2);
    
    vector <int>vec2;
    vec2.push_back(1);
    vec2.push_back(2);
    
    vector <int>vec3;
    vec2.push_back(2);
    vec2.push_back(3);
    
    vec.push_back(vec1);
    vec.push_back(vec2);
    vec.push_back(vec3);
//modern way of printing
    for (auto vctr:vec)
    {
        for (auto vect: vctr)
        {
            cout << vect << " ";
        }
        cout << endl;
    } 

//traditional way to print a 2d vector
     for(int i=0; i<vec.size(); i++)
    {
        for (int j=0; j<vec[i].size(); j++)
        {
            cout << vec [i] [j] << " ";
        }
        cout << endl;
    }
    return 0;   
 } */

 //defining a 10*20 vector

/* {
    vector <vector<int>> vec (10, vector<int>(20,0));
} */

//array of vectors
/* {
    vector<int> vec[4];
    vec[0].push_back(32);
    return 0;
} */

//3d-vector
/* {
    //10*20*30
    vector<vector<vector<int>>> vec (10, vector<vector<int> vipu(20, vector<int> (30,0)));
} */