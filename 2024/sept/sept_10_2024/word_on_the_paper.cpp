#include <iostream>

using namespace std;

int main()
{
    int n_words = 0;
    cin >> n_words;

    char line[8][8];
    bool found = false;
    int index_with_char = 0;

    string word = "";
    string words[n_words] = {""};
    for (int i = 0; i < n_words; i++)
    {
        index_with_char = 0;
        found = false;
        word = "";

        for (int c = 0; c < 8; c++)
        {
            cin >> line[c];
        }

        for (int c = 0; c < 8; c++)
        {
            if (found)
            {
                if (line[c][index_with_char] != '.')
                {
                    word += line[c][index_with_char];
                }
                else
                {
                    break;
                }
            }
            else
            {
                for (int j = 0; j < 8; j++)
                {
                    if (line[c][j] != '.')
                    {
                        found = true;
                        index_with_char = j;
                        word += line[c][j];
                    }
                }
            }
        }

        words[i] = word;
    }

    for (int i = 0; i < n_words; i++) {
        cout << words[i] << endl;
    }
}