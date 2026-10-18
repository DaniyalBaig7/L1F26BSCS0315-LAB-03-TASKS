/*
//                                                               TASK-01
//Mirza Daniyal Baig L1F26BSCS0315
#include <iostream>
using namespace std;
int main()
{
    //Welcome page
    cout << "Hello World!"<< endl;
    cout << "University of Central Punjab\nFaculty of Information Technology\nOrientation Day 2026" << endl;
    cout << "Welcome!" << endl;
    cout << "2026" << endl << "45" << endl << 45 * 3 << endl << 1000 + 500 - 250 << endl;
    cout << "Total Fee:" << 45000 + 9000 << endl;

    return 0;
}
*/
//                                                                TASK-02
/*
//Part A
#include <iostream>
//standard library not mentioned
using namespace std;
int main()
{
    //no statement terminator in bottom line
    cout << "Orientation Day" << endl;
    //no chaining before 450
        cout << "Total students: "<< 450 << endl;
    cout << "Seats left: " << 500 - 450 << endl;
    //double quotes missing
    cout << "Have a nice day" << endl;
//Part B
//No Brackets between the numinator expression
        cout << "Average: " << (60 + 70 + 80) / 3 << endl;
        return 0;
}
 */
//                                                                 TASK-03
 /*
 #include <iostream>
 using namespace std;
 int main()
 {
     cout << "Expression 1: " << 10 + 5 * 2 << endl;
     cout << "Expression 2:" << (10 + 5) * 2 << endl;
     cout << "Expression 3:" << 20 - 5 - 3 << endl;
     //The operators are evaluated from left to right in expression 3
     cout << "Expression 4:" << 100 / 7 << endl;
     cout << "Expression 5:" << 100 % 7 << endl;
     cout << "Expression6:" << 2 * (3 + 8 / 4 - 1) << endl;

     return 0;
 }
 */
//                                                                TASK-04
/*
#include <iostream>
using namespace std;
int main()
{
    // 1. Declare and initialize variables
    int rollNo = 1045;
    int semester = 1;
    char section = 'B';
    float cgpa = 3.5;
    int totalFee = 45000;
    int feePaid = 20000;
    // 2. Display all values
    cout << "Roll No: " << rollNo << endl;
    cout << "Semester: " << semester << endl;
    cout << "Section: " << section << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "Total Fee: " << totalFee << endl;
    cout << "Fee Paid: " << feePaid << endl;
    // 3. Move to the next semester and pay the second installment
    semester = semester + 1;
    feePaid = feePaid + 5000;
    cout << "Semester: " << semester << endl;
    cout << "Fee Paid: " << feePaid << endl;
    // 4. Calculate remaining fee and percentage paid
    int remainingFee = totalFee - feePaid;
    float percentagePaid = (feePaid * 100.0) / totalFee;
    cout << "Remaining Fee: " << remainingFee << endl;
    cout << "Percentage Paid: " << percentagePaid << endl;
    
    // 5. Valid and invalid identifiers
    // 2ndYear: Invalid (starts with a digit)
    // student_name: Valid
    // total-marks: Invalid (dash sign is not allowed)
    // _fee: Valid
    // Roll No : Invalid (spaces are not allowed)
    // marks2: Valid
 
    //Observation:
    // int x without initialization contains a garbage value
    // So Printing it is not safe because its value is not predictable.
  
        return 0;
}
*/
//                                                                      TASK-05
/*
#include <iostream>
using namespace std;
int main()
{
    // Declare variables
    int age, creditHours, feePerCreditHour;
    // Input values
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter credit hours: ";
    cin >> creditHours;
    cout << "Enter fee per credit hour: ";
    cin >> feePerCreditHour;
    // Calculate total fee and discounted fee
    int totalFee = creditHours * feePerCreditHour;
    int discountedFee = totalFee - 2000;
    // Calculate year of birth
    int birthYear = 2026 - age;
    // Calculate year when the student turns 25
    int yearTurning25 = birthYear + 25;
    // Display results
    cout << "\nTotal Fee: " << totalFee << endl;
    cout << "Fee after discount: " << discountedFee << endl;
    cout << "Year of Birth: " << birthYear << endl;
    cout << "Year you will turn 25: " << yearTurning25 << endl;
    
    // Experiment 1:
    // Input: 19 15 8000
    // All three values can be entered on one line separated by spaces.Pressing Enter after each value also works. Tabs and spaces both separate values when using cin.

    // Experiment 2:
    // If age = 19.8, then 19 is stored in the variable age because the decimal part is discarded when converting to int.
    
    return 0;
}
*/
//                                                                     TASK-06

#include <iostream>
using namespace std;
int main()
{
    int price, quantity;
    int total, tax, grandtotal;
    cout << "Enter the pirce of product=";
    cin >> price;
    cout << "Enter the quantity of product=";
    cin >> quantity;
    total = price * quantity;
    tax = total * 5 / 100;
    grandtotal = total + tax;
    cout << "Total=" << total << endl;
    cout << "Tax=" << tax << endl;
    cout << "Grandtotal=" << grandtotal << endl;

    // For price = 99 and quantity = 7, tax is 34 instead of 34.65 because int variables discard the decimal part.

    return 0;
        
}