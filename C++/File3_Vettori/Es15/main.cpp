#include <iostream>
#include <vector>
using namespace std;

void add_letters(int number_letters, vector<char> &v1, vector<char> &v2)
{
    while (v1.size() < number_letters)
    {
        v1.push_back(rand() % ('z' - 'a') + 'a');
    }
    while (v2.size() < number_letters)
    {
        v2.push_back(rand() % ('z' - 'a') + 'a');
    }
}

bool check_word_valid(vector<char> v, string word, string word_old)
{
    bool inside = false, empty = word_old.empty();
    for (int i = 0; i < word.length() && !empty; ++i)
    {
        for (int j = 0; j < word_old.length(); ++j)
        {
            if (word.at(i) == word_old.at(j))
            {
                inside = true;
            }
        }
    }
    if (!inside && !empty)
    {
        return false;
    }
    for (int i = 0; i < word.size(); ++i)
    {
        bool found = false;
        for (int j = 0; j < v.size() && !found; ++j)
        {
            if (word.at(i) == v.at(j))
            {
                v.at(j) = -1;
                found = true;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        if (v.at(i) == -1)
        {
            count++;
        }
    }
    if (count != word.length())
    {
        return false;
    }
    return true;
}

void update_char_list(vector<char> &v, string word)
{
    for (int i = 0; i < word.size(); ++i)
    {
        bool found = false;
        for (int j = 0; j < v.size() && !found; ++j)
        {
            if (word.at(i) == v.at(j))
            {
                char last_letter = v.back();
                v.back() = v.at(j);
                v.at(j) = last_letter;
                v.pop_back();
                found = true;
            }
        }
    }
}

int main()
{
    srand(time(NULL));
    const int number_letters = 20;
    const int rounds = 2;
    vector<char> v1, v2;
    for (int i = 0; i < number_letters; ++i)
    {
        v1.push_back(rand() % ('z' - 'a') + 'a');
        v2.push_back(rand() % ('z' - 'a') + 'a');
    }
    string word;
    string word1;
    string word2;
    int points1 = 0, points2 = 0;
    for (int i = 0; i < rounds; ++i)
    {
        bool valid;
        char letter;
        do
        {
            cout << "All letters:\n";
            for (int i = 0; i < number_letters; ++i)
            {
                cout << v1.at(i) << " ";
            }
            cout << endl;
            cout << "Last word was: ";
            cout << word1 << endl;
            cout << "Player 1, Enter the word:";
            cin >> word;
            valid = true;
            if (check_word_valid(v1, word, word1))
            {
                word1 = word;
                points1 += word.length();
                update_char_list(v1, word);
                cout << endl;
            }
            else
            {
                cout << "Invalid word\n\n";
                valid = false;
            }
        }
        while (!valid);
        do
        {
            cout << "All letters:\n";
            for (int i = 0; i < number_letters; ++i)
            {
                cout << v2.at(i) << " ";
            }
            cout << endl;
            cout << "Last word was: ";
            cout << word2 << endl;
            cout << "Player 2, Enter the word:";
            cin >> word;
            valid = true;
            if (check_word_valid(v2, word, word2))
            {
                word2 = word;
                points2 += word.length();
                update_char_list(v2, word);
                cout << endl;
            }
            else
            {
                cout << "Invalid word\n\n";
                valid = false;
            }
        }
        while (!valid);
        add_letters(number_letters, v1, v2);
    }
    cout << "Il punteggio finale e':\n";
    cout << "Player 1: " << points1 << endl;
    cout << "Player 2: " << points2 << endl;




    return 0;
}
