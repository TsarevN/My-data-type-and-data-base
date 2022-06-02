#include <stdio.h>
#include <stdlib.h>
#include "obj.h"
#include "base.h"

int main()
{
	// 1 задание
	struct Object* obj = NULL;
	obj = ObjectConstructor();
	//obj = ObjectFileConstructor();
	ObjectPrintSize(obj);
	ObjectPrintHeight(obj);
	ObjectPrintWeight(obj);
	ObjectPrintWidth(obj);
	ObjectPrintLength(obj);
	printf("\nsqare obj = %d", ObjectSquare(obj));
	printf("\nperimeter obj = %d", ObjectPerimeter(obj));
	printf("\n%d kg = %.2f pounds\n", ObjectGetWeight(obj), ObjectFromKgtoPounds(obj));
	ObjectPrintFile(obj);

	//ObjectDestructor(obj);
	printf("-------------------------------------------------------\n");

	// 2 задание
	struct Base* base = NULL;
	base = BaseConstructor();
	BasePrint(base);
	BaseDeleteLast(base);
	BasePrint(base);


	return 0;
}