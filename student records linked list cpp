#include <iostream>
#include <string>

struct student //structure of each student information record
{
    std::string name;
    int id;
    student* next;
};

//class for student records named as registration

class registration
{
public:
    student* head{ NULL }, * tail, * temp;
public:
    inline void insertEnd(std::string n, int d)   //function to insert student record at the end of list 
                                           //i.e in sequence
    {
        temp = new student;
        temp->name = n;
        temp->id = d;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else if (head != NULL)
        {
            tail->next = temp;
            tail = temp;
        }
    }

    /* function to insert student record at begenning of the record as in priority of name or index
    which is to be decided by the user */
    
    void insertBeg(std::string n, int d)
    {
        temp = new student;
        temp->name = n;
        temp->id = d;
        temp->next = head;
        head = temp;
    }

    inline void displayWhole()  // function to display whole record
    {
        student* ptr = head;
        while (ptr != NULL)
        {
            std::cout << ptr->name << "\t" << ptr->id << "\n";
            ptr = ptr->next;
        }
    }
    
    //functions to search for a particular student
    
    inline void display(std::string search, int d)
    {
        student* ptr = head;
        while (ptr != NULL)
        {
            if (search == ptr->name && d == ptr->id)
            {
                std::cout << "\nstudent found\n";
                std::cout << ptr->name << "\t" << ptr->id << "\n";
            }
            ptr = ptr->next;
        }
    }

    // function to insert at any position required
    void insertMid(int loc, std::string n, int d)
    {
        student* pp = head;
        int count = 1;
        while (count < loc - 1)
        {
            pp = pp->next;
            count++;
        }
        student* nodeToInsert = new student;
        nodeToInsert->name = n;
        nodeToInsert->id = d;
        nodeToInsert->next = pp->next;
        pp->next = nodeToInsert;
    }

    // function to delete any record of student left or resigned
    void del(int loc)
    {
        student* pp = head;
        int count = 1;
        student* ptr = NULL;
        while (count < loc - 1)
        {
            pp = pp->next;
            count++;
        }
        ptr = pp;
        pp = pp->next;
        pp = pp->next;
        ptr->next = pp;
    }
 
    // function to get total numbers of students registered
    inline void count()
    {
        int counter = 0;
        student* ptr = head;
        while (ptr != NULL)
        {
            counter = counter + 1;
            ptr = ptr->next;
        }
        std::cout << "total number of students are : " << counter << "\n";
    }
};

int main()
{
    std::cout<<"a small and simple project by satej dhakane \n";
    registration l;
    std::cout << "enter 1 to enter records in sequence or at end\n"
        "enter 2 to insert student record at begenning of list\n"
        "enter 3 to display whole record \n"
        "enter 4 to search particular record of student\n"
        "enter 5 to insert in middle of list\n"
        "enter 6 to delete a record\n"
        "enter 7 to get the number of student records registered\n";

    char ch{ 'y' };
    while (ch == 'y')
    {
        if (ch == 'y')
        {
            int s;
            std::cin >> s;
            switch (s)
            {
            case 1:
            {
                std::cout << "enter the student info \n enter the name : ";
                std::string student;
                std::getline(std::cin >> std::ws, student);
                std::cout << "enter id of student : ";
                int stid;
                std::cin >> stid;
                l.insertEnd(student, stid);
                break;
            }
            case 2:
            {
                std::cout << "enter info about student to be inserted at the begening\n"
                    "enter the name : ";
                std::string student1;
                std::getline(std::cin >> std::ws, student1);
                std::cout << "enter id of student : ";
                int stid1;
                std::cin >> stid1;
                l.insertBeg(student1, stid1);
                break;
            }
            case 3:
            {
                std::cout << "the whole list of students is : \n";
                l.displayWhole();
                break;
            }
            case 4:
            {
                std::cout << "enter name of student to be searched \n";
                std::string student2;
                std::getline(std::cin >> std::ws, student2);
                std::cout << "enter the id of student to be searched\n";
                int key;
                std::cin >> key;
                l.display(student2, key);
                break;
            }
            case 5:
            {
                std::cout << "enter location at which you have to insert the student info \n";
                int loc;
                std::cin >> loc;
                std::cout << "enter name of student \n";
                std::string student3;
                std::getline(std::cin >> std::ws, student3);
                std::cout << "enter the id of student\n";
                int key1;
                std::cin >> key1;
                l.insertMid(loc, student3, key1);
                break;
            }
            case 6:
            {
                std::cout << "enter location of student to be deleted off the records\n";
                int loca;
                std::cin >> loca;
                l.del(loca);
                break;
            }
            case 7:
            {
                std::cout << "get the number of records of students in the list\n";
                l.count();
                break;
            }
            }
        }
        std::cout << "enter y to continue and n to exit\n";
        std::cin >> ch;
    }


    return 0;
}

