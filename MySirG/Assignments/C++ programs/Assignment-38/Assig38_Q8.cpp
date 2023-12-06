#include <iostream>
using namespace std;

class actor
{
    private:
        string name;
        int age;

    public:
        void setAge(int age)
        {
            this->age = age;
        }
        void setName(string s)
        {
            name = s;
        }

        int getAge()
        {
            return age;
        }
        string getName()
        {
            return name;
        }
};

class TVactor : virtual public actor
{
    private:
        int N_TVprojects;
    
    public:
        void set_TVprojects(int N)
        {
            N_TVprojects = N;
        }
        int get_TVprojects()
        {
            return N_TVprojects;
        }
        void set_TVactor(string s, int a, int n)        // n = no. of projects  | a = age
        {
            setName(s);
            setAge(a);
            set_TVprojects(n);
        }
        void show_TVactor()
        {
            cout << endl;
            cout << "Name: " << getName() << endl;
            cout << "Age: " << getAge() << endl;
            cout << "Number of projects: " << get_TVprojects() << endl;
        }
};

class MovieActor : virtual public actor
{
    private:
        int N_Movies;
    
    public:
        void set_Nmovies(int N)
        {
            N_Movies = N;
        }
        int get_Nmovies()
        {
            return N_Movies;
        }
/////////////
        void set_MovieActor(string s, int a, int n)
        {
            setName(s);
            setAge(a);
            set_Nmovies(n);
        }
        void show_MovieActor()
        {
            cout << endl;
            cout << "Name: " << getName() << endl;
            cout << "Age: " << getAge() << endl;
            cout << "Number of projects: " << get_Nmovies() << endl;
        }
};

class AllScreenActor : public TVactor, public MovieActor
{
    public:
        void setActorData(string s,int a, int tc,int mc)
        {
            /*
            you cant use this "setName" or "setAge" coz it is in actor class 
            so we will get ambiguity error for that you have write "virtual 
            in intermediate class"
            */
            setName(s);     
            setAge(a);
            set_TVprojects(tc);
            set_Nmovies(mc);
        }
        void showActorData()
        {
            cout<<endl;
            cout<<getName()<<endl;
            cout<<getAge()<<endl;
            cout<<get_TVprojects()<<endl;
            cout<<get_Nmovies(); 
        }
};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        

    cout << "\n";
    return 0;
}
