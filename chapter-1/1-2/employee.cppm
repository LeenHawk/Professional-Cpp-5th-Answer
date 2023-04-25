export module employee;

export namespace HR{
    enum class title{Manager,SeniorEngineer,Engineer};
    struct Employee {
        char firstInitial;
        char lastInitial;
        int employeeNumber;
        int salary;
        title title;
    };
};