#include <iostream>
#include <string>

using namespace std;

//Задание 1
/*int main()
{
	setlocale(0, "");

	//Файл 1  - Chech1.txt
	const char* pathF = "D:\\examples\\Chech1.txt";
	//Файл 2 - Chech2.txt
	const char* pathS = "D:\\examples\\Chech2.txt";
	const int lenStr = 50;

	FILE* first, * second;

	char strF [lenStr];
	char strS[lenStr];
	int lenF,lenS;
	int cntEqualSym = 0,cntString = 1;

	if ((fopen_s(&first, pathF, "r")) != NULL || (fopen_s(&second, pathS, "r")) != NULL)
	{
		cout << "The file couldn't be created";
	}
	else
	{
		while (!feof(first) && !feof(second))
		{
			fflush(first);
			fflush(second);
			fgets(strF, lenStr - 1, first);
			fgets(strS, lenStr - 1, second);

			lenS = strlen(strS);
			lenF = strlen(strF);

			if (strF[lenS - 1] == '\n')
				strF[lenS - 1] = '\0';
			if (strS[lenF - 1] == '\n')
				strS[lenF - 1] = '\0';

			for (int i = 0; i < lenF; i++)
			{
				if (strF[i] == strS[i])
					cntEqualSym++;
			}
			if (cntEqualSym == lenS && cntEqualSym == lenF)
				cout << "Cтроки " << cntString << " совпадают\n";
			else
			{
				cout << "Строка " << cntString << " файла 1\n";
				puts(strF);
				cout << "Строка " << cntString << " файла 2\n";
				puts(strS);
			}
			cntString++;
			cntEqualSym = 0;
		}
	}
	fclose(first);
	fclose(second);
	return 0;
}*/
//Задание 2
/*int main()
{
	setlocale(0, "");

	//Файл Text.txt
	const char* pathTxt = "D:\\examples\\Text.txt";
	//Файл Statistics.txt
	const char* pathStat = "D:\\examples\\Statistics.txt";

	FILE* Txt,*Stat;
	string Vowels = "AaEeOoUuYyIi";
	string Consonants = "QqWwRrTtPpSsDdFfGgHhJjKkLlZzXxCcVvBbNnMm";
	string Numbers = "0123456789";

	int sym,cntSym = 0,cntStr = 0,cntVowels = 0,cntConsonat = 0,cntNum = 0;
	char symbol;

	if ((fopen_s(&Txt, pathTxt, "r")) != NULL)
	{
		cout << "The file couldn't be created";
	}
	else
	{
		while (!feof(Txt))
		{
			sym = fgetc(Txt);
			symbol = sym;
			if (sym != '\n' && sym != '\0')
				cntSym++;
			if (sym == '\n' || sym == 'я')
				cntStr++;
			for (int i = 0; i < 12; i++)
				if (symbol == Vowels[i])
					cntVowels++;
			for (int i = 0; i < 40; i++)
				if (symbol == Consonants[i])
					cntConsonat++;
			for (int i = 0; i < 10; i++)
				if (symbol == Numbers[i])
					cntNum++;
		}
		
	}
	if ((fopen_s(&Stat, pathStat, "w")) != NULL)
	{
		cout << "The file couldn't be created";
	}
	else
	{
		fprintf(Stat, "Количество символов - %d\nКоличество строк - %d\nКоличество гласных - %d\nКоличество согласных - %d\nКоличество цифр - %d", cntSym, cntStr, cntVowels, cntConsonat, cntNum);
	}
	return 0;
}*/
//Задание 3
/*int main()
{
	setlocale(0, "");
	//Файл cipherCaesar1.txt
	const char* pathTxt = "D:\\examples\\cipherCaesar1.txt";
	//Файл cipherCaesar2.txt
	const char* pathStat = "D:\\examples\\cipherCaesar2.txt";

	FILE* cipherCaesarBegin, * cipherCaesarEnd;
	int s,countPos;

	cout << "Введите кол-во позиций, на которые будем смещать: ";
	cin >> countPos;

	if ((fopen_s(&cipherCaesarEnd, pathStat, "w")) != NULL)
	{
		cout << "The file couldn't be created";
	}
	if ((fopen_s(&cipherCaesarBegin, pathTxt, "r")) != NULL)
	{
		cout << "The file couldn't be created1";
	}
	else
	{
		while (!feof(cipherCaesarBegin))
		{
			s = fgetc(cipherCaesarBegin);
			if(s == ' ' || s == '\0' || s == '\n')
				fputc(s, cipherCaesarEnd);
			else
				fputc(s+ countPos, cipherCaesarEnd);
		}
	}
	fclose(cipherCaesarBegin);
	fclose(cipherCaesarEnd);
	
}*/