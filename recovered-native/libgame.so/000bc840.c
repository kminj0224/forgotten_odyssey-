/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bc840  Symbol: MemoryPoolAllocator */

/* rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::MemoryPoolAllocator(unsigned int,
   rapidjson::CrtAllocator*) */

MemoryPoolAllocator<rapidjson::CrtAllocator> * __thiscall
rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::MemoryPoolAllocator
          (MemoryPoolAllocator<rapidjson::CrtAllocator> *this,uint param_1,CrtAllocator *param_2)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined4 *)this = 0;
  *(uint *)(this + 4) = param_1;
  *(undefined4 *)(this + 8) = 0;
  *(CrtAllocator **)(this + 0xc) = param_2;
  *(undefined4 *)(this + 0x10) = 0;
  if (param_2 == (CrtAllocator *)0x0) {
    pvVar1 = operator_new(1);
    *(void **)(this + 0xc) = pvVar1;
    *(void **)(this + 0x10) = pvVar1;
  }
  iVar3 = *(int *)(this + 4);
  piVar2 = (int *)malloc(iVar3 + 0xc);
  *piVar2 = iVar3;
  piVar2[1] = 0;
  piVar2[2] = *(int *)this;
  *(int **)this = piVar2;
  return this;
}


