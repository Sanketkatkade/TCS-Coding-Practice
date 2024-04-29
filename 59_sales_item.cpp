// #include <iostream>
// #include <string>
// #include <sstream>
// #include <vector>
// using namespace std;

// int main()
// {
//     string input;
//     getline(cin, input);
//     vector<string> v;

//     string temp;
//     for (int i = 0; i < input.size(); i++)
//     {
//         if (input[i - 1] == ')' && input[i] == ',')
//         {
//             v.push_back(temp);
//             temp = "";
//         }
//         else
//         {
//             temp += input[i];
//         }
//     }
//     v.push_back(temp);
//     vector<string>str;
//     vector<float>num1;
//     vector<int>num2;
//     int count = 1;
//     for(int i = 0; i < v.size(); i++){
//         string temp = "";
//         for(int j = 0; j < v[i].size(); j++){
//             temp+= v[i][j];
//             if(v[i][j] == ',' && count == 1){
//                 str.push_back(temp);
//                 temp
//             }
//         }
//     }
    
//     return 0;
// }


#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

struct SalesRecord {
    string product;
    double unit_price;
    int count;
};

int main() {
    string s;
    getline(cin, s);

    vector<SalesRecord> records;
    string tupleStr;
    for (char c : s) {
        if (c == ',' || c == ']') {
            stringstream ss(tupleStr);
            string product;
            double unit_price;
            int count;
            ss >> product >> unit_price >> count;
            records.push_back({product, unit_price, count});
            tupleStr = "";
        } else if (c != '[' && c != '(' && c != ')' && c != ' ') {
            tupleStr += c;
        }
    }

    // Print parsed records
    for (const auto& record : records) {
        cout << "Product: " << record.product << ", Unit Price: " << record.unit_price << ", Count: " << record.count << endl;
    }

    return 0;
}
