void menuTheme() {
    setlocale(LC_ALL, "Russian");

    int i;
    std::cout << "(Выход из программы осуществляется с помощью CTRL + C)\n";
    std::cout << "Меню выбора тем: "<< '\n';
    std::cout << "1) Игры(10 вопросов) " << '\n'
        << "2) Компьютер и его устройство(10 вопросов)" << '\n'
        << "3) Программирование(10 вопросов)" << '\n'
        << "4) Таблица лидеров(локальная)" << std::endl;
    std::cout << "Ваш выбор: ";
    std::cin >> i;
    switch (i)
        {
        case(1):
            theme1();
            break;
        case(2):
            theme2();
            break;
        case(3):
            theme3();
            break;
        default:
            break;
        }


}