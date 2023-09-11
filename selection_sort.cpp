#include <iostream>
#include <algorithm>


template<typename T,std::size_t N>
void selectionSort(T(&array)[N])
{
    int prev_elm = 0;
    int next_elm = 0;
    int counter = 0;
    while (counter < 5)
    {
        for (prev_elm = 0; prev_elm < N - 1; prev_elm++)
        {
            next_elm = prev_elm + 1;
            if (array[prev_elm] > array[next_elm])
            {
                std::swap(array[prev_elm], array[next_elm]);
            }
        }
        counter++;
    }
}

int main()
{
    int array[]{ 4,22,11,15,2 };

    
    const int size_array = sizeof(array) / sizeof(int);
    selectionSort<int, size_array>(array);
   
    for (int i = 0; i < size_array; i++)
    {
        std::cout << array[i]<<" ";
    }
}

