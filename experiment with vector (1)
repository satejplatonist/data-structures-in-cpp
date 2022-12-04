#include <iostream>
#include <string>
#include <vector>
int main()
{
    std::cout << "here is your array";

           //created a dynamic array i.e vector
    std::vector<int> arr{ 1,2,3 };
           //printing the 2nd element out
    std::cout << arr[2] << "\n";
    
    //for loop to continuously print the elemets of arr array
    for (int j = 0; j < 10; j++)
    {
        arr.push_back(j);//appending the dynamic array with 10 numbers
    }

    //printing size of array arr
    std::cout << "the size of this array is : " << arr.size() << "\n";
    
    //prints the 1st and last element out  
    std::cout << "the 1st element of array is : " << arr.front() << "\n"
        << "the last element of array is : " << arr.back() << "\n";

    //defining another vector named v
    //array v has "a" , 5 times
    std::vector<std::string> v(5, "a");
    
    v.push_back("d");//appending d in array v

    // for checking the size of vector 
    std::cout << "lets check size of vector v : " << v.size() << "\n";

    //for loop for printing all elements of vector v
    for (int i = 0; i < 6; i++)
    {
        std::cout << "the element : " << v[i] << "\n";   
    }

    // new vector of no of type int is defined here
    std::vector<int> no(2, 3);
    //here .resize() fn is used to resize the array till size 5 
    no.resize(5, 0);

    //to print the resized vector no 
    for(int i=0;i<5;i++)
    {
        std::cout << "the elements in new array are : " << no[i] << "\n";
    }
    std::cout << "size of array no is : " << no.size()<<"\n";

    //erasing element from the dynamic array with 10 numbers
    for (int j = 13; j >3; j--)
    {
        arr.pop_back();
    }

    //printing size of array arr
    std::cout << "the size of this array is : " << arr.size() << "\n";

    //clearing the array
    v.clear();
    std::cout << "the size of this array is : " << v.size() << "\n";

    //copying elements of vector arr in vector s
    std::vector<int> s=arr;
    for (int i = 0; i <s.size(); i++)
    {
        std::cout << "the element : " << s[i] << "\n";
    }

    //checking wheather vector s and arr are equal or not
    if (s == arr)
    {
        std::cout << "both are equal " << "\n";
    }
    else
    {
        std::cout << "no it is false " << "\n";
    }


        return 0;
}
