// Simple Grade Calculator.

#include <iostream>
using namespace std;

int main()
{
    int score;
    char grade;
    string comment;
    bool isEligible;

    // Input
    cout << "Enter the score (0-100): ";
    cin >> score;

    // Calculate grade
    grade = (score >= 90) ? 'A' : (score >= 80) ? 'B'
                              : (score >= 70)   ? 'C'
                              : (score >= 60)   ? 'D'
                              : (score >= 50)   ? 'E'
                                                : 'F';

    // switch-case
    switch (grade)
    {
    case 'A':
        comment = "Excellent work!";
        break;
    case 'B':
        comment = "Great job!";
        break;
    case 'C':
        comment = "Good effort!";
        break;
    case 'D':
        comment = "You passed, but there's room for improvement.";
        break;
    case 'E':
        comment = "You barely passed. Consider revising the material.";
        break;
    case 'F':
        comment = "You failed. Work harder next time.";
        break;
    default:
        comment = "Invalid grade.";
    }

    // Check eligibility
    if (grade == 'A' || grade == 'B' || grade == 'C')
    {
        isEligible = true;
    }
    else
    {
        isEligible = false;
    }

    // Results
    cout << "\nScore: " << score;
    cout << "\nGrade: " << grade;
    cout << "\nComment: " << comment;
    cout << "\nEligibility for the next level: " << (isEligible ? "Yes" : "No") << endl;

    return 0;
}
