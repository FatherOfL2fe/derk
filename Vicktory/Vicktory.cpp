// Vicktory.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

#include "themes.h"


const int MAX_PLAYERS = 100;

struct Player {
    std::string name;
    int score;
};

void addPlayer(const std::string& filename, const Player& player) {
    std::ofstream outFile(filename, std::ios::app);
    if (outFile.is_open()) {
        outFile << player.name << " " << player.score << std::endl;
        outFile.close();
    }
    else {
        std::cerr << "Не удалось открыть файл для записи." << std::endl;
    }
}

int loadPlayers(const std::string& filename, Player players[]) {
    std::ifstream inFile(filename);
    int count = 0;

    if (inFile.is_open()) {
        while (count < MAX_PLAYERS && inFile >> players[count].name >> players[count].score) {
            count++;
        }
        inFile.close();
    }
    else {
        std::cerr << "Не удалось открыть файл для чтения." << std::endl;
    }
    return count;
}

void sortPlayers(Player players[], int count) {
    for (int i = 0; i < count - 1; ++i) {
        for (int j = 0; j < count - i - 1; ++j) {
            if (players[j].score < players[j + 1].score) {
                // Обмен значениями
                Player temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }
}

void displayLeaderboard(const Player players[], int count) {
    std::cout << "Таблица лидеров:" << std::endl;
    for (int i = 0; i < count; ++i) {
        std::cout << "Игрок: " << players[i].name << ", Очки: " << players[i].score << std::endl;
    }
}




int main()
{
    menuTheme();



    const std::string filename{ "score.txt" };
    Player players[MAX_PLAYERS];
    int playerCount;

    // Загружаем таблицу лидеров из файла
    playerCount = loadPlayers(filename, players);

    // Добавляем нового игрока
    Player newPlayer;
    std::cout << "Введите имя нового игрока: ";
    std::cin >> newPlayer.name;
    std::cout << "Введите очки игрока: ";
    std::cin >> newPlayer.score;

    // Добавляем игрока в файл
    addPlayer(filename, newPlayer);

    // Загружаем обновленную таблицу
    playerCount = loadPlayers(filename, players);

    // Сортируем игроков по очкам
    sortPlayers(players, playerCount);

    // Выводим таблицу лидеров
    displayLeaderboard(players, playerCount);
    

    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
