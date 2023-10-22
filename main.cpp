#include <iostream>
#include <string>
#include <vector>

//������� ��������
class Garden {
public:
	void NameForThePlant(std::string name) {
		name_= name;
		std::cout << "�������� ���� ��������: ";
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
		std::cout << "��������: ���" << "\n";
	}

	virtual void Color() {
		std::cout << "����: ��, �������" << "\n";
	}

	virtual void Counter() {
		std::cout << "���-�� ������: 55" << "\n";
	}
};

class Raspberry : public Garden {
public:
	virtual void Name() {
		std::cout << "��������: ������" << "\n";
	}

	virtual void Color() {
		std::cout << "����: ��������� :0" << "\n";
	}

	virtual void Counter() {
		std::cout << "���-�� ������: 17" << "\n";
	}
};

class Flower : public Garden {
public:
	virtual void Name() {
		std::cout << "��������: �������" << "\n";
	}

	virtual void Color() {
		std::cout << "����: �����" << "\n";
	}

	virtual void Counter() {
		std::cout << "���-�� ������: 9" << "\n";
	}
};




int main() {

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int choose = 0;
	std::string name;

	std::cout << "�������� ���: 1 - ������� ��������, 2 - �������, 3 - ���������\n";
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
		std::cout << "�� ����� ���-�� �� �� :( \n";
		break;
	}
	}


	return 0;
}