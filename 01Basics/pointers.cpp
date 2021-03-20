// Pointe is a data-type used to store the memory address

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 4;
    // address of x in hexadecimal
    cout << "Addr of x: " << &x << endl;

    // declaring pointer for storing memory address
    int *add_x;
    add_x = &x; // storing address of x into add_x
    cout << "Val of pointer add_x: "  << add_x << endl;

    *add_x = 5;     // changing value of x

    // accessing value of x using pointer add_x
    cout << "Val at add_x: " << *add_x << endl;     // * denoted value @ (address), in this case address points to x

    // if value is added to pointer, then it will add into the size of allocated memory
    // for e.g. if add_x -> 1 then adding 1 into it will give us 5 as it will add 4(size of data structure) to it.
    // add_x++;
    // cout << endl << "val of add_x after +1: " << add_x << endl << endl;

    // name of array itself work as a pointer
    int arr[10] = {1};
    cout << "array address at 0: " << arr << endl << "value of array at 0: " << *arr << endl;
    cout << "array address at 1: " << arr+1 << endl << "value of array at 0: " << *(arr+1) << endl;

    // ** -> double pointers store the addres of another pointer
    int **pp;
    pp = &add_x;
    cout << "addrss of pointer add_x: " << pp << endl;
    cout << "val @ pp (*pp): " << *pp << endl;
    cout << "val @ *pp (**pp): " << **pp;
}