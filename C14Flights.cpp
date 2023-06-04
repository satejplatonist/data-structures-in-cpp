/* C14- There are flight paths between cities. If there is a flight between city A and city B then
there is an edge between the cities. The cost of the edge can be the time that flight takes to
reach city B from A, or the amount of fuel used for the journey. Represent this as a graph. The
node can be represented by airport name or name of the city. Use adjacency list representation
of the graph or use adjacency matrix representation of the graph. Justify the
storage representation used 
 
NOTE -IN onlinegbd.com YOU MAY NOT GET BETTER VERSION IT ADDS UNWANTED ZEROS ALSO TO COVER THE SPACES 
      BETTER USE YOUR IDE -EG-VISUAL STUDIO OR EDITORS*/

#include <iostream>
#include <string>

class Graph
{
    private:
    std::string array[11][11]{};
    int m=1,n=1;
    int i=1,j=1;
    public:
    Graph()
    {
        for(int i=0;i<11;i++)
        {
            for(int j=0;j<11;j++)
            {
                array[i][j]="0";
            }
        }
    }
    void insert(std::string source,std::string destination,std::string weight)
    {
        array[0][j]=source;
        array[i][0]=source;
        int temp1=i;
        j++;
        i++;
        
        array[0][j]=destination;
        array[i][0]=destination;
        int temp2=j;
        j++;
        i++;
        
        array[temp2][temp1]=weight;
    }
    void display()
    {
        for(int i=0;i<11;i++)
        {
            for(int j=0;j<11;j++)
            {
                std::cout<<array[i][j]<<"\t\t ";
            }
            std::cout<<std::endl;
        }
    }
};


int main()
{
    Graph g;
    int x{0};
    char ch{'y'};
    while(ch=='y'||ch=='Y')
    {
        if(ch=='y'||ch=='Y')
        {
            std::cout<<"_-_-_-_-_-FLIGHT MENU-_-_-_-_-_-_\n";
            std::cout<<"1.To book Flights press 1\n";
            std::cout<<"2.To display all flights and distance press 2\n";
            std::cout<<"3.press 3 to exit\n";
            std::cout<<"Enter your choice : ";
            std::cin>>x;
            std::cout<<std::endl;
            switch(x)
            {
                case 1:
                {
                     std::string source{};
                     std::string destination{};
                     std::cout<<"Enter source/ your current destination\n";
                     std::getline(std::cin>>std::ws,source);
                     std::cout<<"Enter your destination/last stop\n";
                     std::getline(std::cin>>std::ws,destination); 
                     std::cout<<"Enter the distance between source and destination\n";
                     std::string weight{};
                     std::cin>>weight;
                     g.insert(source,destination,weight);
                }
                     break;
                case 2:
                {
                     g.display();
                     break;
                }
                case 3:
                {
                     exit(1);
                     break;
                }
            }
            std::cout<<"Do you want to continue press y or Y,to exit press n or N\n";
            std::cin>>ch;
        }
        else if(ch=='n' || ch=='N')
        {
            std::cout<<"Thanks for visiting :-)\n";
        }
    }
    return 0;
}
