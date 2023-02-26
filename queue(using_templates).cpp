#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#define size 10

// queue data structure using templates

template <typename T> //template declaration for class 
class queue   //class of queue<T> type
{
    public:
    T data;
    T array[size];
    int f{-1},r{-1};
    public:
    inline void add(T const& ref); //function to add elements in queue
    inline void pop();             //function to pop elements
    bool empty();                  //whether queue is empty or not
    bool full();                   //whether queue is full or not
    T peek(int const x);           //to find the element in queue
    void front();                  //to see 1st element in queue 
    void back();                   //to see last element in queue
    inline int size_queue();       //to get size of queue or number of elements in queue
};

template <typename T>
inline void queue<T>::add(T const& ref) // return_type class_type::function_name() , class name and class type are different
{
   if(f==r==-1)
   {
      array[r]=ref;
      f=f+1;
      r=r+1;
   }
   else if(r==size-1)
   {
       std::cout<<"queue is full\n";
   }
   else
   {
       array[r]=ref;
       r=r+1;
   }
}

template <typename T>
inline void queue<T>::pop()  // return_type class_type::function_name()
{
    if(f!=r)
    {
        T temp=array[f];
        f=f+1;
        std::cout<<"value is : "<<temp<<"\n";
    }
    else
    {
        std::cout<<"error\n";
    }
}

template <typename T>
bool queue<T>::empty() // return_type class_type::function_name()
{
    std::cout<<std::boolalpha;
    if(r==f==-1)
    {
        return 1;
    }
    return 0;
}

template <typename T>
bool queue<T>::full() // return_type class_type::function_name()
{
    std::cout<<std::boolalpha;
    if(r==size-1)
    {
        return 1;
    }
    return 0;
}

template <typename T>
T queue<T>::peek(int const x) // return_type class_type::function_name()
{
   return array[x-1];
}

template <typename T>
void queue<T>::front() // return_type class_type::function_name()
{
    int i{f};
    std::cout<<"front element is : "<<array[i]<<"\n";
}

template <typename T>
void queue<T>::back() // return_type class_type::function_name()
{
    int i{r};
    std::cout<<"last or rear element is : "<<array[i]<<"\n";
}

template <typename T>
inline int queue<T>::size_queue() // return_type class_type::function_name()
{
    int temp=(r-f);
    return temp;
}

int main()
{
    queue<std::string> q;  // we took string data type you can use int,double,float,etc.
                           // just by declaring as queue<int> or queue<double> etc.  
    q.add("hello");
    q.add("satej");
    q.add("how are you");
    q.add("i am fine");
  
    std::cout<<"the size of queue is : "<<q.size_queue()<<"\n";
  
    q.pop();
    q.pop();
  
    std::cout<<"the queue is empty : "<<q.empty()<<"\n";
  
    std::cout<<"the queue is full : "<<q.full()<<"\n";
  
    q.front();
  
    q.back();
  
    std::cout<<"the size of queue is : "<<q.size_queue()<<"\n";
    
    
    return 0;
}
