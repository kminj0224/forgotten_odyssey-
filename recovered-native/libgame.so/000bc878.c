/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bc878  Symbol: Malloc */

/* rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::Malloc(unsigned int) */

int __thiscall
rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::Malloc
          (MemoryPoolAllocator<rapidjson::CrtAllocator> *this,uint param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1 + 3 & 0xfffffffc;
  if (**(uint **)this < uVar4 + (*(uint **)this)[1]) {
    uVar5 = uVar4;
    if (uVar4 < *(uint *)(this + 4)) {
      uVar5 = *(uint *)(this + 4);
    }
    puVar1 = (uint *)malloc(uVar5 + 0xc);
    *puVar1 = uVar5;
    puVar1[1] = 0;
    puVar1[2] = *(uint *)this;
    *(uint **)this = puVar1;
  }
  iVar3 = *(int *)this;
  iVar2 = *(int *)(iVar3 + 4);
  *(uint *)(iVar3 + 4) = uVar4 + iVar2;
  return iVar3 + iVar2 + 0xc;
}


