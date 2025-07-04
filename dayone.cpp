// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number: ";
//     cin>>n;
//     if(n%2==0){
//         cout<<"even";
//     }
//     else{
//         cout<<"odd";
//     }
//     return 0;
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number: ";
//     cin>>n;
//     int a=0;
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0){
//             a=1;
//             break;
//         }
//     }
//     if(a==0){
//         cout<<"prime";
//     }
//     else {
//         cout<<"not prime";
//     }
//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number:";
    cin>>a;
    int b;
    cout<<"enter a number: ";
    cin>>b;
    cout<<"press 1 for addition"<<endl<<"press 2 for subtraction"<<endl<<"press 3 for multiplication"<<endl<<"press 4 for division"<<endl;
    int ch;
    cout<<"enter operation: ";
    cin>>ch;
    switch(ch){
        case 1:
        cout<<"result: "<<a+b;
        break;
        case 2:
        cout<<"result:"<<a-b;
        break;
        case 3:
        cout<<"result:"<<a*b;
        break;
        case 4:
        cout<<"result:"<<a/b;
        break;
        default:
        cout<<"result:error";
        break;
    return 0;
    }
}