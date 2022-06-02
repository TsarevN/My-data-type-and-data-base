#pragma once
/*
* @brief ��� "���� ������"
*/
struct Base
{
   struct Object** arr;
   int size;
};

/*
* @brief �����������
*/
struct Base* BaseConstructor();

/*
* @brief ������ "Base"
* @param base_ - ��������� �� ��������� "Base"
*/
void BasePrint(struct Base* base_);

/*
* @brief ������� ��������� base_
* @param base_ - ��������� �� ��������� "Base"
*/
void BaseDeleteLast(struct Base* base_);

/*
* @brief ����������
* @param base_ - ��������� �� ��������� "Base"
*/
void BaseDestructor(struct Base* base_);