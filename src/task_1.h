/*
 * Author:
 * Date:
 * Name:
 */
class Person{
public:
    int age;
    std::string name;
    std::string profession;
    float height;
    char gender;//male(m) or female(f)
    void cook(){
        std::cout<<this->name<<" can cook: "<<std::endl;
    }
    void setMass(float some_mass){
        mass = some_mass;
    }
    float returnMass(){
        return this->mass;
    }
    void addHobby(std::string hobbyName){
        hobbies->append(hobbyName);
    }
    void printHobbies(){
        for (int i=0;i<10;i++){
            if (hobbies[i]!=""){
                std::cout<<hobbies[i]<<std::endl;
            }
        }
    }
private:
    float mass;
    std::string hobbies[10];
};
class Parent:public Person{
    int NofChildren;
public:
    Parent(std::string some_name){
        this->name=some_name;
    }
    void setNOfChildren(int n){
        NofChildren = n;
    }
    int returnNofChildren(){
        return NofChildren;
    };
    void cook(){
        std::cout<<this->name<<" can cook: Plov, Shashlik, Mastava, Moshxurda, etc"<<std::endl;
    }
};
class Child:public Person{
public:
    Child(std::string some_name){
        this->name=some_name;
    }
    int NofSiblings=3;
    void changeMarriedStatus(bool isMarried){
        if (isMarried){
            married = "Yes";
        } else{
            married = "No";
        }
    }
    std::string returnMarriedStatus(){
        return married;
    }
    void cook(){
        std::cout<<this->name<<" can cook: Mastava, Borsch, etc"<<std::endl;
    }
private:
    std::string married;//0-yes, 1-no

};
