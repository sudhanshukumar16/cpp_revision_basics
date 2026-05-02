// #include <iostream>
// using namespace std;

// int main(){
//     int age=0;
//     if (age >18){
//         cout<< "adult";
//     }
//     else if(age ==0){
//         cout <<"not born";

//     }
//     else {
//         cout <<"child";

//     }
// }







//+ve or -ve

// #include <iostream>
// using namespace std;
// int main(){
//     int no ;
//     cout<<"Enter no: ";
//     cin >>no;
//     if (no>0){
//         if(no%2==0){
//             cout<<no<<" is +ve and even"<<endl;
//         }
//         else{
//             cout<<no<<" is +ve and odd"<<endl;
//         }
//     }
//     else if (no==0){
//         cout<<no<< " is zero"<<endl;
//     }
//     else{
//         cout << no << " is -ve"<<endl;
//     }
//     return 0;

// }




// switch




#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<< "enter marks: ";
    cin>> marks;

    switch (marks/10){
        case 10:
        case 9: 
            cout <<"O";
            break;
        case  8:
            cout<<"A";
            break;
        case 7:
            cout<<"B";
            break;
        case 6:
            cout<<"C";
            break;
        case 5:
            cout<<"D";
            break;
        case 4:
            cout<<"E";
            break;
        default:
            cout<<"Fail";

    }
    return 0;


}