void menuTheme() {
    setlocale(LC_ALL, "Russian");

    int i;
    std::cout << "(����� �� ��������� �������������� � ������� CTRL + C)\n";
    std::cout << "���� ������ ���: "<< '\n';
    std::cout << "1) ����(10 ��������) " << '\n'
        << "2) ��������� � ��� ����������(10 ��������)" << '\n'
        << "3) ����������������(10 ��������)" << '\n'
        << "4) ������� �������(���������)" << std::endl;
    std::cout << "��� �����: ";
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