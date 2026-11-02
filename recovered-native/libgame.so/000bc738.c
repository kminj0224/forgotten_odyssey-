/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bc738  Symbol: ~Stack */

/* rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::~Stack() */

Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> * __thiscall
rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::~Stack
          (Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *this)

{
  void *__ptr;
  void **ppvVar1;
  void *pvVar2;
  
  ppvVar1 = *(void ***)(this + 4);
  if (ppvVar1 != (void **)0x0) {
    while ((__ptr = *ppvVar1, __ptr != (void *)0x0 && (__ptr != ppvVar1[2]))) {
      pvVar2 = *(void **)((int)__ptr + 8);
      free(__ptr);
      *ppvVar1 = pvVar2;
    }
    operator_delete(ppvVar1[4]);
    operator_delete(ppvVar1);
  }
  return this;
}


