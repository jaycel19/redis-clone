#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
    string sex;
};

struct Posts {
    string title;
    string content;
    int timestamp;
    int author;
}

void displayInfo(Person personIto) {
    cout << personIto.name << "\n";
    cout << personIto.age << "\n";
    cout << personIto.sex << "\n";
}

void saveData (Posts p) {
    ///////
}


int main () {
    Person p1 = {"chester", 19, "Male"};
    displayInfo(p1);
    Posts postData = {
        title = "hadsfhkadf",




    };
    saveData(postData)
}

arr[10] =  

given the input string separated by coma words = "cute, pretty, ugly"
create a function that would separate the words in their respected variables

expected output
v1: cute
v2: pretty
v3: ugly

input word = "speed test"
create a function that would reverse this string
output: tset deeps

arr = [2, 4, 5, 10]
t = 9