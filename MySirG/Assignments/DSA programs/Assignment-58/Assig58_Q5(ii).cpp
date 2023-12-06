            /////       implement Quick sorting using loop      /////

#include <iostream>
#include "/Users/apple/Documents/MySirG/Assignments/DSA programs/Assignment-47/Assig47_all_Q.cpp"
using namespace std;
void Quick_Sort_LOOP(int arr[], int l, int u);          // lower -> l | upper -> u
int partition(int arr[], int left, int right);
void swap(int &a, int &b);

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int left, int right)
{
    int LOC = left;
    while(left < right)
    {
        while(left < right && arr[LOC] < arr[right])
            right--;
        if(left == right)
            break;
        
        // if LOC'th element is bigger then right side array then swap
        swap(arr[LOC], arr[right]);

        while(left < right && arr[left] < arr[LOC])
            left++;

        if(left == right)
            break;

        // if left side is bigger then LOC's element array then swap
        swap(arr[left], arr[LOC]);
    }

    return LOC;
}

void Quick_Sort_LOOP(int arr[], int l, int u)
{
    // "lower"(l) means lower index and "upper"(u) means upper index //
    /*
        "Stack" was your class name u made while making Stack data structure which is now
            your custom data type

        stack k 2 object banaya "lower" and "upper" naam ka abb mai 'obj.' laga ke kaam 
        kar sakta hu
    */
    
    int i, j, pivot;
    Stack lower(10), upper(10);     // stack banaya size 10 ka ;)
    // initially lower me lowest index and upper me highest index array me kakh diya
    lower.push(l);
    upper.push(u);

    // abb jub tak stack empty nahi ho jata hai tub tak loop chale
    while (!lower.isEmpty())
    {
        // fir mai dono stack me top element ko dekh raha hu tho l->0 aand u->9 dikh raha hai
        // abb i , j se iterate karwaunga tho usme value rakh dunga
        i = lower.peek();
        j = upper.peek();

        // hume pata hai partition karne se QUICK me LOC ele apne sahi position chale jata hai
        pivot = partition(arr, i, j);

        // stack ko empty kar liya maine
        lower.pop();
        upper.pop();

        // recursion k badle ye use ho raha hai 
        if(pivot > i+1)     // for LEFT sublist
        {
            lower.push(i);
            upper.push(pivot-1);
        }

        if(pivot < j-1)     // for RIGHT sublist
        {
            lower.push(pivot+1);
            upper.push(j);
        }
    }
    

}

int main()
{
    int arr[] = {80,30,50,90,100,10,20,40,70,60};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "printing original array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    
    Quick_Sort_LOOP(arr, 0, size-1);        // arr, 0, 9

    cout << "printing sorted array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
