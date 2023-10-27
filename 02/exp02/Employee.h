#include <string>
class Employee
{
public:
    explicit Employee(std::string, std::string, int);
    void setName(std::string);
    void setFirstName(std::string);
    void setSalary(int);
    std::string getLastName() const;
    std::string getFirstName() const;
    int getSalary() const;
    // void upSalary(int); 没用了

private:
    std::string lastname, firstName;
    int salary;
};