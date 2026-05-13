#include <string>
#include <iostream>
using namespace std;

int main()
{
    string values;
    getline(cin, values);
    string template_str; // Змінив назву з template на template_str, бо template - це зарезервоване слово в C++
    getline(cin, template_str);
    size_t start = 0;
    while (start < values.length()) {
        size_t comma = values.find(',', start);
        string pair = values.substr(start, comma - start);
        size_t eq = pair.find('=');
        if (eq != string::npos) {
            string name = pair.substr(0, eq);
            string value = pair.substr(eq + 1);
            string placeholder = "[" + name + "]";
            size_t pos = 0;
            while ((pos = template_str.find(placeholder, pos)) != string::npos) {
                template_str.replace(pos, placeholder.length(), value);
                pos += value.length();
            }
        }  
        if (comma == string::npos) break;
        start = comma + 1;
    }
    cout << template_str << "\n";
    return 0;
}
