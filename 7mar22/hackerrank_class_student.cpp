#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student
{
    int age, standard;
    string first_name, last_name;

public:
    void set_age(int new_age)
    {
        age = new_age;
    }
    void set_standard(int new_standard)
    {
        standard = new_standard;
    }
    void set_first_name(string new_first_name)
    {
        first_name = new_first_name;
    }
    void set_last_name(string new_last_name)
    {
        last_name = new_last_name;
    }

    int get_age()
    {
        return age;
    }
    int get_standard()
    {
        return standard;
    }
    string get_last_name()
    {
        return last_name;
    }
    string get_first_name()
    {
        return first_name;
    }

    string to_string()
    {
        stringstream na;
        na << age;
        string naa;
        na >> naa;

        stringstream ns;
        ns << standard;
        string nss;
        ns >> nss;
        string result = naa + "," + last_name + "," + first_name + "," + nss;
        return result;
    }
};

int main()
{
    int age, standard;
    string first_name, last_name;
    age = 19;
    standard = 15;
    first_name = "anitya";
    last_name = "hari";

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}