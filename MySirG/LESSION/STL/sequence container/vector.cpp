#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v1 = {25, 67, 31, 10, 54, 32};
    vector <string> v2 = {"abc", "qwe", "jkl", "ghj", "mjh"};

    // Accessing vector element
    // Method_1 : using subscript operator '[]'    --> (isme bound checking nahi hai) 
    for (unsigned int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;
    
    // Method_2 : using at() method --> (isme bound checking hai)
    try
    {
        for (unsigned int i = 0; i < v1.size(); i++)
            cout << v1.at(i) << " ";
        cout << endl;
    }
    catch(std::out_of_range e)
    {
        cout << "error : vector out of index Exception.";
    }
    
    // Method_3 : Implicit Iterator
    for(auto x:v2)
        cout << x << " ";
    cout << endl;

    // Method_4 : explicit Iterator
    vector<int>::iterator i1;
    for(i1 = v1.begin(); i1 != v1.end(); i1++)
        cout << *i1 << " ";
    cout << endl;

    vector<int>::reverse_iterator i2;
    for(i2 = v1.rbegin(); i2 != v1.rend(); i2++)
        cout << *i2 << " ";
    cout << endl;

    vector<int>::const_iterator i3;
    i3 = v1.cbegin();
        cout << *i3 << endl;

    cout << v2.back() << endl;
    cout << v2.empty() << endl;

    // swapping method
    vector<int> v3={54, 85, 32};
    v1.swap(v3);

    // after swapping lets print using implicit iterator
    cout << "v1 data : ";
    for(auto x:v1)
        cout << x << " ";
    cout << endl;
    
    cout << "v3 data : ";
    for(auto x:v3)
        cout << x << " ";
    cout << endl;

    // clear() method in vector
    v1.clear();
    cout << "size = " << v1.size() << endl;
    cout << "v1 = "; 
    for(auto x:v1)
        cout << x << " ";
    cout << endl;

    // capacity() method in vector
    cout << "capacity of v1 : " << v1.capacity() << endl;
    cout << "capacity of v2 : " << v2.capacity() << endl;
    cout << "capacity of v3 : " << v3.capacity() << endl;

    // agar mai data isme rakhna chahata hu tho kaise rakh sakta hu
    // ways to insert data in vector

    cout << "**************************** inserting data in vector******************************\n";
    // method_1 using push_back() same as appen function which we use earlier
    cout << "using push_back():- " << endl;
    v1.push_back(85);
    for(auto x:v1)
        cout << x << " ";
    cout << endl;

    // method_2 using insert()  e.g.:  v1.insert(v1.begin(), {45, 32, 88})
    cout << "using insert():- " << endl;
    v1.insert(v1.begin(), {45, 32, 88});
    for(auto x:v1)
        cout << x << " ";       // o/p : 45 32 88 85 <-- here 85 printed last coz v1.begin()
    cout << endl;

    // if you want to insert after the element then you need to know the lastIndex
    cout << "using insert() but at specified index:- " << endl;
    v1.insert(v1.begin()+1, {45, 32, 88});      // we can insert after the existing element with the help of random access iterator so 
    for(auto x:v1)
        cout << x << " ";       
    cout << endl;

    // method_3 : using emplace_back()
    cout << "using emplace_back():- " << endl;
    v1.emplace_back(100);       // last me value insert ho jata hai
    for(auto x:v1)
        cout << x << " ";       
    cout << endl;

    // method_4 : emplace()  <-- ye insert ke tarah kaam karega
    cout << "using emplace():- " << endl;
    v1.emplace(v1.begin()+2, 200);
    for(auto x:v1)
        cout << x << " ";       
    cout << endl;

    cout << "capacity of v1 : " << v1.capacity() << endl;   // capacity double ho gayi hogi kyu ki dynamic array ke tarah hai ye vector kyuki pahele kum tha

    // if i want to edit any element
    *(v1.begin() + 2) = 150;     // tho index 2 pe jo v hoga vo change ho k 150 ho jayega
     for(auto x:v1)
        cout << x << " ";   
    cout << "    <-- here 200 edited to 150 in index 2";    
    cout << endl;

    // agar capacity ko shrink karana hai tho explicitly lkarwa sakte hai
    v1.shrink_to_fit();
    // tho gitna element vector me hoga utna ka capacity ho jayega
    cout << "capacity of v1 : " << v1.capacity() << endl;

    // insert karne k ek aur variation
    v1.insert(v1.begin()+1, 4, 12);     // mai chahate hu ke 1st element k baad char baar 12 insert ho
    for(auto x:v1)
        cout << x << " ";       
    cout << endl;

    // v3 me se kuch element copy karna chahta hu aur v1 vector me rakhna chata hu
    v1.insert(v1.end()-1, v3.begin()+1, v3.begin()+4);      // <-- v1 me insert kar raha hu v3 k element vo v   v3.begin()+1 matlab ek element k baad wala se v3.begin()+4 matlab v3 ka 4th se ek element tak 4th element count nahi hota hai isliye uske just pahele element tak copy hoga
    cout << "after copy from v3 to v1: \n";
    for(auto x:v1)
        cout << x << " ";       
    cout << endl;


    // how to delete elements
    // method_1 : erase()

    v1.erase(v1.begin()+5);         // agar mughe 5th index wale ele ko delete karna hai
    cout << "5th element i.e. 45 will be deleted \n";
    for(auto x:v1)
        cout << x << " ";
    cout << endl;

    // method_2 : deleting continious multiple element
    v1.erase(v1.begin()+3, v1.begin()+7);           // bas yaad rakhna last element consider nahi hota isliye 7th element delete nahi goga 3rd se 6th tak delete hoga
    cout << "after deleting multiple element: \n";
    for(auto x:v1)
        cout << x << " ";
    cout << endl;

    // method_3 : pop_back()   <-- isse last element delete ho jayega
    v1.pop_back();
    cout << "After deleting last element: \n";
    for(auto x:v1)
        cout << x << " ";
    cout << endl;

    return 0;
}