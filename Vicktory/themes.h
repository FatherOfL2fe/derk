void theme1() {

    int questions{ 10 }; //Количество вопросов
    int score{};
    int maxScore{ 21 }; // Максимально очков в этой теме
    for (int i = 1; i < questions + 1; i++)
    {
        int rightAnswer{};
        int userAnswer{};

        int complexity{};//сложность(от 1 до 3)

        switch (i)
        {
        case(1):
            complexity = 1; //сложность(от 1 до 3)
            rightAnswer = 3; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "К какому жанру игры относится DOTA 2?" << '\n'; //вопрос
            std::cout << "1) Экшен" << '\n' //Варианты ответа
                << "2) РПГ" << '\n'
                << "3) МОБА" << '\n'
                << "4) Головоломки" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(2):
            complexity = 3; //сложность(от 1 до 3)
            rightAnswer = 1; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Какая игра вышла в 2020 году??" << '\n'; //вопрос
            std::cout << "1) Киберпанк 2077" << '\n' //Варианты ответа
                << "2) Ведьмак 3: Дикая Охота" << '\n'
                << "3) Fortnite" << '\n'
                << "4) Among Us" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(3):
            complexity = 1; //сложность(от 1 до 3)
            rightAnswer = 2; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Где используются джостики DualShock?" << '\n'; //вопрос
            std::cout << "1) ПК" << '\n' //Варианты ответа
                << "2) Xbox/PlayStation" << '\n'
                << "3) Мобильные устройства" << '\n'
                << "4) Nintendo Switch" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(4):
            complexity = 2; //сложность(от 1 до 3)
            rightAnswer = 3; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Какая игра считается одной из самых трудных за 2016 год?" << '\n'; //вопрос
            std::cout << "1) The Last of Us" << '\n' //Варианты ответа
                << "2) Red Dead Redemption 2" << '\n'
                << "3) Dark Souls 3" << '\n'
                << "4) Fortnite" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(5):
            complexity = 1; //сложность(от 1 до 3)
            rightAnswer = 4; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "К какому жанру игры относится Garry's Mod?" << '\n'; //вопрос
            std::cout << "1) Стрельба" << '\n' //Варианты ответа
                << "2)  Головоломки" << '\n'
                << "3) RPG-элементы" << '\n'
                << "4) Песочница" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(6):
            complexity = 3; //сложность(от 1 до 3)
            rightAnswer = 4; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "В какой игре символ \"Лама\"" << '\n'; //вопрос
            std::cout << "1) League of Legends" << '\n' //Варианты ответа
                << "2) Call of Duty: Warzone" << '\n'
                << "3) World of Warcraft" << '\n'
                << "4) Fortnite" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(7):
            complexity = 3; //сложность(от 1 до 3)
            rightAnswer = 2; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "В какой игре ровно 4 части и несколько DLC" << '\n'; //вопрос
            std::cout << "1) Assassin's Creed" << '\n' //Варианты ответа
                << "2) Uncharted" << '\n'
                << "3) Fallout" << '\n'
                << "4) Halo" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(8):
            complexity = 2; //сложность(от 1 до 3)
            rightAnswer = 3; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Когда вышла игра Minecraft" << '\n'; //вопрос
            std::cout << "1) 2016" << '\n' //Варианты ответа
                << "2) 2018" << '\n'
                << "3) 2011" << '\n'
                << "4) 2000" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(9):
            complexity = 3; //сложность(от 1 до 3)
            rightAnswer = 1; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "В какой игре 21 июня 2024 выйдет.вышла DLC" << '\n'; //вопрос
            std::cout << "1) Elden Ring" << '\n' //Варианты ответа
                << "2) Horizon Zero Dawn" << '\n'
                << "3) God of War" << '\n'
                << "4) Starfield" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(10):
            complexity = 2; //сложность(от 1 до 3)
            rightAnswer = 2; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Какая игра из этих самая долгая?" << '\n'; //вопрос
            std::cout << "1) The Last of Us 2" << '\n' //Варианты ответа
                << "2) Red Dead Redemption 2" << '\n'
                << "3) Bioshock Infinite" << '\n'
                << "4) The Witcher 3: Wild Hunt" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;

        default:
            break;
        }

    }
    std::cout << "Ваши очки: " << score << "/" << maxScore << '\n';

    menuTheme();


}

void theme2() {

    int questions{ 10 }; //Количество вопросов
    int score{};
    int maxScore{ 18 }; // Максимально очков в этой теме
    for (int i = 1; i < questions + 1; i++)
    {
        int rightAnswer{};
        int userAnswer{};

        int complexity{};//сложность(от 1 до 3)

        switch (i)
        {
        case(1):
            complexity = 1; //сложность(от 1 до 3)
            rightAnswer = 1; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Что такое процессор?" << '\n'; //вопрос
            std::cout << "1) Центральное процессорное устройство" << '\n' //Варианты ответа
                << "2) Центральное программируемое устройство" << '\n'
                << "3) Центральная память пользователя" << '\n'
                << "4) Контрольная точка управления" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(2):
            complexity = 2; //сложность(от 1 до 3)
            rightAnswer = 2; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Какой из главных компонентов отвечает за временное хранение данных во время их обработки?" << '\n'; //вопрос
            std::cout << "1) Жесткий диск" << '\n' //Варианты ответа
                << "2) Оперативная память" << '\n'
                << "3) Видеокарта" << '\n'
                << "4) Процессор" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(3):
            complexity = 1; //сложность(от 1 до 3)
            rightAnswer = 3; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Какая технология беспроводного соединения обеспечивает подключение к интернету?" << '\n'; //вопрос
            std::cout << "1) LAN" << '\n' //Варианты ответа
                << "2) WAN" << '\n'
                << "3) Wi-Fi" << '\n'
                << "4) Ethernet" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(4):
            complexity = 2; //сложность(от 1 до 3)
            rightAnswer = 2; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Какая функция отвечает за управление передачей данных между компьютером и его портативными устройствами?" << '\n'; //вопрос
            std::cout << "1) Операционная система" << '\n' //Варианты ответа
                << "2) Драйвер" << '\n'
                << "3) Протокол" << '\n'
                << "4) Браузер" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(5):
            complexity = 1; //сложность(от 1 до 3)
            rightAnswer = 1; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Какой порт используется для подключения кабелей и мышей к компьютеру?" << '\n'; //вопрос
            std::cout << "1) USB" << '\n' //Варианты ответа
                << "2)  HDMI" << '\n'
                << "3) VGA" << '\n'
                << "4) Ethernet" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(6):
            complexity = 2; //сложность(от 1 до 3)
            rightAnswer = 2; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Что такое БИОС?" << '\n'; //вопрос
            std::cout << "1) Базовая операционная система" << '\n' //Варианты ответа
                << "2) Программное обеспечение для настройки компьютера при включении" << '\n'
                << "3) Видеокарта" << '\n'
                << "4) Системное звуковое оборудование" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(7):
            complexity = 3; //сложность(от 1 до 3)
            rightAnswer = 3; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Что означает аббревиатура GPU?" << '\n'; //вопрос
            std::cout << "1) Общий процессор" << '\n' //Варианты ответа
                << "2) Графический блок" << '\n'
                << "3) Графический процессор" << '\n'
                << "4) Общий блок питания" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(8):
            complexity = 1; //сложность(от 1 до 3)
            rightAnswer = 3; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Какая функция отвечает за преобразование преобразования сигнала в звуковой сигнал?" << '\n'; //вопрос
            std::cout << "1) Видеокарта" << '\n' //Варианты ответа
                << "2) Процессор" << '\n'
                << "3) Звуковая карта" << '\n'
                << "4) Монитор" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(9):
            complexity = 2; //сложность(от 1 до 3)
            rightAnswer = 1; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Что означает аббревиатура URL-адрес?" << '\n'; //вопрос
            std::cout << "1) Унифицированный указатель ресурса" << '\n' //Варианты ответа
                << "2) Универсальная удаленная ссылка" << '\n'
                << "3) Единый язык маршрутизацииr" << '\n'
                << "4) Универсальная ссылка на ресурсы" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(10):
            complexity = 3; //сложность(от 1 до 3)
            rightAnswer = 1; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Что такое IP-адрес?" << '\n'; //вопрос
            std::cout << "1) Уникальный идентификатор компьютера в сети Интернет" << '\n' //Варианты ответа
                << "2) Кодовое имя для интернет-провайдера" << '\n'
                << "3) Адрес электронной почты" << '\n'
                << "4) Номер компьютера" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;

        default:
            break;
        }

    }
    std::cout << "Ваши очки: " << score << "/" << maxScore << '\n';

    menuTheme();



}

void theme3() {

    int questions{ 10 }; //Количество вопросов
    int score{};
    int maxScore{ 21 }; // Максимально очков в этой теме
    for (int i = 1; i < questions + 1; i++)
    {
        int rightAnswer{};
        int userAnswer{};

        int complexity{};//сложность(от 1 до 3)

        switch (i)
        {
        case(1):
            complexity = 2; //сложность(от 1 до 3)
            rightAnswer = 2; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Что такое «алгоритм»?" << '\n'; //вопрос
            std::cout << "1) Язык программирования" << '\n' //Варианты ответа
                << "2) Набор инструкций для выполнения задачи" << '\n'
                << "3) Разработка интегрированной среды" << '\n'
                << "4) Модуль для обработки данных" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(2):
            complexity = 2; //сложность(от 1 до 3)
            rightAnswer = 3; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Какая конструкция используется в языке программирования для повторения выполнения определенного блока кода?" << '\n'; //вопрос
            std::cout << "1) if-else" << '\n' //Варианты ответа
                << "2) переключатель-регистр" << '\n'
                << "3) for-цикл" << '\n'
                << "4) try-catch" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(3):
            complexity = 1; //сложность(от 1 до 3)
            rightAnswer = 3; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Простой алголоподобный язык с русской лексикой и объединени командами управления программными исполнителями" << '\n'; //вопрос
            std::cout << "1) Паскаль" << '\n' //Варианты ответа
                << "2) Алгол" << '\n'
                << "3) Кумир" << '\n'
                << "4) Бейсик" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(4):
            complexity = 1; //сложность(от 1 до 3)
            rightAnswer = 3; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Что такое \"переменная\" в программировании?" << '\n'; //вопрос
            std::cout << "1) Инструкция, выполняющая действие" << '\n' //Варианты ответа
                << "2) Структура организации повторяющихся операций" << '\n'
                << "3) Именованное хранилище для данных" << '\n'
                << "4) Условие, определяющее, какой блок кода будет выбирать" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(5):
            complexity = 3; //сложность(от 1 до 3)
            rightAnswer = 3; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Какая функция используется для получения случайных чисел в рамках языка программирования Python?" << '\n'; //вопрос
            std::cout << "1) random()" << '\n' //Варианты ответа
                << "2) randint()" << '\n'
                << "3) randrange()" << '\n'
                << "4) randomin()\n";

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(6):
            complexity = 3; //сложность(от 1 до 3)
            rightAnswer = 1; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Какие конструкции используются для обработки исключений в языке программирования Java?" << '\n'; //вопрос
            std::cout << "1) try-catch" << '\n' //Варианты ответа
                << "2) if-else" << '\n'
                << "3) switch-case" << '\n'
                << "4) for-cycle" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(7):
            complexity = 1; //сложность(от 1 до 3)
            rightAnswer = 1; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Как называется процесс перевода исходного кода программы на высоком уровне в машинный код?" << '\n'; //вопрос
            std::cout << "1) Компиляция" << '\n' //Варианты ответа
                << "2) Интерпретация" << '\n'
                << "3) Обработка" << '\n'
                << "4) Связывание" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(8):
            complexity = 2; //сложность(от 1 до 3)
            rightAnswer = 2; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Что такое \"рекурсия\" в программировании?" << '\n'; //вопрос
            std::cout << "1) Повторное использование кода" << '\n' //Варианты ответа
                << "2) Вызов функции из самой себя" << '\n'
                << "3) Открытие части кода от других программистов" << '\n'
                << "4) Создание копии программы для исполнения" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(9):
            complexity = 3; //сложность(от 1 до 3)
            rightAnswer = 3; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Язык, созданный компанией Apple для разработчиков iOS и macOS" << '\n'; //вопрос
            std::cout << "1) bjective-C" << '\n' //Варианты ответа
                << "2) Xcode 6" << '\n'
                << "3) Swift" << '\n'
                << "4) iLang" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(10):
            complexity = 3; //сложность(от 1 до 3)
            rightAnswer = 2; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Многопоточный язык, создавший компанию Google " << '\n'; //вопрос
            std::cout << "1) Haskell" << '\n' //Варианты ответа
                << "2) Golang" << '\n'
                << "3) Clojure" << '\n'
                << "4) Android" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;

        default:
            break;
        }

    }
    std::cout << "Ваши очки: " << score << "/" << maxScore << '\n';

    menuTheme();






}