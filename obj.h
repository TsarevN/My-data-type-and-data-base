#pragma once
/*
* @brief Тип "Объект"
*/
struct Object
{
	int size;
	int height;
	int weight;
	int width;
	int length;
	
};
/*
* @brief Конструктор
*/
struct Object* ObjectConstructor();

/*
* @brief Конструктор, считывает из файла
*/
struct Object* ObjectFileConstructor();
/*
* @brief Освобождает память
* @param obj_ - Указатель на структуру "Объекта"
*/
void ObjectDestructor(struct Object* obj_);

/*
* 
* @param obj_ - Указатель на структуру "Объекта"
* @return size
*/
int ObjectGetSize(struct Object* obj_);
/*
* @param obj_ - Указатель на структуру "Объекта"
* @return Height
*/
int ObjectGetHeight(struct Object* obj_);
/*
* @param obj_ - Указатель на структуру "Объекта"
* @return Weight
*/
int ObjectGetWeight(struct Object* obj_);
/*
* @param obj_ - Указатель на структуру "Объекта"
* @return Widht
*/
int ObjectGetWidth(struct Object* obj_);
/*
* @param obj_ - Указатель на структуру "Объекта"
* @return Lenght
*/
int ObjectGetLength(struct Object* obj_);
/*
* @brief Печать "Object"
* @param obj_ - Указатель на структуру "Объекта"
*/
void ObjectPrint(struct Object* obj_);
/*
* @brief Печать "Size"
* @param obj_ - Указатель на структуру "Объекта"
*/
void ObjectPrintSize(struct Object* obj_);
/*
* @brief Печать "Heigth"
* @param obj_ - Указатель на структуру "Объекта"
*/
void ObjectPrintHeight(struct Object* obj_);
/*
* @brief Печать "Weight"
* @param obj_ - Указатель на структуру "Объекта"
*/
void ObjectPrintWeight(struct Object* obj_);
/*
* @brief Печать "Widht"
* @param obj_ - Указатель на структуру "Объекта"
*/
void ObjectPrintWidth(struct Object* obj_);
/*
* @brief Печать "Lenght"
* @param obj_ - Указатель на структуру "Объекта"
*/
void ObjectPrintLength(struct Object* obj_);

/*
* @brief Печать "Object" в файл
* @param obj_ - Указатель на структуру "Объекта"
*/
void ObjectPrintFile(struct Object* obj_);

/*
* @brief Площадь "Объекта"
* @param obj_ - Указатель на структуру "Объекта"
*/
int ObjectSquare(struct Object* obj_);
/*
* @brief Периметер "Объекта"
* @param obj_ - Указатель на структуру "Объекта"
*/
int ObjectPerimeter(struct Object* obj_);

/*
* @brief перевод weight(Кг) в Футы
* @param obj_ - Указатель на структуру "Объекта"
*/
double ObjectFromKgtoPounds(struct Object* obj_);


