#include <iostream>
using namespace std;

int main()
{
	/*setlocale(0, "UKR");

	cout << "Введите ваш рост: ";
	int height;
	cin >> height;

	cout << "Введите ваш вес: ";
	int weight;
	cin >> weight;

	int idealboy = height - 100;
	int idealgirl = height - 110;

	int result1 = idealboy - weight;
	int result2 = idealgirl - weight;

	cout << "\nВы парень или девушка? (1/2)\n";
	int gender;
	cin >> gender;

	switch (gender)
	{
	case 1:
	{
		if (result1 > 0)
		{
			cout << "\nВамо необходимо набрать " << result1 << " кг.\n";
		}
		else if (result1 < 0)
		{
			cout << "\nВамо необходимо сбросить " << result1 << " кг.\n";
		}
		else if (result1 == 0)
		{
			cout << "\nПоздравляем! Вы обладаете идеальным весом.\n";
		}
		break;
	}
	case 2:
	{
		if (result2 > 0)
		{
			cout << "\nВамо необходимо набрать " << result2 << " кг.\n";
		}
		else if (result2 < 0)
		{
			cout << "\nВамо необходимо сбросить " << result2 << " кг.\n";
		}
		else if (result2 == 0)
		{
			cout << "\nПоздравляем! Вы обладаете идеальным весом.\n";
		}
		break;
	}
	default:
	{
		cout << "\nПроизошла ошибка.\n";
	}
	}*/

	//setlocale(0, "UKR");

	//cout << "Введите день: ";
	//int day;
	//cin >> day;

	//cout << "Введите месяц: ";
	//int month;
	//cin >> month;

	//cout << "Введите год: ";
	//int year;
	//cin >> year;

	//bool correct = false;

	//if (month > 0 && month <= 12)
	//{
	//	switch (month)
	//	{
	//	case 1:
	//	case 3:
	//	case 5:
	//	case 7:
	//	case 8:
	//	case 10:
	//	case 12:
	//		if (day <= 31)
	//		{
	//			correct = true;
	//		}
	//		break;
	//	case 2:
	//		if (day <= 29 && year % 4 == 0 or (day <= 28 && year % 4 != 0))
	//		{
	//			correct = true;
	//		}
	//		break;
	//	case 4:
	//	case 6:
	//	case 9:
	//	case 11:
	//		if (day <= 30)
	//		{
	//			correct = true;
	//		}
	//		break;

	//	default:
	//	{
	//		break;
	//	}
	//	}

	//	if (!correct)
	//		cout << "\nПожалуйста, укажите корректную дату\n";
	//	else
	//	{
	//		if (day == 31 && month == 12)
	//		{
	//			day = 1;
	//			month = 1;
	//			year++;
	//		}
	//		else if ((day == 31 && (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10))
	//			or (day == 30 && (month == 4 or month == 6 or month == 9 or month == 11))
	//			or (month == 2 && (day == 28 or day == 29)))
	//		{
	//			month++;
	//			day = 1;
	//		}
	//		else
	//		{
	//			day++;
	//		}

	//		cout << "\nСледующий день:\n";
	//		if (month >= 1 && month <= 9)
	//		{
	//			cout << "\n" << day << ".0" << month << "." << year << "\n";
	//		}
	//		else
	//		{
	//			cout << "\n" << day << "." << month << "." << year << "\n";
	//		}
	//	}
	//}

	//setlocale(0, "UKR");
	//cout << "Укажите количество градусов по Цельсию: ";
	//int temp;
	//cin >> temp;

	//if (temp >= -10 && temp <= 15)
	//{
	//	cout << "\nНа улице холодно\n";
	//}
	//else if (temp <= -11 && temp >= -30)
	//{
	//	cout << "\nНа улице мороз\n";
	//}
	//else if (temp >= 16 && temp <= 25)
	//{
	//	cout << "\nНа улице тепло\n";
	//}
	//else if (temp >= 26 and temp <= 35)
	//{
	//	cout << "\nНа улице жарко\n";
	//}
	//else
	//{
	//	cout << "\nВам не стоит сегодня находиться на улице.\n";
	//}

	//srand(time(0));
	//rand();
	//int min = temp - 10;
	//int max = temp + 10;
	//int k = max - min + 1;
	//int ttemp = rand() % k + min;

	//int windmin = 0;
	//int windmax = 30;
	//int wind = windmax - windmin + 1;
	//int twind = rand() % wind + windmin;

	//int rainno = 0;
	//int rainyes = 1;
	//int rain = rainyes - rainno + 1;
	//int train = rand() % rain + rainno;

	//int sea = ttemp - 8;
	//
	//cout << "\nПрогноз погоды на завтра: \n";
	//cout << "\nТемпература воздуха : " << ttemp << " C\n";
	//cout << "Скорость ветра: " << twind << " м/с\n";
	//switch (train)
	//{
	//case 0:
	//{
	//	cout << "Возможны осадки\n";
	//	break;
	//}
	//case 1:
	//{
	//	cout << "Осадков не предвидится\n";
	//	break;
	//}
	//default:
	//{
	//	cout << "\nПроизошла ошибка.\n";
	//}
	//}
	//cout << "Температура воды в Чёрном море: " << sea << " C\n";

	setlocale(0, "UKR");

	cout << "Укажите количество куриц: ";
	int chicken;
	cin >> chicken;

	cout << "Укажите стоимость одной курицы: ";
	double price;
	cin >> price;
	
	cout << "Укажите количество яиц, которое несет каждая курица в неделю: ";
	int eggs;
	cin >> eggs;

	cout << "Укажите стоимость десятка яиц: ";
	double eggprice;
	cin >> eggprice;

	double cost = chicken * price;

	double allegs = eggs * chicken;

	double profit = (allegs / 10) * eggprice;

	double days = (cost / profit) * 7;

	if ((days - int(days)) > 0)
	{
		days++;
	}

	double daysnds = cost / (profit - (profit / 100 * 20)) * 7;

	if ((daysnds - int(daysnds)) > 0)
	{
		daysnds++;
	}

	cout << "\nКоличество дней, за которое окупятся куры: \n";
	cout << "\nС учётом НДС: " << int(daysnds);
	cout << "\nБез учёта НДС: " << int(days) << "\n";
}