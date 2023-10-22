#include <iostream>
#include <string>
#include <vector>

//большие растения
class Garden {
public:
	void NameForThePlant(std::string name) {
		name_= name;
		std::cout << "Назовите ваше растение: ";
		std::cin >> name_;

	}

	std::string OurName() const {
		std::cout << "Name: " << name_ << "\n";
		return name_;
	}

	virtual void Name() = 0;

	virtual void Color() = 0;

	virtual void Counter() = 0;

	virtual ~Garden() {};

private:
	std::string name_;
};


class Oak : public Garden {
public:
	virtual void Name(){
		std::cout << "Название: дуб" << "\n";
	}

	virtual void Color() {
		std::cout << "Цвет: ну, дубовый" << "\n";
	}

	virtual void Counter() {
		std::cout << "Кол-во плодов: 55" << "\n";
	}
};

class Raspberry : public Garden {
public:
	virtual void Name() {
		std::cout << "Название: малина" << "\n";
	}

	virtual void Color() {
		std::cout << "Цвет: малиновый :0" << "\n";
	}

	virtual void Counter() {
		std::cout << "Кол-во плодов: 17" << "\n";
	}
};

class Flower : public Garden {
public:
	virtual void Name() {
		std::cout << "Название: ромашка" << "\n";
	}

	virtual void Color() {
		std::cout << "Цвет: белый" << "\n";
	}

	virtual void Counter() {
		std::cout << "Кол-во плодов: 9" << "\n";
	}
};




int main() {

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int choose = 0;
	std::string name;

	std::cout << "Выберите сад: 1 - большие растения, 2 - средние, 3 - маленькие\n";
	std::cin >> choose;
	std::cout << std::endl;

	std::vector <Garden*> plants;

	switch (choose)
	{
	case 1:
	{
		plants.push_back(new Oak);

		for (auto& el : plants) {
			el->NameForThePlant(name);
			el->OurName();
			el->Name();
			el->Color();
			el->Counter();
		}
		for (auto& el : plants) {
			delete el;
		}

		std::cout << std::endl;

		break;
	}
	case 2:
	{
		plants.push_back(new Raspberry);

		for (auto& el : plants) {
			el->NameForThePlant(name);
			el->OurName();
			el->Name();
			el->Color();
			el->Counter();
		}
		for (auto& el : plants) {
			delete el;
		}

		std::cout << std::endl;

		break;
	}
	case 3:
	{
		plants.push_back(new Flower);

		for (auto& el : plants) {
			el->NameForThePlant(name);
			el->OurName();
			el->Name();
			el->Color();
			el->Counter();
		}
		for (auto& el : plants) {
			delete el;
		}

		std::cout << std::endl;

		break;
	}
	default:
	{
		std::cout << "Вы ввели что-то не то :( \n";
		break;
	}
	}


	return 0;
}