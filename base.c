#include "obj.h"
#include "base.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

struct Base* BaseConstructor()
{
   struct Base* base = (struct Base*)malloc(sizeof(base));
   if (!base)
   {
      printf("base memory error!\n");
      return 1; 
   }
   base->size = 0;
   base->arr = (struct Object**)malloc(sizeof(struct Object*));
   if (!base->arr)
   {
      printf("base->arr is NULL\n");
      return NULL;
   }

   int answer = 0;
   while (answer == 0)
   {
      base->size++;

      base->arr = (struct Object**)realloc(base->arr, base->size * sizeof(struct Object*));

      if (!base->arr)
      {
         printf("memory is null");
         return NULL;
      }

      struct Object* object = ObjectConstructor();
      base->arr[base->size - 1] = object;

      printf("again? (0 - yes/ 1...9 - noy)\n");
      scanf_s("%d", &answer);
   }

   return base;
}

void BasePrint(struct Base* base_)
{
   for (int i = 0; i < base_->size; i++)
   {
      printf("Object %d:\n", i + 1);
      ObjectPrint(base_->arr[i]);
      printf("\n");
   }
}

void BaseDeleteLast(struct Base* base_)
{
   ObjectDestructor(base_->arr[base_->size - 1]);
   base_->size--;

   base_->arr = (struct Base**)realloc(base_->arr, base_->size * sizeof(struct Base*));
}

void BaseDestructor(struct Base* base_)
{
   for (int i = 0; i < base_->size; i++)
   {
      free(base_->arr[i]);
   }
   base_->arr;
}

