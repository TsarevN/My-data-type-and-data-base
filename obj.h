#pragma once
/*
* @brief ��� "������"
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
* @brief �����������
*/
struct Object* ObjectConstructor();

/*
* @brief �����������, ��������� �� �����
*/
struct Object* ObjectFileConstructor();
/*
* @brief ����������� ������
* @param obj_ - ��������� �� ��������� "�������"
*/
void ObjectDestructor(struct Object* obj_);

/*
* 
* @param obj_ - ��������� �� ��������� "�������"
* @return size
*/
int ObjectGetSize(struct Object* obj_);
/*
* @param obj_ - ��������� �� ��������� "�������"
* @return Height
*/
int ObjectGetHeight(struct Object* obj_);
/*
* @param obj_ - ��������� �� ��������� "�������"
* @return Weight
*/
int ObjectGetWeight(struct Object* obj_);
/*
* @param obj_ - ��������� �� ��������� "�������"
* @return Widht
*/
int ObjectGetWidth(struct Object* obj_);
/*
* @param obj_ - ��������� �� ��������� "�������"
* @return Lenght
*/
int ObjectGetLength(struct Object* obj_);
/*
* @brief ������ "Object"
* @param obj_ - ��������� �� ��������� "�������"
*/
void ObjectPrint(struct Object* obj_);
/*
* @brief ������ "Size"
* @param obj_ - ��������� �� ��������� "�������"
*/
void ObjectPrintSize(struct Object* obj_);
/*
* @brief ������ "Heigth"
* @param obj_ - ��������� �� ��������� "�������"
*/
void ObjectPrintHeight(struct Object* obj_);
/*
* @brief ������ "Weight"
* @param obj_ - ��������� �� ��������� "�������"
*/
void ObjectPrintWeight(struct Object* obj_);
/*
* @brief ������ "Widht"
* @param obj_ - ��������� �� ��������� "�������"
*/
void ObjectPrintWidth(struct Object* obj_);
/*
* @brief ������ "Lenght"
* @param obj_ - ��������� �� ��������� "�������"
*/
void ObjectPrintLength(struct Object* obj_);

/*
* @brief ������ "Object" � ����
* @param obj_ - ��������� �� ��������� "�������"
*/
void ObjectPrintFile(struct Object* obj_);

/*
* @brief ������� "�������"
* @param obj_ - ��������� �� ��������� "�������"
*/
int ObjectSquare(struct Object* obj_);
/*
* @brief ��������� "�������"
* @param obj_ - ��������� �� ��������� "�������"
*/
int ObjectPerimeter(struct Object* obj_);

/*
* @brief ������� weight(��) � ����
* @param obj_ - ��������� �� ��������� "�������"
*/
double ObjectFromKgtoPounds(struct Object* obj_);


