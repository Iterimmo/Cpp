#include <iostream>
#include <string>
#include <nlohmann/json.hpp>
#include <fstream>

#define new std::cout << "\n-------new-------\n" << std::endl


using std::string;
using nlohmann::json;

class Person {
public:
	std::string name;
	int age;
};

void to_json(json& j, const Person& p) {
	j = json{
		{"name", p.name},
		{"age",p.age}
	};
}

void from_json(json& j, Person& p) {
	j.at("name").get_to(p.name);
	j.at("age").get_to(p.age);
}

void create_json_file(json& j, string name) {
	if (std::ifstream(name)) {
		std::cout << "file already exist" << std::endl;
		return;
	}
	std::ofstream j_file(name);
	j_file << std::setw(4) << j << std::endl;
	j_file.close();

}
int main() {

/// Создание json

	Person p{"Alex",18};
	json j{};                     // пустой json-объект
	j["name"] = p.name;           // хранится как std::string
	j["age"] = p.age;

	// Вложенность
	j["answer"]["everything"] = "42";
	j["answer"]["ships"]["Guard"] = 20;
	j["answer"]["ships"]["counter"] = 55;

	//Массив строк. Хранится как std::vector<std::string>
	j["companies"] = { "Infopulse", "TM" };

	// Список инициализации парами "ключ-значение"
	j["user"] = {
		{"name", "tangro"},
		{"active", true}
	};

	std::cout << j << std::endl;
	new;

/// Копирование и работа с функциями

	Person per{ "Alex",22 };
	json js = p;

	std::cout << js << std::endl;
	new;

/// STL + JSON

	json js_stl;
	
	// аля std::vector

	js_stl.push_back("foo");
	js_stl.push_back(1);

	std::cout << js_stl << std::endl;

	// аля std::map
	json maps;

	maps["map?"] = "map";
	maps["bool"] = false;

	std::cout << maps << std::endl;
	new;

	// метод find
	if (maps.find("bool") != maps.end()) {
		std::cout << maps.at("bool") << " " <<maps["bool"] << std::endl; // перегруженный at (также и для [])
		
	}

	new;
	// итерация по массиву

	for (auto it = maps.begin(); it != maps.end(); ++it) {
		std::cout << *it << std::endl;
	}

	// дамп в строку
	string str_json = maps.dump();

/// Сохрание-загрузка файлов
	create_json_file(maps, "maps.json");
	create_json_file(js_stl, "js_stl.json");
	create_json_file(j, "j.json");
}