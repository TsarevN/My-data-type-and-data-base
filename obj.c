#include <stdio.h>
#include <stdlib.h>
#include "obj.h"

struct Object* ObjectConstructor()
{
	struct Object* obj = malloc(sizeof(struct Object));
	if (!obj)
	{
		printf("obj memory error");
		return NULL;
	}
	printf("Enter size: ");
	scanf_s("%d", &obj->size);
	printf("Enter height: ");
	scanf_s("%d", &obj->height);
	printf("Enter weight: ");
	scanf_s("%d", &obj->weight);
	printf("Enter widht: ");
	scanf_s("%d", &obj->width);
	printf("Enter length: ");
	scanf_s("%d", &obj->length);
	return obj;
}
struct Object* ObjectFileConstructor()
{
	FILE* f;
	if (fopen_s(&f, "text.txt", "r"))
	{
		return 0;
	}
	struct Object* obj = (struct Object*)malloc(sizeof(struct Object));
	if (!obj)
	{
		return NULL;
	}

	fscanf_s(f, "%d", &obj->size);
	fscanf_s(f, "%d", &obj->height);
	fscanf_s(f, "%d", &obj->weight);
	fscanf_s(f, "%d", &obj->width);
	fscanf_s(f, "%d", &obj->length);

	return obj;
}

void ObjectDestructor(struct Object* obj_)
{
	free(obj_);
}

int ObjectGetSize(struct Object* obj_)
{
	if (!obj_)
	{
		printf("obj_ is NULL!\n");
		return 1;
	}
	if (!obj_->size)
	{
		printf("obj_->size is NULL");
		return 1;
	}
	return obj_->size;
}
int ObjectGetHeight(struct Object* obj_)
{
	if (!obj_)
	{
		printf("obj_ is NULL!\n");
		return 1;
	}
	if (!obj_->height)
	{
		printf("obj_->height is NULL");
		return 1;
	}
	return obj_->height;
}
int ObjectGetWeight(struct Object* obj_)
{
	if (!obj_)
	{
		printf("obj_ is NULL!\n");
		return 1;
	}
	if (!obj_->weight)
	{
		printf("obj_->size is NULL");
		return 1;
	}
	return obj_->weight;
}
int ObjectGetWidth(struct Object* obj_)
{
	if (!obj_)
	{
		printf("obj_ is NULL!\n");
		return 1;
	}
	if (!obj_->width)
	{
		printf("obj_->size is NULL");
		return 1;
	}
	return obj_->width;
}
int ObjectGetLength(struct Object* obj_)
{
	if (!obj_)
	{
		printf("obj_ is NULL!\n");
		return 1;
	}
	if (!obj_->length)
	{
		printf("obj_->size is NULL");
		return 1;
	}
	return obj_->length;
}

void ObjectPrint(struct Object* obj_)
{
	printf("%d", obj_->size);
	printf("%d", obj_->height);
	printf("%d", obj_->weight);
	printf("%d", obj_->width);
	printf("%d", obj_->length);
}
void ObjectPrintSize(struct Object* obj_)
{
	if (!obj_)
	{
		printf("obj_ is NULL!\n");
		exit(1);
	}
	if (!obj_->size)
	{
		printf("obj_->size is NULL!\n");
		exit(1);
	}
	printf("%d", obj_->size);
}
void ObjectPrintHeight(struct Object* obj_)
{
	if (!obj_)
	{
		printf("obj_ is NULL!\n");
		exit(1);
	}
	printf("%d", obj_->height);
}
void ObjectPrintWeight(struct Object* obj_)
{
	if (!obj_)
	{
		printf("obj_ is NULL!\n");
		exit(1);
	}
	printf("%d", obj_->weight);
}
void ObjectPrintWidth(struct Object* obj_)
{
	if (!obj_)
	{
		printf("obj_ is NULL!\n");
		exit(1);
	}
	printf("%d", obj_->width);
}
void ObjectPrintLength(struct Object* obj_)
{
	if (!obj_)
	{
		printf("obj_ is NULL!\n");
		exit(1);
	}
	printf("%d", obj_->length);
}
void ObjectPrintFile(struct Object* obj_)
{
	FILE* f;
	if (fopen_s(&f, "text.txt", "w+"))
	{
		exit(1);
	}
	fprintf(f, "%d ", obj_->size);
	fprintf(f, "%d ", obj_->height);
	fprintf(f, "%d ", obj_->weight);
	fprintf(f, "%d ", obj_->width);
	fprintf(f, "%d", obj_->length);
}

int ObjectSquare(struct Object* obj_)
{
	if (!obj_)
	{
		printf("obj_ is NULL!\n");
		return 1;
	}

	if (obj_->length == obj_->width)
	{
		
		return obj_->length * obj_->width;
	}
	else
	{
		
		return obj_->length * obj_->width;
	}
}
int ObjectPerimeter(struct Object* obj_)
{
	if (!obj_)
	{
		printf("obj_ is NULL!\n");
		return 1;
	}
	if (obj_->length == obj_->width)
	{
		return obj_->length * 4;
	}
	else
	{
		return 2 * (obj_->length + obj_->width);
	}
}

double ObjectFromKgtoPounds(struct Object* obj_)
{
	if (!obj_)
	{
		printf("obj_ is NULL!\n");
		return 1;
	}

	return obj_->weight * 2.2;
}

