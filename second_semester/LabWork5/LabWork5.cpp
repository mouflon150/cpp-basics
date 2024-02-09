// LabWork5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Функции

#include <iostream>
#include <cstring>
#include <ctype.h>

using namespace std;

int main()
{
    // Task #1
    setlocale(LC_ALL, "RUS");
    /*char str[100];
    cin.getline(str, 100);
    bool containsNonAlpha = false;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalpha(str[i]) && !isspace(str[i])) {
            containsNonAlpha = true;
            break;
        }
    }
    if (containsNonAlpha) {
        cout << "Текст содержит символы, отличные от букв и пробелов." << endl;
    }
    else {
        cout << "Текст состоит только из букв и пробелов." << endl;
    }
    return 0;*/

    // Task #2
    /*char str[10];
    cin.getline(str, 10);
    int countChanges = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
            ++countChanges;
        }
        else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
            ++countChanges;
        }
    }
    cout << "Измененный текст: " << str << endl;
    cout << "Общее число произведенных замен: " << countChanges << endl;
    return 0;*/

    // Task #3
    /*char text[66];
    cin.getline(text, 66); 
    for (int i = 0; i < strlen(text); i++) {
        if (text[i] == 'o' && text[i + 1] == 'n' && text[i + 2] == 'e') {
            for (int j = strlen(text) + 2; j > i + 2; j--) {
                text[j] = text[j - 2];
            }
            text[i] = 't';
            text[i + 1] = 'h';
            text[i + 2] = 'r';
            text[i + 3] = 'e';
            text[i + 4] = 'e';
            i = i + 4;
        }
    }
    cout << text << endl;
    return 0;*/

    // Task #4
    /*char text[66];
    cin.getline(text, 66);
    bool replaced = false;
    for (int i = 0; i < strlen(text); i++) {
        if (!replaced && text[i] == 'o' && text[i + 1] == 'n' && text[i + 2] == 'e') {
            for (int j = strlen(text) + 2; j > i + 2; j--) {
                text[j] = text[j - 2];
            }
            text[i] = 't';
            text[i + 1] = 'h';
            text[i + 2] = 'r';
            text[i + 3] = 'e';
            text[i + 4] = 'e';
            i = i + 4;
            replaced = true;
        }
    }
    cout << text << endl;
    return 0;*/

    // Task #5
    /*const int MAX_SIZE = 100;
    char input[MAX_SIZE];
    cout << "Введите строку: ";
    cin.getline(input, MAX_SIZE);

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '.' && input[i + 1] != ' ') {
            for (int j = MAX_SIZE - 1; j > i; j--) {
                input[j] = input[j - 1];
            }
            input[i + 1] = ' ';
        }
    }
    cout << "Результат: " << input << endl;
    return 0;*/

    // Task #6
    /*const int MAX_SIZE = 100;
    char input[MAX_SIZE];
    cout << "Введите текст: ";
    cin.getline(input, MAX_SIZE);
    int newIndex = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (!isdigit(input[i])) {
            input[newIndex] = input[i];
            newIndex++;
        }
    }
    input[newIndex] = '\0';
    cout << "Результат: " << input << endl;
    return 0;*/

    // Task #7
    /*const int MAX_SIZE = 100;
    char input[MAX_SIZE];
    cout << "Введите текст: ";
    cin.getline(input, MAX_SIZE);
    bool containsA = false; 
    for (int i = 0; input[i] != '\0' && input[i] != ' '; i++) {
        if (input[i] == 'А' || input[i] == 'a') {
            containsA = true;
            break; 
        }
    }
    if (containsA) {
        cout << "Первое слово содержит букву 'А' (или 'а').\n";
    }
    else {
        cout << "Первое слово НЕ содержит букву 'А' (или 'а').\n";
    }
    return 0;*/

    // Task #8
    const int maxSize = 100;
    char text[maxSize];
    cout << "Введите текст: ";
    cin.getline(text, maxSize);
    char endingChar;
    cout << "Введите символ, на который должны оканчиваться слова: ";
    cin >> endingChar;
    int wordCount = 0;
    bool inWord = false;
    for (int i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            inWord = true;
        }
        else if (inWord && text[i - 1] == endingChar) {
            wordCount++;
            inWord = false;
        }
    }
    if (inWord && text[strlen(text) - 1] == endingChar) {
        wordCount++;
    }
    cout << "Количество слов, оканчивающихся на символ '" << endingChar << "': " << wordCount << endl;
    return 0;
}
