#include <iostream>
#include "ProverkaInput.h"

int CheckKolichestvoPlayers(int KolichestvoPlayers) {
	while (2 > KolichestvoPlayers || KolichestvoPlayers > 5) {
		std::cout << "Количество игроков находится в диапозоне от 2 до 5 ключиьельною.\n";
		std::cout << "Пожалуйства повторите ввод. ";
		std::cout << "Сколько игроков будет участвать в игре?\n";
		std::cout << "Количество: ";
		std::cin >> KolichestvoPlayers;
	}
	return KolichestvoPlayers;
}