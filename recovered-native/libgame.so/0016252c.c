/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016252c  Symbol: _M_reallocate_map */

/* std::deque<cocos2d::_ImageInfo*, std::allocator<cocos2d::_ImageInfo*>
   >::_M_reallocate_map(unsigned int, bool) */

void __thiscall
std::deque<cocos2d::_ImageInfo*,std::allocator<cocos2d::_ImageInfo*>>::_M_reallocate_map
          (deque<cocos2d::_ImageInfo*,std::allocator<cocos2d::_ImageInfo*>> *this,uint param_1,
          bool param_2)

{
  int *__dest;
  void *pvVar1;
  int *__src;
  size_t __n;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *__dest_00;
  uint uVar7;
  
  uVar6 = (uint)param_2;
  __src = *(int **)(this + 0x14);
  uVar2 = *(uint *)(this + 4);
  iVar3 = *(int *)(this + 0x24) - (int)__src >> 2;
  iVar4 = iVar3 + 1;
  iVar5 = iVar4 + param_1;
  if ((uint)(iVar5 * 2) < uVar2) {
    if (uVar6 != 0) {
      uVar6 = param_1 << 2;
    }
    __dest_00 = (int *)(*(int *)this + uVar6 + (uVar2 - iVar5 >> 1) * 4);
    iVar5 = (*(int *)(this + 0x24) + 4) - (int)__src >> 2;
    if (__dest_00 < __src) {
      if (iVar5 == 0) goto LAB_001625da;
      __n = iVar5 << 2;
      __dest = __dest_00;
    }
    else {
      if (iVar5 == 0) goto LAB_001625da;
      __n = iVar5 * 4;
      __dest = __dest_00 + (iVar4 - iVar5);
    }
    memmove(__dest,__src,__n);
  }
  else {
    uVar7 = param_1;
    if (param_1 < uVar2) {
      uVar7 = uVar2;
    }
    uVar7 = uVar2 + 2 + uVar7;
    if (DAT_00162600 < uVar7) {
      FUN_001c430c();
    }
    pvVar1 = operator_new(uVar7 * 4);
    if (uVar6 != 0) {
      uVar6 = param_1 << 2;
    }
    __dest_00 = (int *)((int)pvVar1 + uVar6 + (uVar7 - iVar5 >> 1) * 4);
    iVar4 = (*(int *)(this + 0x24) + 4) - (int)*(void **)(this + 0x14) >> 2;
    if (iVar4 != 0) {
      memmove(__dest_00,*(void **)(this + 0x14),iVar4 << 2);
    }
    operator_delete(*(void **)this);
    *(uint *)(this + 4) = uVar7;
    *(void **)this = pvVar1;
  }
LAB_001625da:
  *(int **)(this + 0x14) = __dest_00;
  iVar4 = *__dest_00;
  *(int *)(this + 0xc) = iVar4;
  *(int *)(this + 0x10) = iVar4 + 0x200;
  *(int **)(this + 0x24) = __dest_00 + iVar3;
  iVar3 = __dest_00[iVar3];
  *(int *)(this + 0x1c) = iVar3;
  *(int *)(this + 0x20) = iVar3 + 0x200;
  return;
}


