//using goto

// #include <iostream>

// using namespace std;

// int main(){
//     cout << "First statement" << endl;


//     goto skip_in_between;

//     cout << "Second statement" << endl;

//     skip_in_between:
//     cout << "Third statement" << endl;

//     return 0;
// }


// use goto keyword to make a infinite looop 

// #include <iostream>
// using namespace std;

// int main(){
//     int count =0;
// start:
//     cout<< "count : "<<count<<endl;
//     count++;
//     goto start;
//     cout<< "loop finished."<<endl;
//     return 0

// }


// data types range 

#include <iostream>

// for int, char macros
#include <climits>

// for float, double macros
#include <cfloat>

using namespace std;

int main() {
  
    // Displaying ranges with the help of macros
    cout << "char ranges from: " << CHAR_MIN << " to "
         << CHAR_MAX << endl;

    cout << "\nshort int ranges from: " << SHRT_MIN
         << " to " << SHRT_MAX << endl;
    cout << "\nint ranges from: " << INT_MIN << " to "
         << INT_MAX << endl;
    cout << "\nlong int ranges from: " << LONG_MIN << " to "
         << LONG_MAX << endl;
    cout << "\nfloat ranges from: " << FLT_MIN << " to "
         << FLT_MAX << endl;

    return 0;
}
