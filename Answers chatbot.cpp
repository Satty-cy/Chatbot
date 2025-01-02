#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string input;
    map<string, string> responses = {
        {"hello", "Hello! How can I help you?"},
        {"name", "I'm Chatbot 1.0, your assistant."},
        {"time", "Sorry, I don't have a clock, but it's always time to learn!"},
        {"bye", "Goodbye! Have a great day!"}
    };

    cout << "Chatbot: Hi! Ask me something or say 'bye' to exit.\n";

    while (true) {
        cout << "You: ";
        getline(cin, input);

        if (input == "bye") {
            cout << "Chatbot: Goodbye!\n";
            break;
        } else {
            bool found = false;
            for (auto& pair : responses) {
                if (input.find(pair.first) != string::npos) {
                    cout << "Chatbot: " << pair.second << "\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Chatbot: I don't understand that yet.\n";
            }
        }
    }
    return 0;
}
