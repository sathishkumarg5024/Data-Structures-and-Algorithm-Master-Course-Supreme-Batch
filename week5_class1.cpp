// char array and strings 

// reverse a string


// #include<iostream>
// #include<string.h>
// using namespace std;


//  int getLength(char name[]){
//         int length =0,i=0;
//         while(name[i]!='\0'){
//             length++;
//             i++;
//         }
//         return length;
//     }
// void reverseCharArray(char name[]){
//     int i=0;
//     int n=getLength(name);
//     int j=n-1;
//     while(i<=j){
//         swap(name[i],name[j]);
//         i++;
//         j--;
//     }
//  }
// int main(){
//     // char ch[100];
//     // cout << "enter your name "<< endl ;
//     // cin  >> ch;

//     // cout << "your name is "<< ch << endl;
//     // return 0;

// //      int n;
// //     cout << "enter the num of chars" ;
// //     cin >> n;
// //     for(int i=0;i<n;i++){
// //         cin >> ch[i];
// //     }
// // int i=0;
// //     for (;i<=n;i++){
// //         cout << ch[i];
// //     }
// //     int value= (int)ch[i];
// //     cout << value << endl;
    



//     // char arr[100];
//     // // getline(cin,arr);
//     // cin.getline(arr,100);
//     // cout << arr;

   
//     char name[100];
//     cin >> name;
//     cout << "length is  " << getLength(name)<< endl; 
//     cout << strlen(name);

//     cout << "initially " << name << endl;
//     reverseCharArray(name);
//     cout << "reversed string is "<< name;
// }



// replace all spaces 

// #include<iostream>
// #include<string.h>
// using namespace std;


// void replaceSpaces(char sentence[]){
//     int i=0;
//     int n= strlen(sentence);
//     for (int i=0;i<n;i++){
//         if(sentence[i] ==" "){
//             sentence[i]=='@';
//         }
//     }
// }
// int main(){

// char sentence [100];
// cin.getline(sentence,100);
// cout << sentence;
// }






// palindrome

#include<iostream>
#include<string.h>
using namespace std;


int palindrome(char arr[]){
    int i=0;
    int j=strlen(arr)-1;
    while(i<=j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else{
            return -1;
        }
    }
    return 0;
}
int main(){
    char arr[100];
    cout << "enter the string"<< endl;
    cin >> arr;
    palindrome(arr);
    cout << arr;

}