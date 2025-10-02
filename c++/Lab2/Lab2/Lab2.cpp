// Lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
1 часть 
#include <iostream>
using namespace std;

int main()
{
    setlicale(LC_ALL, "Russian");
    cout << "Введите два числа\n";
    int a, b;
    cin >> a >> b;
    cout << "Среднее арифметическое: " << (a + b) / 2 << endl;
    cout << "Введите знак операции (+, -, * или /): \n";
    char op;
    cin >> op;


    if (op == "+") {
     cout << a + b << endl;
     }
     else if (op == "-") {
  cout << a - b << endl;
    }
    else if (op == "*") {
     cout << a * b << endl;
    }
    else if (op == "/") {
     cout << a / b << endl;
    }
    else {
     cout << Введен неккоректный знак" << endl;
    }

    swith(op) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a + b << endl :
                break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
        default:
            cout << "Введен некорректный знак" << endl;
    }


    2 часть

        int num;
    while (true) {
        cout << "Введите целое положительное число: " << endl;
        cin >> num;
        if (num > 0) {
            break;
        }
    }
    
    int ans = 0;
    for (int i = 0; i <= num; i++) {
        ans += i;
    }
    cout << ans << endl;

    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int a : arr) {
        cout << a << " ";
    }
    cout << endl;
    
    for (int i = 0; i < length; i++) {
        if (i % 2 == 0) {
            cout << arr[i] << " ";
        }
    } 
    cout << endl;

    ans = 0;
    for (int i = 0; i < length; i++) {
        if (i % 2 != 0) {
            ans += arr[i];
        }
    }
    cout << ans << endl;

    

   
   
    //r (int i = 0; i < 10; i++) {// i = i + 1 i+=1}
     // cout << i << ", \n";
   //
  //cout << endl;
  //int i = 0;
   //hile (i <= 10) {
    //  cout << i << ", \n";
   //   i++
  //}
   //out << endl;
   //o {
  //    cout << i << ",\n";
  //    i++
  //} while (i <= 10);

   //   int r = 0;
    //  while (r < 7) {
     //     r++;
      //    if (r == 3) continue;
      //    if (r == 6) break;
      //    cout << endl;
   //   }
//}

    // int a;
    // cout << "Enter number: ";
    // cin >> a;
   //  a = a * 2;
   // if (a > 10) {
   //    a = a * 2;
   // }
   //else if (a < 0)
   // {
   //    a = a * 4;
   // }
   // else {
   //    a = a * 3;
   // }

   //    a = (a > 10) ? (a * 2) : (a * 4);
   //    cout << a << endl;
    // switch (a) {
    //case 1: {
    //     cout << "you enter 1" << endl;
    // }
     //case 2: {
    //     cout << "your enter 2" << endl;
    // }
    // case 3: {
    //     cout << "you enter 3" << endl;
    // break;
//   }
//   }


    cout << a << endl;

    string name;
    cout << "Enter your name : ";
    cin >> name;
    cout << "Hello, " << name << "!\n";|
    std::cout << "Hello World!\n";
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
