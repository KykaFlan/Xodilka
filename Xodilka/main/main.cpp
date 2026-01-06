#include <iostream>
#include "ProverkaInput.h" //для проверки ввода
#include <cstdlib> //для очистки консоли
#include <conio.h> // для ввода любой клавиши для пропуска
#include "OutConsol.h" // Вывод в консоль
#include <windows.h> // для SetConsoleOutputCP

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    std::cout << "\tДобро пожаловать в игру 'Ходилка'\n\n";
    std::cout << "Сколько игроков будет участвать в игре? (минимум 2, максимум 5 игроков)\n";
    int KolichestvoPlayers;
    std::cout << "Количество: ";
    std::cin >> KolichestvoPlayers;
    std::cout << "\n";
    KolichestvoPlayers = CheckKolichestvoPlayers(KolichestvoPlayers); //проверка ввода количества участников
    std::cout << "Отчино! Участинок игры: " << KolichestvoPlayers;
    std::cout << "\nЧтобы продолжить нажмите любую клавишу...";
    _getch();

    system("cls");
    
    GameRules();
    std::cout << "\nЧтобы продолжить нажмите любую клавишу...";
    _getch();

    

}
