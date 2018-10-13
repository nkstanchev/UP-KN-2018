#include <iostream>
#include <cmath>

int main() {

    // ========= Switch =========

    /*
    1.  Да   се   напише   програма ,  която   чете   от  
    стандартния   вход   символ   и   две   цели   числа ,  като  
    ако   символът   е   измежду  +, ­, *, /  и  %,  то   се  
    извежда   резултатът   от   прилагането   на   съответната  
    операция   върху   двете   числа ,  а   в   противен   случай  
    се   извежда   съобщение   за   грешка ( невалидна  
    операция ).
    */
    
    /*
   int a,b;
   char operation;
   std::cin >> a >> operation >> b;

   switch(operation) {
       
       case '+':
       std::cout << a + b << std::endl;
       break;
       
       case '-':
       std::cout << a - b << std::endl;
       break;
       
       case '*':
       std::cout << a * b << std::endl;
       break;
       
       case '/':
       if(b != 0) {
           std::cout << a / b << std::endl;
       } else {
           std::cout << "Invalid operation!" << std::endl;
       }
       break;

       default:
       std::cout << "Invalid operation!" << std::endl;
       break;

   }
    */

   /*
    2.  Да   се   напише   програма ,  която   по   дадено   цяло  
    число ,  извежда   дали   въведеното   число   се   дели   или  
    не   да   всяко   едно   от   числата   от  2  до  10.  В  
    решението   да   не   се   използва  if.
   */

    /*
    int a;
    std::cin >> a;
    for(int i = 2; i <= 10; i++) {
        switch(a % i == 0) {
            case 0:
            std::cout << "Divisible by " << i << std::endl;
            break;
            
            default:
            std::cout << "Not divisible by " << i << std::endl;
            break;
        }
    }
    */

    /*
    3.  Да   се   напише   програма ,  която   по   дадена  
    фигура ( въвеждат   се   цели   числа ,  като   означава  1 – 
    триъглник , 2 –  квадрат , 3 –  окръжност , 4 – 
    правоъгълник , 5 ­  трапец )  извежда   лицето   и  
    периметъра   на   фигурата .
    */
    /*
    int num;
    double a,b,c,d,h,r;
    std::cin >> num;
    switch(num) {
        
        case 1:
        double p;
        std::cin >> a >> b >> c;
        p = (a+b+c) / 2;
        std::cout << (a + b + c) << std::endl;
        std::cout << sqrt(p * (p-a)*(p-b)*(p-c)) << std::endl;
        break;
        
        case 2:
        std::cin >> a;
        std::cout << 4 * a << std::endl;
        std::cout << a * a << std::endl;
        break;

        case 3:
        std::cin >> r;
        std::cout << 4 * M_PI * r << std::endl;
        std::cout << M_PI * r * r << std::endl;
        break;

        case 4:
        std::cin >> a >> b;
        std::cout << 2 * a + 2 * b << std::endl;
        std::cout << a * b << std::endl;
        break;

        case 5:
        std::cin >> a >> b >> c >> h;
        std::cout << a + b + c + d << std::endl;
        std::cout << ((a + b) * h) / 2 << std::endl;
        break;
    }
    */

   /*
   4.  Да   се   напише   програма ,  която   по   зададено   реално
    число  x  намира   стойността   на   един   от   следните  
    изрази :
    y = x ­ 5
    y = sin(x)
    y = cos(x)
    y = exp(x).
    Като   при   въведено   число  1  трябва   да   се   реши   първия
    израз ,  при   въведено   число  2  трябва   да   се   реши  
    втория   израз   и   т . н .
   */
    /*
    int n;
    double x;
    std::cin >> n >> x;
    switch(n) {
        
        case 1:
        std::cout << x*5 << std::endl;
        break;
        
        case 2:
        std::cout << sin(x) << std::endl;
        break;

        case 3:
        std::cout << cos(x) << std::endl;
        break;

        case 4:
        std::cout << exp(x) << std::endl;
        break;
    }
    */

   // ========= Loops =========

   /*
    Задача 1
    Да се състави програма, която чете от клавиатурата число n, 
    след което изчислява сумата на n на брой въведени от клавиатурата естествени числа от интервала [10 ..5555].
   */
    /*
    unsigned int n;
    int current, sum;
    for(int i = 0; i < n; i++)
    {
        std::cin >> current;
        if(current >= 10 && current <= 55555)
        {   
            sum += current;
        }
    }

    std::cout << sum << std::endl;
    */

   /*
   Задача 2
    Да се състави програма, чрез която се въвеждат естествени числа от интервала [1..200] до въвеждане на число <1.
    Програмата да извежда броя, сумата и средноаритметичната стойност на въведените числа.
    */
    /*
    int n = 0, counter = 0, sum = 0;
    double mean = 0;
    std::cin >> n;
    while (n >= 1 && n <= 200) {
        counter++;
        sum += n;
        mean = sum / counter;
        std::cin >> n;
    }

    std::cout << counter << std::endl;
    std::cout << sum << std::endl;
    std::cout << mean << std::endl;
    */

   /*
   Задача 3
    Да се напише програма, която намира броя на цифрите на въведено от потребителя естествено число.
   */
    /*
    unsigned int n, counter = 0;
    std::cin >> n;
    while(n != 0) {
        counter++;
        n /= 10;
    }
    std::cout << counter << std::endl;
    */

    /*
    Задача 4
    Да се напише програма, която отпечатва всички делители на въведено от потребителя число число.
    */
    /*
    int n;
    std::cin >> n;
    for(int i = n; i > 0; i--) 
    {
        if(n % i == 0) std::cout << i << std::endl;
    }
    */


    /*
    Задача 5
    Да се състави програма, 
    която извежда всички естествени трицифрени числа, които нямат еднакви цифри т.е. 100 и 101 не се извеждат.
    */
    /*
    for(int i=100; i < 1000; i++)
    {
        if(i % 10 == (i / 10) % 10 && i % 10 == (i / 100) % 10) std::cout << i << std::endl;
    }
    */

    /*
    Задача 6
    Да се състави програма, която изчислява сумата от цифрите на всички естествени 2-цифрени числа до въведено от клавиатурата 2-цифрено число. 
    Входни данни: n - естествено 2-цифрено число от интервала [10..99]. 
    */
    /*
    int n, sum = 0;
    std::cin >> n;
    if(n < 10 && n > 99) return 1;
    for(int i = 10; i <= n; i++)
    {
        sum += i;
    }
    */

    /*
    Задача 7
    Да се състави програма, която по въведено естествено число от интервала [10..200] 
    извежда в обратен ред всички числа, които са кратни на 7.
    */

    /*
    int n;
    std::cin >> n;
    if(n < 10 && n > 200) return 1;
    for(int i = n; i > 0; i--)
    {
        if(i % 7 == 0) std::cout << i << std::endl;
    }
    */

    /*
    Задача 8:
    Напишете програма, която чете от потребителя n цифрено число, 
    след което изписва на екрана дали това число е палиндром или не.
    */
    /*
    int n, copy, reversed = 0, digits = 0;
    std::cin >> n;

    copy = n;

    while(copy != 0)
    {
        copy /= 10;
        digits++;
    }

    copy = n;
    
    while(digits != 0)
    {
        reversed += copy % 10 * pow(10, digits - 1);
        copy /= 10;
        digits--;
    }

    if(reversed == n) std::cout << "Yes" << std::endl; 
    else std::cout << "No" << std::endl;
    */

    return 0;
}