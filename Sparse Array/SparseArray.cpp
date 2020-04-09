#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

// Complete the matchingStrings function below.
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    int lenQ=queries.size();
    int lenS=strings.size();
    vector <int> rep;
    int count=0;
    for(int i=0;i<lenQ;++i){
        count = 0;
        for(int j=0;j<lenS;++j){
            if(queries[i].compare(strings[j])==0){
                count++;
            } else {
                continue;
            }
        }
        std::cout<<count<<std::endl;
        rep.push_back(count);
    }
    return rep;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int strings_count;
    cin >> strings_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> strings(strings_count);

    for (int i = 0; i < strings_count; i++) {
        string strings_item;
        getline(cin, strings_item);

        strings[i] = strings_item;
    }

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        string queries_item;
        getline(cin, queries_item);

        queries[i] = queries_item;
    }

    vector<int> res = matchingStrings(strings, queries);

    for (int i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
