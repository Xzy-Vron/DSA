class Solution {
public:
    string interpret(string command) {
        string parsed;
        for (int i =0; i<command.size(); i++) {
            if (command[i] == 'G') {
                parsed.push_back(command[i]);
            }
            else if (command[i] == '(' && command[i+1] == ')') {
                parsed.push_back('o');
                i++;
            }
            else {
                parsed.push_back('a');
                parsed.push_back('l');
                i = i + 3;
            }
        }
        return parsed;
    }
};