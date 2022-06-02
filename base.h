#pragma once
/*
* @brief Тип "База данных"
*/
struct Base
{
   struct Object** arr;
   int size;
};

/*
* @brief Конструктор
*/
struct Base* BaseConstructor();

/*
* @brief Печать "Base"
* @param base_ - Указатель на структуру "Base"
*/
void BasePrint(struct Base* base_);

/*
* @brief Удаляет последний base_
* @param base_ - Указатель на структуру "Base"
*/
void BaseDeleteLast(struct Base* base_);

/*
* @brief Деструктор
* @param base_ - Указатель на структуру "Base"
*/
void BaseDestructor(struct Base* base_);