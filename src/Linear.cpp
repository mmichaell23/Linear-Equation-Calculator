#include <iostream>
using namespace std;

struct xVar {
    double prompt1, prompt2, prompt3;
    double result, emerge;
    // var
    void Calculator() {
         do { 
            cout << "\nSolve for x \nGiven the formula: Ax + By = C" << endl; 
            
            cout << "\nCoefficient of x: ";
            cin >> prompt1;
            cout << "Coefficient of y: ";
            cin >> prompt2;
            cout << "Constant: ";
            cin >> prompt3;
            // user input
            
            cout << "\nYour equation: " << prompt1 << "x + " << prompt2 << "y = " << prompt3 << endl; // will print the equation of the user input

            cout << "\n" << "= " << prompt1 << "x + " << prompt2 << " - " << prompt2 << " = " << prompt3 << " - " << prompt2 << endl;
            result = prompt3 - prompt2; 
            cout << "= " << prompt1 << "x = " << result << endl;
            cout << "\n" << prompt1 << "x =  " << result << endl;
            cout << "_     " << "_" << endl;
            cout << "   =   ";
            cout << "\n" << prompt1 << "     " << prompt1 << endl;
            emerge = result / prompt1; 
            // print the solution 

            cout << "\nx = " << emerge << endl; // print the result
            break;
        } while (true);
    }
}; 

struct yVar {
    double prompt1, prompt2, prompt3; // var
    
    void Calculator() {
        do {
        
        cout << "\nSolve for y \nGiven the formula: Ax + By = C" << endl; 

        cout << "\nCoefficient of x: ";
        cin >> prompt1;
        cout << "Coefficient of y: ";
        cin >> prompt2;
        cout << "Constant: ";
        cin >> prompt3;
        // user input

        cout << "\nYour equation: " << prompt1 << "x + " << prompt2 << "y = " << prompt3 << endl; // will print the equation of the user input

        cout << "\n= " << "" << prompt1 << "x + " << prompt2 << "y - " << prompt1 << "x" << " = " << prompt3 << " - " << prompt1 << "x" << endl;
        cout << "= " << prompt2 << "y = " << prompt3 << " - " << prompt1 << "x" << endl;
        cout << "= " << "(" << prompt2 << "y)" << " / " << prompt2 << " = " << "(" << prompt3 << " - " << prompt1 << "x)" << " / " << prompt2 << endl;
        cout << "\ny = " << "(" << prompt3 << " - " << prompt1 << "x)" << " / " << prompt2 << endl;
        // print the solution
        break;
        } while (true);
    }
};

struct Slope {
    double prompt1, prompt2, prompt3;
    double result;
    // var
    void Calculator() {
        do { 
        
        cout << "\nSolve for Slope \nGiven the formula: Ax + By = C" << endl; 

        cout << "\nCoefficient of x: ";
        cin >> prompt1;
        cout << "Coefficient of y: ";
        cin >> prompt2;
        cout << "Constant: ";
        cin >> prompt3;
        // user input
        
        cout <<  "\nYour equation: " << prompt1 << "x + " << prompt2 << "y = " << prompt3 << endl; // will print the equation of the user input
        
        cout << "\n" << "= " << "(" << prompt1 << ")" << " / " << prompt2 << "y" << endl;
        result = prompt1 / prompt2;
        // print the solution
        cout << "Slope = " << result; // print the result
        
        break;
        } while (true);
    }
};

struct yIntercept {
    double prompt1, prompt2, prompt3;
    double result;
    // var
    void Calculator() {
        do { 
        
        cout << "\nSolve for Y-intercept \nGiven the formula: Ax + By = C" << endl; 

        cout << "\nCoefficient of x: ";
        cin >> prompt1;
        cout << "Coefficient of y: ";
        cin >> prompt2;
        cout << "Constant: ";
        cin >> prompt3;
        // user input

        cout << "\nYour equation: " << prompt1 << "x + " << prompt2 << "y = " << prompt3 << endl; // will print the equation of the user input

        cout << "\n" << prompt2 << "y = " << prompt3 << " - " << prompt1 << "x";
        cout << "\ny = " << "(" << prompt3 << " - " << prompt1 << "x)" << " / " << prompt2 << endl;
        result = prompt3 / prompt2;
        // print the solution
        cout << "\nY-intercept: " << result; // print the result
        break;
        } while (true);
    }
};

struct slopeIntercept {
    double prompt1, prompt2, prompt3;
    double result, emerge;
    // var
    void Calculator() {
        do { 
        
        cout << "\nSolve for Slope Intercept \nGiven the formula: Ax + By = C" << endl;

        cout << "\nCoefficient of x: ";
        cin >> prompt1;
        cout << "Coefficient of y: ";
        cin >> prompt2;
        cout << "Constant: ";
        cin >> prompt3;
        // user input 

        cout << "\nYour equation: " << prompt1 << "x + " << prompt2 << "y = " << prompt3 << endl; // will print the equation 

        cout << "\ny = " << prompt1 << "x + " << prompt3 << endl;
        cout << "y = (" << -prompt1 << "x + " << prompt3 << ") / " << prompt2 << endl;
        result = prompt1 / prompt2;
        emerge = prompt3 / prompt2;
        // print the solution
        cout << "\nSlope-intercept: y = " << result << "x + " << emerge << endl; // print the result
        break;
        } while (true);
    }
};

int main() {
    struct xVar xvar;
    struct yVar yvar;
    struct Slope slope;
    struct yIntercept yintercept;
    struct slopeIntercept slopeintercept;
    // being executed of the struct classes

    int prompt;
    cout << "Linear Equation" << "\n[1] X-Varible [2] Y-Variable [3] Slope [4] Y-intercept [5] Slope-Intercept" << endl;
    cout << "Your input: ";
    cin >> prompt;
    // user input

    if (prompt == 1) {  // if the user choose 1 - 5
        xvar.Calculator(); // will execute the calculator
    } else if (prompt == 2) {
        yvar.Calculator();
    } else if (prompt == 3) {
        slope.Calculator();
    } else if (prompt == 4) {
        yintercept.Calculator();
    } else if (prompt == 5) {
        slopeintercept.Calculator();
    } else {
        cout << "Please try again..." << endl;
        // if the user, input none of the above; will print the statement
    }
}