#include <iostream>
#include <string>
using namespace std;

// class Student
// {
//     // properties
//     string name;
//     float cgpa;

//     // methods
//     void getPercentage()
//     {
//         cout << (cgpa * 10) << "% \n";
//     }
// };

// class User{
//     private:
//         int id;
//         string password;

//     public:
//         string username;
//         User(int id){
//             this->id = id;
//         }

//     //Getter
//     string getPassword(){
//         return password;
//     }

//     //Setter
//     void setPassword(string password){
//         this->password = password;
//     }
// };

class Animal
{
public:
    string color;

    void eat()
    {
        cout << "eats" << endl;
    }
    void breathe()
    {
        cout << "breathe" << endl;
    }
};

class fish : public Animal
{
public:
    int fins;

    void swim()
    {
        cout << "swims" << endl;
    }
};

int main()
{

    fish f1;
    f1.swim();
    f1.eat();
    // Student s1;

    // User user1(101);
    // user1.username = "Rahat";
    // user1.setPassword("abcd");

    // cout << "Username : " << user1.username << endl;
    // cout << "Password : " << user1.getPassword() << endl;

    return 0;
}
