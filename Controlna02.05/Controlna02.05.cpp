#include <iostream>
#include <locale>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    setlocale(LC_ALL, "");

    cout << "Система тестування" << endl;
    cout << "Якщо ви хочете зареїструватися натисніть - 1" << endl;
    cout << "Якщо ви хочете увійти натисніть як користувач натисніть - 2" << endl;
    cout << "Зайти в систему як Адмін натисніть - 3" << endl;
    int num;
    cin >> num;
    if (num == 1) {
        ofstream file("user_data.txt", ios::app);
        if (!file) {
            cout << "Помилка відкриття файлу!" << endl;
        }

        cout << "Введіть ваше ім'я: ";
        string name;
        cin >> name;
        file << "Ім'я: " << name << endl;

        cout << "Введіть ваше прізвище: ";
        string surname;
        cin >> surname;
        file << "Прізвище: " << surname << endl;

        cout << "Введіть вашу електронну пошту: ";
        string email;
        cin >> email;
        file << "Email: " << email << endl;

        cout << "Введіть ваш номер телефону: ";
        string phone;
        cin >> phone;
        file << "Телефон: " << phone << endl;

        cout << "Створіть ваш логін: ";
        string login;
        cin >> login;
        file << "Логін: " << login << endl;

        cout << "Введіть ваш пароль: ";
        string password;
        cin >> password;
        file << "Пароль: " << password << endl;

        file << "-------------------------" << endl;

        file.close();

        cout << "Вітаємо, ви успішно зареєстровані!" << endl;




    }
    else if (num == 2) {
        cout << "Введіть ваш логін: ";
        string user_login;
        cin >> user_login;
        cout << "Введіть ваш пароль: ";
        string user_password;
        cin >> user_password;
        bool check_login = false;
        bool check_pass = false;
        bool user_found = false;
        ifstream file("user_data.txt");
        if (!file) {
            cout << "Помилка відкриття файлу!" << endl;
        }
        else {
            string line;
            while (getline(file, line)) {
                if (line.find("Логін: " + user_login) != -1) {
                    check_login = true;
                }
                if (line.find("Пароль: " + user_password) != -1) {
                    check_pass = true;
                }
            }
        }
        if (check_login && check_pass) {
            cout << "Вітаємо, ви успішно увійшли!" << endl;
            user_found = true;
        }
        else if (!check_login && check_pass) {
            cout << "Невірний логін!" << endl;
        }
        else if (check_login && !check_pass) {
            cout << "Невірний пароль!" << endl;
        }
        else {
            cout << "Логін і пароль невірні!" << endl;
        }
        file.close();
        if (user_found) {

            cout << "Виберіть потрібний варіант:" << endl;
            cout << "1. Тест з математики" << endl;
            cout << "2. Тест з історії" << endl;
            cout << "3. Тест з фізики" << endl;
            cout << "4. Переглянути результати пройдених тестів." << endl;
            int test_choice;
            cin >> test_choice;
            /*MATH*/
            int const size = 10;
            int answers_math[size] = { 2, 3, 1, 4, 1, 2, 3, 3, 3, 1 };
            int user_answers[size];
            int count_math = 0;
            /*HISTORY*/
            int answers_history[size] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
            int user_answers_history[size];
            int count_history = 0;
            /*PHYSICS*/
            int answers_physics[size] = { 3, 2, 2, 4, 1, 3, 1, 2, 4, 2 };
            int user_answers_physics[size];
            int count_physics = 0;

            switch (test_choice) {
            case 1:

                cout << "Ви вибрали тест з математики!" << endl;
                cout << "Відповідь на запитання дається в вигляді числа навпроти якого правельний варіант відповіді!" << endl;
                cout << "1. Скільки буде 12 × 7?\n";
                cout << "1)  - 72\n";
                cout << "2)  - 84 \n";
                cout << "3) - 96\n";
                cout << "4) - 74\n";
                cin >> user_answers[0];
                cout << "2. Корінь квадратний із 81 дорівнює...?\n";
                cout << "1)  - 7\n";
                cout << "2)  - 8\n";
                cout << "3)  - 9 \n";
                cout << "4)  - 10\n\n";
                cin >> user_answers[1];
                cout << "3. Яке число є найбільшим спільним дільником 24 і 36?\n";
                cout << "1)  - 12 \n";
                cout << "2)  - 6\n";
                cout << "3)  - 24\n";
                cout << "4)  - 18\n\n";
                cin >> user_answers[2];
                cout << "4. Чому дорівнює 5²?\n";
                cout << "1)  - 10\n";
                cout << "2)  - 15\n";
                cout << "3)  - 20\n";
                cout << "4)  - 25 \n\n";
                cin >> user_answers[3];
                cout << "5. Розв’яжіть рівняння: 2x + 3 = 7. Яке значення x?\n";
                cout << "1)  - 2 \n";
                cout << "2)  - 3\n";
                cout << "3)  - 4\n";
                cout << "4)  - 5\n\n";
                cin >> user_answers[4];
                cout << "6. Яка площа квадрата зі стороною 6 см?\n";
                cout << "1)  - 30 см²\n";
                cout << "2)  - 36 см² \n";
                cout << "3)  - 42 см²\n";
                cout << "4)  - 48 см²\n\n";
                cin >> user_answers[5];
                cout << "7. Скільки градусів у прямому куті?\n";
                cout << "1)  - 180°\n";
                cout << "2)  - 360°\n";
                cout << "3)  - 90° \n";
                cout << "4)  - 45°\n\n";
                cin >> user_answers[6];
                cout << "8. Що більше: 0,75 чи 3/4?\n";
                cout << "1)  - 0,75\n";
                cout << "2)  - 3/4\n";
                cout << "3)  - Вони рівні \n";
                cout << "4)  - Не можна визначити\n\n";
                cin >> user_answers[7];
                cout << "9. Як називається трикутник, у якого всі три сторони рівні?\n";
                cout << "1)  - Рівнобедрений\n";
                cout << "2)  - Прямокутний\n";
                cout << "3)  - Рівносторонній \n";
                cout << "4)  - Різносторонній\n\n";
                cin >> user_answers[8];
                cout << "10. Скільки буде (5 + 3) × 2?\n";
                cout << "1)  - 14 \n";
                cout << "2)  - 16\n";
                cout << "3)  - 10\n";
                cout << "4)  - 12\n";
                cin >> user_answers[9];
                for (int i = 0; i < size; i++) {
                    if (user_answers[i] == answers_math[i]) {
                        count_math++;
                    }
                }
                cout << "Ви відповіли правельно на: " << count_math << " запитань!" << endl;
                cout << "Щоб пройти тест з іншого предмету або подивитися ваші результатит ще раз зайдіть за допомогою вашого логіну. паролю!";


                break;
            case 2:
                cout << "Ви вибрали тест з історії!" << endl;
                cout << "Відповідь на запитання дається в вигляді числа навпроти якого правельний варіант відповіді!" << endl;
                cout << "1. Хто був першим президентом США?\n";
                cout << "   1) Джордж Вашингтон\n"; // правильна відповідь
                cout << "   2) Авраам Лінкольн\n";
                cout << "   3) Томас Джефферсон\n";
                cout << "   4) Франклін Рузвельт\n\n";
                cin >> user_answers_history[0];
                cout << "2. В якому році почалася Друга світова війна?\n";
                cout << "   1) 1939\n"; // правильна відповідь
                cout << "   2) 1941\n";
                cout << "   3) 1914\n";
                cout << "   4) 1925\n\n";
                cin >> user_answers_history[1];
                cout << "3. Яке місто було столицею Римської імперії?\n";
                cout << "   1) Рим\n"; // правильна відповідь
                cout << "   2) Афіни\n";
                cout << "   3) Константинополь\n";
                cout << "   4) Карфаген\n\n";
                cin >> user_answers_history[2];
                cout << "4. Хто написав 'Іліаду' та 'Одіссею'?\n";
                cout << "   1) Гомер\n"; // правильна відповідь
                cout << "   2) Софокл\n";
                cout << "   3) Платон\n";
                cout << "   4) Аристотель\n\n";
                cin >> user_answers_history[3];
                cout << "5. Яка держава першою запустила людину в космос?\n";
                cout << "   1) СРСР\n"; // правильна відповідь
                cout << "   2) США\n";
                cout << "   3) Китай\n";
                cout << "   4) Німеччина\n\n";
                cin >> user_answers_history[4];
                cout << "6. Яке місто було центром Відродження у XV столітті?\n";
                cout << "   1) Флоренція\n"; // правильна відповідь
                cout << "   2) Париж\n";
                cout << "   3) Лондон\n";
                cout << "   4) Венеція\n\n";
                cin >> user_answers_history[5];
                cout << "7. Хто відкрив Америку в 1492 році?\n";
                cout << "   1) Христофор Колумб\n"; // правильна відповідь
                cout << "   2) Васко да Гама\n";
                cout << "   3) Магеллан\n";
                cout << "   4) Джеймс Кук\n\n";
                cin >> user_answers_history[6];
                cout << "8. В якому році Україна проголосила незалежність?\n";
                cout << "   1) 1991\n"; // правильна відповідь
                cout << "   2) 1989\n";
                cout << "   3) 2004\n";
                cout << "   4) 2014\n\n";
                cin >> user_answers_history[7];
                cout << "9. Яка велика імперія мала столицю Теночтітлан?\n";
                cout << "   1) Ацтеки\n"; // правильна відповідь
                cout << "   2) Інки\n";
                cout << "   3) Майя\n";
                cout << "   4) Ольмеки\n\n";
                cin >> user_answers_history[8];
                cout << "10. Хто написав 'Кобзар'?\n";
                cout << "   1) Тарас Шевченко\n"; // правильна відповідь
                cout << "   2) Іван Франко\n";
                cout << "   3) Леся Українка\n";
                cout << "   4) Григорій Сковорода\n\n";
                cin >> user_answers_history[9];
                for (int i = 0; i < size; i++) {
                    if (user_answers_history[i] == answers_history[i]) {
                        count_history++;
                    }
                }
                cout << "Ви відповіли правельно на: " << count_history << " запитань з історії!" << endl;
                break;
            case 3:
                cout << "Ви вибрали тест з фізики!" << endl;
                cout << "Відповідь на запитання дається в вигляді числа навпроти якого правельний варіант відповіді!" << endl;
                cout << "1. Яка одиниця вимірювання сили?\n";
                cout << "   1) Паскаль\n";
                cout << "   2) Джоуль\n";
                cout << "   3) Ньютон\n"; // правильна відповідь
                cout << "   4) Ватт\n\n";
                cin >> user_answers_physics[0];
                cout << "2. Яка швидкість світла у вакуумі?\n";
                cout << "   1) 150 000 км/с\n";
                cout << "   2) 300 000 км/с\n"; // правильна відповідь
                cout << "   3) 3 000 км/с\n";
                cout << "   4) 30 000 км/с\n\n";
                cin >> user_answers_physics[1];
                cout << "3. Хто сформулював закони руху?\n";
                cout << "   1) Галілео Галілей\n";
                cout << "   2) Ісаак Ньютон\n"; // правильна відповідь
                cout << "   3) Альберт Ейнштейн\n";
                cout << "   4) Нікола Тесла\n\n";
                cin >> user_answers_physics[2];
                cout << "4. Яка фізична величина вимірюється у Паскалях?\n";
                cout << "   1) Енергія\n";
                cout << "   2) Потужність\n";
                cout << "   3) Сила\n";
                cout << "   4) Тиск\n"; // правильна відповідь
                cout << "\n";
                cin >> user_answers_physics[3];
                cout << "5. Який вид енергії має рухомий об’єкт?\n";
                cout << "   1) Кінетична\n"; // правильна відповідь
                cout << "   2) Потенційна\n";
                cout << "   3) Теплова\n";
                cout << "   4) Хімічна\n\n";
                cin >> user_answers_physics[4];
                cout << "6. Який закон збереження описує перехід енергії з одного виду в інший?\n";
                cout << "   1) Закон збереження маси\n";
                cout << "   2) Закон збереження імпульсу\n";
                cout << "   3) Закон збереження енергії\n"; // правильна відповідь
                cout << "   4) Другий закон Ньютона\n\n";
                cin >> user_answers_physics[5];
                cout << "7. Яка температура абсолютного нуля?\n";
                cout << "   1) -273.15°C\n"; // правильна відповідь
                cout << "   2) 0°C\n";
                cout << "   3) -100°C\n";
                cout << "   4) 100°C\n\n";
                cin >> user_answers_physics[6];
                cout << "8. Хто розробив теорію відносності?\n";
                cout << "   1) Ісаак Ньютон\n";
                cout << "   2) Альберт Ейнштейн\n"; // правильна відповідь
                cout << "   3) Нікола Тесла\n";
                cout << "   4) Макс Планк\n\n";
                cin >> user_answers_physics[7];
                cout << "9. Який газ переважно міститься у Сонці?\n";
                cout << "   1) Азот\n";
                cout << "   2) Кисень\n";
                cout << "   3) Вуглекислий газ\n";
                cout << "   4) Водень\n"; // правильна відповідь
                cout << "\n";
                cin >> user_answers_physics[8];

                cout << "10. Яка сила утримує планети на орбіті навколо Сонця?\n";
                cout << "   1) Сила тертя\n";
                cout << "   2) Гравітаційна сила\n"; // правильна відповідь
                cout << "   3) Електромагнітна сила\n";
                cout << "   4) Ядерна сила\n\n";
                cin >> user_answers_physics[9];
                for (int i = 0; i < size; i++) {
                    if (user_answers_physics[i] == answers_physics[i]) {
                        count_physics++;
                    }
                }
                cout << "Ви відповіли правельно на: " << count_physics << " запитань з фізики!" << endl;
                break;
            case 4:
            {
                cout << "Ваші результати по пройденим тестам: " << endl;
                ifstream file("user_data.txt");
                if (!file) {
                    cout << "Помилка відкриття файлу!" << endl;
                }
                else {
                    string line;
                    while (getline(file, line)) {
                        if (line.find("Користувач: " + user_login) != -1) {
                            cout << line << endl;
                        }
                    }
                }
            }
            break;
            default:
                cout << "Невірний вибір!" << endl;
                break;
            }
            if (test_choice == 1) {
                ofstream file("user_data.txt", ios::app);
                if (!file) {
                    cout << "Помилка відкриття файлу!" << endl;
                }
                else {
                    file << "Користувач: " << user_login << " Кількість правильних відповідей з математики: " << count_math << endl;
                }

                file.close();
            }
            else if (test_choice == 2) {
                ofstream file("user_data.txt", ios::app);
                if (!file) {
                    cout << "Помилка відкриття файлу!" << endl;
                }
                else {
                    file << "Користувач: " << user_login << " Кількість правильних відповідей з історія: " << count_history << endl;
                }
                file.close();
            }
            else if (test_choice == 3) {
                ofstream file("user_data.txt", ios::app);
                if (!file) {
                    cout << "Помилка відкриття файлу!" << endl;
                }
                else {
                    file << "Користувач: " << user_login << " Кількість правильних відповідей з фізики:  " << count_physics << endl;
                }
                file.close();
            }
        }
    }
    
    else if (num == 3) {
            cout << "Щоб зайти в систему як Адмін!" << endl;
            cout << "Введіть ваш логін: ";
            string admin_login;
            cin >> admin_login;
            cout << "Введіть ваш пароль: ";
            string admin_password;
            cin >> admin_password;
            string login = "admin";
            string password = "admin";
            int admin_chois;


            if (admin_login == login && admin_password == password) {
                cout << "Ласкаво просимо, адміне!" << endl;
                cout << "Для вибору потрібного пункту натисніть його значеня." << endl;
                cout << "Переглянути всіх користувачів - 1." << endl;
                cout << "Переглянути результати певного користувача - 2." << endl;
                cout << "Видалити певного користувача з системи - 3." << endl;
                cout << "Змінити логін, пароль для Адміна - 4." << endl;
                cin >> admin_chois;
                if (admin_chois == 1) {
                    ifstream file("user_data.txt");
                    if (!file) {
						cout << "Помилка відкриття файлу!" << endl;
					}
					else {
						string line;
						while (getline(file, line)) {
                            if (line.find("Користувач: ") != -1) {
								cout << line << endl;
                            }
						}
                    }
					file.close();
				}
                else if (admin_chois == 2) {
                    cout << "Введіть логін користувача, результати якого ви хочете переглянути: ";
                    string user_login;
                    cin >> user_login;
                    ifstream file("user_data.txt");
                    if (!file) {
                        cout << "Помилка відкриття файлу!" << endl;
                    }
                    else {
                        string line;
                        while (getline(file, line)) {
                            if (line.find("Користувач: " + user_login) != -1) {
                                cout << line << endl;
                            }
                        }
                    }
                    file.close();
				}
				else if (admin_chois == 3) {
					cout << "Введіть логін користувача, якого ви хочете видалити: ";
					string user_login;
					cin >> user_login;
					ifstream file("user_data.txt");
					if (!file) {
						cout << "Помилка відкриття файлу!" << endl;
					}
					else {
						string line;
						ofstream temp_file("temp.txt");
						while (getline(file, line)) {
							if (line.find("Користувач: " + user_login) == -1) {
								temp_file << line << endl;
							}
						}
						temp_file.close();
						file.close();
						remove("user_data.txt");
						rename("temp.txt", "user_data.txt");
					}
				}
                else if (admin_chois == 4) {
                    cout << "Введіть новий логін для Адміна: ";
                    cin >> login;
                    cout << "Введіть новий пароль для Адміна: ";
                    cin >> password;
                    cout << "Логін та праоль було змінено!" << endl;
                    
                }
            }
            else {
                cout << "Невірний логін або пароль!" << endl;
            }
        }

        else {
            cout << "Невірний вибір!" << endl;
        }


    }

