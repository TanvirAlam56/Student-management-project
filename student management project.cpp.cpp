#include <bits/stdc++.h>
#include<windows.h>
#include<vector>

using namespace std;


void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Intro()
{
    int time = 15;
    for(int i=0; i<=6; i++)
    {
        Sleep(time);
        gotoxy(8,1+i);
        cout<<"**";
        fflush(stdout);
    }
    for(int i=0; i<=3; i++)
    {
        Sleep(time);
        gotoxy(10+i,7-i);
        cout<<"**";
        fflush(stdout);
    }
    for(int i=0; i<=3; i++)
    {
        Sleep(time);
        gotoxy(15+i,4+i);
        cout<<"**";
        fflush(stdout);
    }
    for(int i=0; i<=6; i++)
    {
        Sleep(time);
        gotoxy(20,7-i);
        cout<<"**";
        fflush(stdout);

    }


    for(int i=0; i<=5; i++)
    {
        Sleep(time);
        gotoxy(25,1+i);
        cout<<"**";
        fflush(stdout);
    }
    for(int i=0; i<=5; i++)
    {
        Sleep(time);
        gotoxy(25+i,1);
        cout<<"**";
        gotoxy(25+i,4);
        cout<<"**";
        gotoxy(25+i,7);
        cout<<"**";
        fflush(stdout);

    }

    for(int i=0; i<=6; i++)
    {
        Sleep(time);
        gotoxy(34,1+i);
        cout<<"**";
        fflush(stdout);
    }
    for(int i=0; i<=5; i++)
    {
        Sleep(time);
        gotoxy(34+i,7);
        cout<<"**";
        fflush(stdout);
    }
    for(int i=0; i<=1; i++)
    {
        Sleep(time);
        gotoxy(40,7-i);
        cout<<"**";
        fflush(stdout);
    }
    for(int i=0; i<=6; i++)
    {
        Sleep(time);
        gotoxy(44,1+i);
        cout<<"**";
        fflush(stdout);
    }
    for(int i=0; i<=5; i++)
    {
        Sleep(time);
        gotoxy(44+i,1);
        cout<<"**";
        gotoxy(44+i,7);
        cout<<"**";
        fflush(stdout);
    }
    for(int i=0; i<=1; i++)
    {
        Sleep(time);
        gotoxy(49,1+i);
        cout<<"**";
        gotoxy(49,7-i);
        cout<<"**";
        fflush(stdout);
    }
    for(int i=0; i<=6; i++)
    {
        Sleep(time);
        gotoxy(53,1+i);
        cout<<"**";
        fflush(stdout);
    }
    for(int i=0; i<=5; i++)
    {
        Sleep(time);
        gotoxy(53+i,1);
        cout<<"**";
        gotoxy(53+i,7);
        cout<<"**";
        fflush(stdout);
    }
    for(int i=0; i<=6; i++)
    {
        Sleep(time);
        gotoxy(58,1+i);
        cout<<"**";
        fflush(stdout);
    }
    for(int i=0; i<=6; i++)
    {
        Sleep(time);
        gotoxy(62,7-i);
        cout<<"**";
        fflush(stdout);
    }
    for(int i=0; i<=3; i++)
    {
        Sleep(time);
        gotoxy(63+i,1+i);
        cout<<"**";
        fflush(stdout);
    }
    for(int i=0; i<=3; i++)
    {
        Sleep(time);
        gotoxy(68+i,4-i);
        cout<<"**";
        fflush(stdout);
    }
    for(int i=0; i<=6; i++)
    {
        Sleep(time);
        gotoxy(72,1+i);
        cout<<"**";
        fflush(stdout);
    }
    for(int i=0; i<=5; i++)
    {
        Sleep(time);
        gotoxy(76,1+i);
        cout<<"**";
        fflush(stdout);
    }
    for(int i=0; i<=5; i++)
    {
        Sleep(time);
        gotoxy(76+i,1);
        cout<<"**";
        gotoxy(76+i,4);
        cout<<"**";
        gotoxy(76+i,7);
        cout<<"**";
        fflush(stdout);
    }


    gotoxy(30,25);
    system("pause");
    system("cls");


   }



class Student
{

private:

    int rollno, age,semester;

    string name,dept;



public:

    Student(int stdId, string stdName,int stdAge,int stdseme,string stddept)
    {

        rollno = stdId;

        name = stdName;

        age = stdAge;

        semester = stdseme;

        dept = stddept;

    }


    void setRollno(int stdId)
    {

        rollno = stdId;

    }

    int getRollno()
    {

        return rollno;

    }

    void setName(string stdName)
    {

        name = stdName;

    }

    string getName()
    {

        return name;

    }

     void setAge(int stdAge)
    {

        age = stdAge;

    }

    int getAge()
    {

        return age;

    }


    void setseme(int stdseme)
    {

        semester = stdseme;

    }

    int getseme()
    {

        return semester;

    }

     void setdept(string stddept )
    {

       dept = stddept;

    }

    string getdept()
    {

        return dept;

    }


    void displayStudent()
    {

        cout<<"Roll No : "<<rollno<<endl;

        cout<<"Name :"<<name<<endl;

        cout<<"Age : "<<age<<endl;

        cout<<"Semester : "<<semester<<endl;

        cout<<"Department : "<<dept<<endl;

    }

};



///Create function to update Student record

void updateStudent(vector<Student>& students)
{

    string sname;

    bool found = false;

    int choice;



    cout<<"\t\tEnter Name to Update Record :";

    cin.ignore();

    getline(cin,sname);



    for(int i = 0; i<students.size(); i++)
    {

        if(students[i].getName()==sname)
        {

            found = true;



            cout<<"\t\t---Student Found -----"<<endl;

            cout<<"\t\t 1. Update Roll no "<<endl;

            cout<<"\t\t 2. Update Name "<<endl;

            cout<<"\t\t 3. Update Age "<<endl;

            cout<<"\t\t 4. Update Semester "<<endl;

            cout<<"\t\t 5. Update Department "<<endl;


            cout<<"\t\tEnter Your Choice :";

            cin>>choice;



            switch(choice)
            {

            case 1:
            {

                int rno;

                cout<<"\t\tEnter New Roll no :";

                cin>>rno;

                students[i].setRollno(rno);



                break;

            }

            case 2:
            {

                string name;

                cout<<"\t\tEnter New Name :";

                cin.ignore();

                getline(cin,name);

                students[i].setName(name);

                break;

            }

            case 3:
            {

                int age;

                cout<<"\t\tEnter New Age :";

                cin>>age;

                students[i].setAge(age);

                break;

            }


            case 4:
            {

                int semester;

                cout<<"\t\tEnter New Semester :";

                cin>>semester;

                students[i].setseme(semester);

                break;

            }

            case 5:
            {

                string dept;

                cout<<"\t\tEnter New Department :";

                cin.ignore();

                getline(cin,dept);

                students[i].setdept(dept);

                break;

            }




            default:

                cout<<"\t\tInvalid Number"<<endl;
            }
        }

        else if(!found)
        {
            cout<<"\t\tRecord Not Found"<<endl;

            return;
        }
    }
}

///create function to search student in list

void SearchStudent(vector<Student>& students)
{
    int rollno;

    cout<<"\t\tEnter Roll no :";

    cin>>rollno;

    for(int i = 0; i<students.size(); i++)
    {

        if(students[i].getRollno() == rollno)
        {

            cout<<"\t\t--------Student Found ------------"<<endl;

            students[i].displayStudent();

            return;
        }
    }
}


///create function to show all list of  student

void DisplayAllStudent(vector<Student>& students)
{
    if(students.empty())
    {
        cout<<"\t\t No Student Found "<<endl;

        return;
    }

    for(int i = 0; i<students.size(); i++)
    {
        students[i].displayStudent();

        cout<<endl;
    }
}

///create function to add new student

void addNewStudent(vector<Student> &students)
{
    int rollno,age,semester;
    string name,dept;
    cout<<"\n\n\t\tEnter Roll no :";
    cin>>rollno;

    //check if student already exit

    for(int i = 0; i<students.size(); i++)
    {
        if(students[i].getRollno() == rollno)
        {
            cout<<"\t\tStudent Already Exit"<<endl;
            return;
        }
    }
    cout<<"\t\tEnter Name : ";
    cin>>name;
    cout<<"\t\tEnter Age : ";
    cin>>age;
    cout<<"\t\tEnter Semester : ";
    cin>>semester;
    cout<<"\t\tEnter Department : ";
    cin>>dept;

    Student newStudent(rollno,name,age,semester,dept);
    students.push_back(newStudent);
}


//create function to delete student in list

void deleteStudent(vector<Student>& students)
{
    string name;
    cout<<"\t\tEnter Name to Delete :";
    cin.ignore();
    getline(cin,name);


    for(int i = 0; i<students.size(); i++)
    {
        if(students[i].getName() == name)
        {
            students.erase((students.begin()+i));
            cout<<"\t\tStudent Remove Successfully"<<endl;
        }
    }
}

main()
{
    system("Color F2");
    //system ( "color 02" );
    Intro();
    vector <Student> students;

    ///students.push_back(Student(1,"ali",35));

    char choice;
    do
    {

        system("cls");

        int op;
        cout<<"\n\t\t--------------------------------";
        cout<<"\n\t\t**** Student Management System ***";
        cout<<"\n\t\t--------------------------------";
        cout<<"\n\t\t 1. Add New Student"<<endl;
        cout<<"\t\t 2. Display All Student "<<endl;
        cout<<"\t\t 3. Search Student"<<endl;
        cout<<"\t\t 4. Update Student"<<endl;
        cout<<"\t\t 5. Delete Student "<<endl;
        cout<<"\t\t 6. Exit"<<endl;
        cout<<"\t\t Enter Your Choice : ";
        cin>>op;

        switch(op)
        {
        case 1:
            addNewStudent(students);
            break;
        case 2:
            DisplayAllStudent(students);
            break;
        case 3:
            SearchStudent(students);
            break;
        case 4:
            updateStudent(students);
            break;
        case 5:
            deleteStudent(students);
            break;
        case 6:
            exit(1);
        default:
            cout<<"\t\tInvalid Number "<<endl;
        }

        cout<<"\t\tDo You Want to Continue [Yes/No] ? :";
        cin>>choice;

    }
    while(choice == 'y'||choice=='Y');

    return 0;

}

