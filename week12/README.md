# Структури и работа с файлове

**Задача 0**

Направете структура "Point", която да съдържа име и коодинатите на точка в 2D пространството. Точките трябва да се четат от файл, да могат да се записват във файл и да се принитират в конзолата.

Примерен текст във файла:

LeftDownPoint 0 0

LeftUpPoint 12 0

RightUpPoint 12 7

RightDownPoint 0 7

**Задача 1**

Направете структура Triangle, която съдържа три атрибута Point
Напревете две функции:

double findArea();

Намира лицето на тригълника, по формулата 1/2 * |Xa*Yb + Xb*Yc + Xc*Ya - Xa*Yc - Xc*Yb - Xb*Ya|

double findPerimeter();

Намира периметъра на триъгълника, като намира разстоянието на всяка от 3-те страни и след това ги събира. За намирането на дължината на една страна можете да ползвате питагоровата формула -  d(A,B) = sqrt((Xb - Xa)^2 + (Yb - Ya)^2), където A и B са точкити в 2D пространството, а d е разтоянието между тях.

**Задача 2**

Напишете програма за четене на файл, наречен "fmi_up.txt", записваща в нов файл, наречен  "FMI_UP.txt", съдържанието на файла, но записано само с главни букви. 

 **Задача 3**

Напишете програма за четене на два файла "f1.txt" и  "f2.txt", която изкарва на екрана редовете, които са различни в 2та файла, като добавя "<", ако редът е от "f1.txt", или ">", ако редът е от "f2.txt". 

**Задача 4**

Имплементирайте функция с прототип void printLastLines(int numLastLines, char* filename). 

**Задача 5**

Намерете размерът на текстов файл в байтове. 
