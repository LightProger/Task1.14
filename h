#include <stdio.h>

/* Задание 1,14 Гистограмма частот встречаемости введенных символов
   подсчитываются символы с ASCII-кодами от 0 до 255 */
int main(){
    int c;                          // переменная для ввода символов
    int i, j;                        // счетчики циклов
    int size = 255;           // размер массива
    int symbols[size];      // сам массив

    printf("Enter string: \n"); 

    /* заполняем массив нулями */
    for(i = 0; i < size; ++i)
        symbols[i] = 0;

    /* пока не нажата кнопка "Enter", считываем символы и записываем их в массив*/
    while((c = getchar()) != '\n')
    {
        ++symbols[c];

        /* Если объем символов превысил размер массива, установить размер равным 255 */
        if(symbols[c] > size)
        {
            size = 255;
        }
    }

    /* выводим массив на печать, заменяя повторяющиеся символы на знак "#" */
    for(i = 0; i < size; i++)
    {
        if(symbols[i] > 0)
        {
                printf("Symbol: '%c' - ", i);
                for(j = 0; j < symbols[i]; ++j) { printf("#"); }
                printf("\n"); 
        }
    }

        return 0;
}

