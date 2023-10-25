/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include "task_1.h"

int main() {
    Parent mother("Mohira");
    Parent father("Ikromxon");
    Child sister1("Muqaddas");
    Child sister2("Dilnoza");
    Child sister3("Gavhar");
    Child Sayid("Sayidabdullaxon");
    mother.age = 50;
    mother.gender = 'f';
    mother.profession = "Teacher";
    mother.height = 1.65;
    mother.setMass(1.23);
    mother.addHobby("Teaching");
    mother.addHobby("Cooking");
    mother.addHobby("Reading_books");
    mother.setNOfChildren(4);
    Sayid.gender = 'm';
    Sayid.profession = "Student";
    Sayid.height = 1.78;
    Sayid.setMass(70);//Encapsulation example
    Sayid.addHobby("Programming");
    Sayid.addHobby("SolvingMathProblems");
    std::cout<<"Example for encapsulation: "<<Sayid.returnMass()<<" kg"<<std::endl;
    std::cout<<"Examples for inheritance, both Parent and Child classes inherited all functions and attributes from Person class"<<std::endl;
    std::cout<<Sayid.name<<" is a "<<Sayid.profession<<std::endl;
    std::cout<<"Abstraction example, using if/else statement I am changing 0 and 1s to Yes and No"<<std::endl;
    sister1.changeMarriedStatus(1);
    std::cout<<"Married? "<<sister1.returnMarriedStatus()<<std::endl;
    sister2.changeMarriedStatus(1);
    std::cout<<"Married? "<<sister2.returnMarriedStatus()<<std::endl;
    sister3.changeMarriedStatus(0);
    std::cout<<"Married? "<<sister3.returnMarriedStatus()<<std::endl;
    std::cout<<"Polymorphism example for cook function: "<<std::endl;
    mother.cook();
    sister1.cook();
    return 0;
}
