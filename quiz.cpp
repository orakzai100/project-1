#include "quiz.h"
#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

bool askQuestion(const string& question, const string options[4], char correctAnswer) {
    cout << question << endl;
    for (char opt = 'A'; opt <= 'D'; opt++) {
        cout << opt << ") " << options[opt - 'A'] << endl;
    }

    char userAnswer;
    cout << "Your answer (A/B/C/D): ";
    cin >> userAnswer;
    userAnswer = toupper(userAnswer);

    if (userAnswer == correctAnswer) {
        cout << "Correct!\n\n";
        return true;
    } else {
        cout << "Wrong. Correct answer was " << correctAnswer << ".\n\n";
        return false;
    }
}

int startQuiz() {
    int score = 0;

    string q1_opts[4] = {"Paris", "London", "Berlin", "Rome"};
    string q2_opts[4] = {"5", "4", "3", "2"};
    string q3_opts[4] = {"Blue", "Red", "Green", "Yellow"};
    string q4_opts[4] = {"Earth", "Mars", "Jupiter", "Saturn"};
    string q5_opts[4] = {"Shakespeare", "Tolstoy", "Hemingway", "Orwell"};
    string q6_opts[4] = {"299,792 km/s", "150,000 km/s", "1,080 km/h", "300,000 m/s"};

    if (askQuestion("1. What is the capital of France?", q1_opts, 'A')) score++;
    if (askQuestion("2. What is 2 + 2?", q2_opts, 'B')) score++;
    if (askQuestion("3. What color do you get by mixing blue and yellow?", q3_opts, 'C')) score++;
    if (askQuestion("4. Which planet is known as the Red Planet?", q4_opts, 'B')) score++;
    if (askQuestion("5. Who wrote 'Romeo and Juliet'?", q5_opts, 'A')) score++;
    if (askQuestion("6. What is the speed of light?", q6_opts, 'A')) score++;

    return score;
}
