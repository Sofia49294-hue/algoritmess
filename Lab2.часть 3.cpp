// Lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//1 часть 
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите два числа\n";
    int a, b;
    cin >> a >> b;
    cout << "Среднее арифметическое: " << (a + b) / 2 << endl;
    cout << "Введите знак операции (+, -, * или /): \n";
    char op;
    cin >> op;


    //if (op == "+") {
     // cout << a + b << endl;
      //}
      //else if (op == "-") {
   //cout << a - b << endl;
     //}
     //else if (op == "*") {
     //cout << a * b << endl;
     //}
     //else if (op == "/") {
     // cout << a / b << endl;
    // }
     //else {
      //cout << "Введен неккоректный знак" << endl;
    // }

    switch (op) {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a + b << endl;
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



    //2 часть

    int num;
    while (true) {
        cout << "Введите целое положительное число: " << endl;
        cin >> num;
        if (num > 0) {
            break;
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
    }

}

    

//3 часть


int sumToN(int n = 1) { // стартовое значение n = 1
    if (n <= 0) return 0; // если отрицательное число вернуть 0 
    int sum = 0;
    for (int i = 1; i <= n; ++i) // считаем сумму от 1 до n 
        sum += i;
    return sum;
}

void calc(int a, int b, int& sum, int& prod) { // передача параметра по ссылке 
    sum = a + b; // сумма 
    prod = a * b; // произведение 
}

int main() { // создание массива
    setlocale(LC_ALL, "");
    int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

    int totalSum = 0; // сумма всех чисел массива 
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 3; ++j)
            totalSum += arr[i][j]; // добовляем каждый элемент 
    cout << "Сумма всех элементов массива: " << totalSum << endl;

    int colSum[3]; // массив из трёх элементов 
    for (int j = 0; j < 3; ++j) // сумма чисел каждого столбца 
        colSum[j] = arr[0][j] + arr[1][j];

    cout << "Одномерный массив (суммы столбцов): "; // вывод в консоль 
    for (int j = 0; j < 3; ++j)
        cout << colSum[j] << " ";
    cout << endl;

    float value = 20.84; // переменная типа float 
    float& ref1 = value; // 2 ссылки на эту переменную 
    float& ref2 = value;

    ref1 = 15.5; // смена значения через одну ссылку

    cout << "Значение переменной: " << value << endl; // изменение значений 
    cout << "Значение через ref1: " << ref1 << endl;
    cout << "Значение через ref2: " << ref2 << endl;

    cout << "sumToN(5) = " << sumToN(5) << endl;
    cout << "sumToN() = " << sumToN() << endl; // вернёт 1

    int a = 3, b = 4, c = 0, d = 0;
    calc(a, b, c, d); // передаём a, b и две ссылки 
    cout << "Сумма: " << c << ", Произведение: " << d << endl;

    int num = 10;
    for (int i = 0; i < 3; ++i) { // цикл который выполнится 3 раза 
        int temp = i + 1; // создание переменной внутри цикла 
        cout << "Внутри цикла temp = " << temp << endl;
    }

    // cout << temp; // Ошибка: переменная temp не существует за пределами цикла

    return 0;
}



    //4 часть






   
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


 //   cout << a << endl;

 //   string name;
 //   cout << "Enter your name : ";
 //   cin >> name;
 //   cout << "Hello, " << name << "!\n";
 //   std::cout << "Hello World!\n";
//}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
