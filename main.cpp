#include <iostream>
#include <iomanip>
#include <string>
#include <unistd.h>
#include <thread> 
#include <chrono>
#include <vector>

using namespace std;

//this is to show the menu
void showMenu()
{
    int choice;

    //display the options
    cout << "=========================================\n";
    cout << "       Welcome to AI Wonderland\n";
    cout << "=========================================\n";

    cout << "Please select your adventure:\n";
    cout << "1. What is Artificial Intelligence?\n";
    cout << "2. How does AI work?\n";
    cout << "3. What are the applications of AI?\n";
    cout << "4. What are the challenges of AI?\n";
    cout << "5. What is the future of AI?\n";
    cout << "6. What are ethical considerations in AI?\n";
    cout << "7. Basic Rules of AI\n";
    cout << "8. Impact of AI on Society\n";
    cout << "9. Famous AI Technologies\n";
    cout << "10. AI in Everyday Life\n";
    cout << "\nEnter 'quiz' to test your understanding!!\n";
    cout << "\nType 'exit' to quit the program.\n";
    cout << "=========================================\n";
}

// Function to explain what Artificial Intelligence is
void explainWhatIsAI()
{
    // Clear the console for better readability
    cout << "\033[2J\033[1;1H"; // ANSI escape code to clear the screen
    cout << "\033[1m\nWhat is Artificial Intelligence?\n\033[0m";
    cout << "Artificial Intelligence (AI) is a branch of computer science focused on building smart machines\n";
    cout << "that can perform tasks that typically require human intelligence.\n";
    cout << "These tasks include learning, reasoning, problem-solving, understanding language, and perception.\n";
    cout << "AI combines algorithms, data, and computing power to mimic human cognitive functions in machines.\n";

    int input;
    cout << "\nEnter 0 to return to the main menu: ";
        while (true) {
            if (!(cin >> input)) {
                cin.clear(); // Clear the error
                cin.ignore(10000, '\n'); // Discard invalid input
                cout << "Please enter 0 to return: ";
            } else if (input == 0) {
                break;
            } else {
                cout << "Please enter 0 to return: ";
            }
        }
    cin.ignore(10000, '\n'); // Clean up any leftover input
}

//function to explain how AI works
void explainHowAIWorks(int choice)
{
    // Clear the console for better readability
    cout << "\033[2J\033[1;1H"; // ANSI escape code to clear the console and move cursor to top-left
    cout << "\033[1m\nHow AI Works:\n\033[0m";
    cout << "Artificial Intelligence (AI) works by simulating human intelligence processes through algorithms and computational models.\n";
    cout << "It involves machine learning, where systems learn from data, and deep learning, which uses neural networks to analyze complex patterns.\n";
    cout << "AI systems can process vast amounts of information, recognize patterns, and make decisions based on learned experiences.\n";

    int input;
    cout << "\nEnter 0 to return to the main menu: ";
        while (true) {
            if (!(cin >> input)) {
                cin.clear(); // Clear the error
                cin.ignore(10000, '\n'); // Discard invalid input
                cout << "Please enter 0 to return: ";
            } else if (input == 0) {
                break;
            } else {
                cout << "Please enter 0 to return: ";
            }
        }
    cin.ignore(10000, '\n'); // Clean up any leftover input
}

// Function to explain the applications of AI
void explainApplicationsOfAI()
{
    // Clear the console for better readability
    cout << "\033[2J\033[1;1H"; // ANSI escape code to clear the screen
    cout << "\033[1m\nApplications of Artificial Intelligence:\n\033[0m";
    cout << "1. Healthcare      : AI helps doctors detect diseases, analyze medical data, and assist in surgeries.\n";
    cout << "2. Transportation  : Self-driving cars use AI to drive safely and avoid obstacles.\n";
    cout << "3. Finance         : AI is used to detect fraud, manage investments, and automate trading.\n";
    cout << "4. Education       : AI gives personalized learning, grading assistance, and tutoring support.\n";
    cout << "5. Retail          : Online stores use AI for product recommendations and managing stock.\n";
    cout << "6. Entertainment   : AI creates music, suggests movies, and powers video game characters.\n";
    cout << "7. Customer Service: Chatbots and virtual assistants answer questions 24/7.\n";

    int input;
    cout << "\nEnter 0 to return to the main menu: ";
        while (true) {
            if (!(cin >> input)) {
                cin.clear(); // Clear the error
                cin.ignore(10000, '\n'); // Discard invalid input
                cout << "Please enter 0 to return: ";
            } else if (input == 0) {
                break;
            } else {
                cout << "Please enter 0 to return: ";
            }
        }
    cin.ignore(10000, '\n'); // Clean up any leftover input
}

// Function to explain the challenges of AI
void challengesofAI()
{
    // Clear screen for readability
    cout << "\033[2J\033[1;1H";
    
    // Title in bold
    cout << "\033[1m\nChallenges of Artificial Intelligence:\n\033[0m";

    // List of challenges using simple terms
    cout << "1. Bias        : AI can be unfair if trained with unfair data.\n";
    cout << "2. Privacy     : AI sometimes needs a lot of personal data.\n";
    cout << "3. Job loss    : AI might replace some human jobs.\n";
    cout << "4. High cost   : Building AI needs strong computers and money.\n";
    cout << "5. Security    : AI can be hacked or misused.\n";
    cout << "6. Trust       : People may not fully trust AI decisions.\n";
    cout << "7. Control     : Hard to control or stop powerful AI systems.\n";

    int input;
    cout << "\nEnter 0 to return to the main menu: ";
        while (true) {
            if (!(cin >> input)) {
                cin.clear(); // Clear the error
                cin.ignore(10000, '\n'); // Discard invalid input
                cout << "Please enter 0 to return: ";
            } else if (input == 0) {
                break;
            } else {
                cout << "Please enter 0 to return: ";
            }
        }
    cin.ignore(10000, '\n'); // Clean up any leftover input
}

// Function to explain the Future of AI
void explainFutureOfAI() {
    cout << "\n\033[1mFuture of AI:\033[0m\n";
    cout << "The future of Artificial Intelligence is expected to be increasingly transformative across all aspects of society.\n";
    cout << "AI will become more advanced and personalized, playing a key role in sectors like healthcare, education, transportation and smart cities.\n";
    cout << "We may see the development of Artificial General Intelligence (AGI), where machines can perform any intellectual task that a human can do.\n";
    cout << "As AI continues to evolve, it will likely reshape how we work, live and interact with technology, raising both opportunities and ethical challenges.\n";

    int input;
    cout << "\nEnter 0 to return to the main menu: ";
        while (true) {
            if (!(cin >> input)) {
                cin.clear(); // Clear the error
                cin.ignore(10000, '\n'); // Discard invalid input
                cout << "Please enter 0 to return: ";
            } else if (input == 0) {
                break;
            } else {
                cout << "Please enter 0 to return: ";
            }
        }
    cin.ignore(10000, '\n'); // Clean up any leftover input
}

// Function to explain the ethical considerations in AI
void explainEthicalConsiderations() 
{
    // Clear the console for better readability
    cout << "\033[2J\033[1;1H"; // ANSI escape code to clear the screen
    cout << "\033[1m\nEthical Considerations in Artificial Intelligence:\n\033[0m";
    cout << "1. Bias and Fairness     : AI systems can reflect or amplify societal biases if not trained properly.\n";
    cout << "2. Transparency          : Many AI systems are 'black boxes'—it's hard to understand how they make decisions.\n";
    cout << "3. Accountability        : It's often unclear who is responsible when AI makes a mistake.\n";
    cout << "4. Privacy               : AI may use large amounts of personal data, raising privacy concerns.\n";
    cout << "5. Consent               : Users may not always be aware their data is being used for AI.\n";
    cout << "6. Job Displacement      : Ethical concerns arise from AI replacing human workers.\n";
    cout << "7. Autonomous Decisions  : Self-driving cars and military drones raise questions about life-and-death decisions by machines.\n";

    int input;
    cout << "\nEnter 0 to return to the main menu: ";
        while (true) {
            if (!(cin >> input)) {
                cin.clear(); // Clear the error
                cin.ignore(10000, '\n'); // Discard invalid input
                cout << "Please enter 0 to return: ";
            } else if (input == 0) {
                break;
            } else {
                cout << "Please enter 0 to return: ";
            }
        }
    cin.ignore(10000, '\n'); // Clean up any leftover input
}

//table of AI 
void displayAIRulesTable() {
    cout << left << setw(5) << "No."
         << setw(25) << "Rule"
         << "Description" << endl;
    cout << string(70, '-') << endl;

    cout << left << setw(5) << 1 << setw(25) << "Data is the Foundation"
         << "AI learns from large, high-quality data." << endl;

    cout << left << setw(5) << 2 << setw(25) << "Algorithms Drive AI"
         << "Algorithms process data and make decisions." << endl;

    cout << left << setw(5) << 3 << setw(25) << "Learning Types"
         << "Supervised, Unsupervised, and Reinforcement learning." << endl;

    cout << left << setw(5) << 4 << setw(25) << "Generalization"
         << "AI should work well on new unseen data." << endl;

    cout << left << setw(5) << 5 << setw(25) << "Feedback Improves AI"
         << "Learning from new data improves accuracy." << endl;

    cout << left << setw(5) << 6 << setw(25) << "Ethics and Fairness"
         << "AI must be fair, unbiased, and ethical." << endl;

    cout << left << setw(5) << 7 << setw(25) << "Human-in-the-Loop"
         << "Human oversight is vital for critical AI tasks." << endl;

    cout << left << setw(5) << 8 << setw(25) << "Explainability"
         << "Users should understand AI decisions." << endl;

         int input;
    cout << "\nEnter 0 to return to the main menu: ";
        while (true) {
            if (!(cin >> input)) {
                cin.clear(); // Clear the error
                cin.ignore(10000, '\n'); // Discard invalid input
                cout << "Please enter 0 to return: ";
            } else if (input == 0) {
                break;
            } else {
                cout << "Please enter 0 to return: ";
            }
        }
    cin.ignore(10000, '\n'); // Clean up any leftover input

}


void impactOfAIOnSociety() {
    cout << "\033[2J\033[1;1H"; // Clear screen
    cout << "\033[1m\nImpact of AI on Society:\033[0m\n";
    cout << "AI is transforming the way we live and work:\n";
    cout << "- Increases efficiency in healthcare, transport, and industry.\n";
    cout << "- Helps predict trends and personalize user experiences.\n";
    cout << "- Raises concerns around unemployment, surveillance, and ethics.\n";
    cout << "- Changes education by enabling personalized learning.\n";
    cout << "- Influences law enforcement, which must be balanced with rights.\n";

    int input;
    cout << "\nEnter 0 to return to the main menu: ";
    while (true) {
        if (!(cin >> input) || input != 0) {
            cin.clear(); cin.ignore(10000, '\n');
            cout << "Please enter 0 to return: ";
        } else break;
    }
    cin.ignore(10000, '\n');
}


void famousAITechnologies() {
    cout << "\033[2J\033[1;1H"; // Clear screen
    cout << "\033[1m\nFamous AI Technologies:\033[0m\n";
    cout << "Here are some well-known AI systems:\n";
    cout << "- \033[1mChatGPT\033[0m: OpenAI's language model for conversation.\n";
    cout << "- \033[1mSiri & Alexa\033[0m: Virtual assistants using NLP and voice AI.\n";
    cout << "- \033[1mTesla Autopilot\033[0m: AI used in self-driving cars.\n";
    cout << "- \033[1mIBM Watson\033[0m: AI for business, healthcare, and more.\n";
    cout << "- \033[1mAlphaGo\033[0m: DeepMind’s AI that beat human champions in Go.\n";

    int input;
    cout << "\nEnter 0 to return to the main menu: ";
    while (true) {
        if (!(cin >> input) || input != 0) {
            cin.clear(); cin.ignore(10000, '\n');
            cout << "Please enter 0 to return: ";
        } else break;
    }
    cin.ignore(10000, '\n');
}


void aiInEverydayLife() {
    cout << "\033[2J\033[1;1H"; // Clear screen
    cout << "\033[1m\nAI in Everyday Life:\033[0m\n";
    cout << "AI impacts many daily activities:\n";
    cout << "- Recommends videos on YouTube and shows on Netflix.\n";
    cout << "- Powers smart assistants like Google Assistant and Siri.\n";
    cout << "- Enables facial recognition on phones.\n";
    cout << "- Optimizes traffic via GPS apps like Google Maps.\n";
    cout << "- Detects spam and filters emails.\n";

    int input;
    cout << "\nEnter 0 to return to the main menu: ";
    while (true) {
        if (!(cin >> input) || input != 0) {
            cin.clear(); cin.ignore(10000, '\n');
            cout << "Please enter 0 to return: ";
        } else break;
    }
    cin.ignore(10000, '\n');
}

//Quiz function
void playQuiz() {
    struct Question {
        string question;
        string optionA;
        string optionB;
        string optionC;
        char correctAnswer;
    };

    vector<Question> quiz = {
        {"What is the main goal of AI?", "A. To replace computers", "B. To simulate human intelligence", "C. To create websites", 'B'},
        {"Which of the following is a branch of AI?", "A. Machine Learning", "B. Word Processing", "C. Spreadsheet Management", 'A'},
        {"AI systems primarily learn through:", "A. Guesswork", "B. Randomness", "C. Data and algorithms", 'C'},
        {"Which of these is a healthcare AI application?", "A. Weather forecasting", "B. Disease detection", "C. Building bridges", 'B'},
        {"Which is a major challenge of AI?", "A. Too much oil consumption", "B. Privacy concerns", "C. Climate change", 'B'},
        {"What might AI impact in the future?", "A. Agriculture only", "B. Just education", "C. All aspects of society", 'C'},
        {"Ethical AI should avoid:", "A. Transparency", "B. Bias", "C. Accuracy", 'B'},
        {"AI in finance is used for:", "A. Painting", "B. Fraud detection", "C. Playing music", 'B'},
        {"Self-driving cars use AI to:", "A. Change colors", "B. Avoid obstacles", "C. Cook food", 'B'},
        {"What does deep learning use?", "A. Binary trees", "B. Decision charts", "C. Neural networks", 'C'},
        {"What is NLP in AI?", "A. Natural Language Processing", "B. Network Logic Protocol", "C. Non-Linear Programming", 'A'},
        {"Which company developed AlphaGo?", "A. Microsoft", "B. DeepMind", "C. OpenAI", 'B'},
        {"What kind of learning uses labeled data?", "A. Unsupervised learning", "B. Reinforcement learning", "C. Supervised learning", 'C'},
        {"What is a Turing Test used for?", "A. Testing AI memory", "B. Checking AI ethics", "C. Measuring machine intelligence", 'C'},
        {"What does an AI chatbot typically use?", "A. HTML tables", "B. Natural language understanding", "C. Image rendering", 'B'}
    };

    string input;
    for (size_t i = 0; i < quiz.size(); ++i) {
        const auto& q = quiz[i];

        cout << "\nQuestion " << (i + 1) << ": " << q.question << "\n";
        cout << q.optionA << "\n" << q.optionB << "\n" << q.optionC << "\n";

        while (true) {
            cout << "Enter A, B, or C (or type 'exit' to return to main menu): ";
            cin >> input;

            // Convert to uppercase
            for (auto& c : input) c = toupper(c);

            if (input == "EXIT") {
                cout << "Exiting quiz...\n";
                return;
            }

            if (input.length() == 1 && (input[0] == 'A' || input[0] == 'B' || input[0] == 'C')) {
                if (input[0] == q.correctAnswer) {
                    cout << "Correct!\n";
                    break;
                } else {
                    cout << "Wrong answer. Try again.\n";
                }
            } else {
                cout << "Invalid choice. Please enter A, B, or C.\n";
            }
        }
    }

    // End of quiz
    cout << "\n🎉 Quiz completed! 🎉\n";
    cout << "Enter 0 to return to the main menu: ";
    string wait;
    while (true) {
        cin >> wait;
        if (wait == "0") break;
        cout << "Please enter 0 to return: ";
    }
}


//main program
int main()
{
    string userInput;
    int choice;

    while (true)
    {
        showMenu();
        cout << "Enter your choice (1–10), type 'quiz' to play the quiz, or 'exit' to quit: ";
        cin >> userInput;

        // Handle quiz input
        if (userInput == "quiz" || userInput == "QUIZ") {
            playQuiz();
            continue;
        }

        // Handle exit input
        if (userInput == "exit" || userInput == "EXIT") {
            cout << "Exiting the program. Goodbye!\n";
            break;
        }

        // Try to convert to integer choice
        try {
            choice = stoi(userInput);
        } catch (...) {
            cout << "Invalid input. Please enter a number (1–10), 'quiz', or 'exit'.\n";
            this_thread::sleep_for(chrono::seconds(2));
            continue;
        }

        switch (choice)
        {
            case 1: explainWhatIsAI(); break;
            case 2: explainHowAIWorks(choice); break;
            case 3: explainApplicationsOfAI(); break;
            case 4: challengesofAI(); break;
            case 5: explainFutureOfAI(); break;
            case 6: explainEthicalConsiderations(); break;
            case 7: displayAIRulesTable(); break;
            case 8: impactOfAIOnSociety(); break;
            case 9: famousAITechnologies(); break;
            case 10: aiInEverydayLife(); break;
            default:
                cout << "Invalid choice. Please select a valid option.\n";
                this_thread::sleep_for(chrono::seconds(2));
        }
    }

    return 0;
}
