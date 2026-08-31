// Five questions
// Count correct answers
// Return results

#include <random>
#include <iostream>
#include <print>

using namespace std;

int main()
{
    random_device rd;                       // non-deterministic generator
    mt19937 gen(rd());                      // to seed mersenne twister. Mersene twister is a pseudo random number generator
    uniform_int_distribution<> dist(0, 20); // Define a distribution

    int correct_answers = 0;

    for (int i = 0; i < 5; ++i)
    {
        int first_num = dist(gen);
        int second_num = dist(gen);

        cout << "What is " << first_num << "-" << second_num << "?\n"; //

        int user_answer = 0;
        int answer = 0;

        cin >> user_answer;
        answer = first_num - second_num;
        if (answer == user_answer)
        {
            // increment correct answer count
            ++correct_answers;
        }

        else
        {
            // Do nothing
        }
    }

    std::print("{}/{}\n", correct_answers, 5);
}

// Try
// Randomize the mathematical operation, including square root, power operation, division, multiplication, increase numbers to three