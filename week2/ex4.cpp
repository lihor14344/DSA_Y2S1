#include <iostream>
#include <string>
using namespace std;
class informationRupp
{
    public:
    int num_faculty_rupp;
    string name_faculty_rupp;
    int num_department;
    string name_of_department;

    informationRupp(int a, string b, int c, string d)
    {
        num_faculty_rupp = a;
        name_faculty_rupp = b;
        num_department = c;
        name_of_department = d;
    }

    void print_infor_rupp()
    {
        cout << endl;
        cout << "The number of faculty in rupp : " << num_faculty_rupp << endl;
    }
    void print_infor_faculty()
    {
        cout << endl;
        cout << "Name of faculty : " << name_faculty_rupp << endl;
        cout << "Number of depatments in faculty : " << num_department << endl;
        cout << "Name of one of department : " << name_of_department << endl;
        cout << endl;
    }

};

int main()
{
    informationRupp i1(7,"a",3,"k");

    i1.print_infor_rupp();
    i1.print_infor_faculty();
    return 0;
}


// #include<iostream>
// using namespace std;
// class infomRUPP{¥
//     public:
//     int Num_Of_Faculty;
//     string Name_Of_Faculty;
//     string Name_Dept_Fe;

//     infomRUPP(int numF,string nameF,string nameDF ){
//     Num_Of_Faculty = numF;-----
//     Name_Of_Faculty = nameF;
//     Name_Dept_Fe = nameDF;
//     }
//     void Display(){
//     cout <<"*****************************************************"<<endl;
//     cout<<"The number of Faculty in RUPP " <<Num_Of_Faculty<<endl;
//     cout<<"Name of Faculty in RUPP " << Name_Of_Faculty << endl;
//     cout << "Name of the dept of FE " << Name_Dept_Fe << endl;
//     cout <<"*****************************************************"<<endl;


//     }
// };
// int main(){
//      infomRUPP uni[7]={
//         infomRUPP(1,"Faculty of Science","6 Departments"),
//         infomRUPP(2,"Faculty of Social Sciencce and Humanitties","11 Departments"),
//         infomRUPP(3,"Faculty of Engineering","3 Departments"),
//         infomRUPP(4,"Faculty of Development Studies","3 Departments"),
//         infomRUPP(5,"Faculty of Education","3 Departments"),
//         infomRUPP(6,"Institutes of Foreign Languages","6 Departments"),
//         infomRUPP(7,"Centers","1 cooperation centers 1 supporting and 6 research centers")};
//     for (int i = 0; i <7 ; i++)
//     {
//         uni[i].Display();
//         cout <<endl;
//     }

    
    
//     return 0;
// }