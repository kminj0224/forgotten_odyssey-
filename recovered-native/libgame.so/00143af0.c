/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143af0  Symbol: _M_insert_aux */

/* std::vector<cocos2d::CCAutoreleasePool*, std::allocator<cocos2d::CCAutoreleasePool*>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<cocos2d::CCAutoreleasePool**,
   std::vector<cocos2d::CCAutoreleasePool*, std::allocator<cocos2d::CCAutoreleasePool*> > >,
   cocos2d::CCAutoreleasePool* const&) */

undefined8 __thiscall
std::vector<cocos2d::CCAutoreleasePool*,std::allocator<cocos2d::CCAutoreleasePool*>>::_M_insert_aux
          (vector<cocos2d::CCAutoreleasePool*,std::allocator<cocos2d::CCAutoreleasePool*>> *this,
          __normal_iterator param_1,CCAutoreleasePool **param_2)

{
  int iVar1;
  vector<cocos2d::CCAutoreleasePool*,std::allocator<cocos2d::CCAutoreleasePool*>> *__dest;
  int iVar2;
  undefined4 *puVar3;
  CCAutoreleasePool *pCVar4;
  vector<cocos2d::CCAutoreleasePool*,std::allocator<cocos2d::CCAutoreleasePool*>> *local_20;
  vector<cocos2d::CCAutoreleasePool*,std::allocator<cocos2d::CCAutoreleasePool*>> *local_1c;
  
  puVar3 = *(undefined4 **)(this + 4);
  if (puVar3 == *(undefined4 **)(this + 8)) {
    local_20 = (vector<cocos2d::CCAutoreleasePool*,std::allocator<cocos2d::CCAutoreleasePool*>> *)
               _M_check_len(this,1,(char *)(DAT_00143bac + 0x143b30));
    iVar1 = *(int *)this;
    __dest = local_20;
    if (local_20 !=
        (vector<cocos2d::CCAutoreleasePool*,std::allocator<cocos2d::CCAutoreleasePool*>> *)0x0) {
      if (DAT_00143bb0 < local_20) {
        FUN_001c430c();
      }
      __dest = (vector<cocos2d::CCAutoreleasePool*,std::allocator<cocos2d::CCAutoreleasePool*>> *)
               operator_new((int)local_20 << 2);
    }
    if ((CCAutoreleasePool **)(__dest + ((int)(param_1 - iVar1) >> 2) * 4) !=
        (CCAutoreleasePool **)0x0) {
      *(CCAutoreleasePool **)(__dest + ((int)(param_1 - iVar1) >> 2) * 4) = *param_2;
    }
    iVar1 = (int)(param_1 - (int)*(void **)this) >> 2;
    if (iVar1 != 0) {
      memmove(__dest,*(void **)this,iVar1 << 2);
    }
    local_1c = __dest + iVar1 * 4 + 4;
    iVar1 = (int)(*(int *)(this + 4) - param_1) >> 2;
    if (iVar1 != 0) {
      memmove(local_1c,(void *)param_1,iVar1 << 2);
    }
    if (*(void **)this != (void *)0x0) {
      operator_delete(*(void **)this);
    }
    *(vector<cocos2d::CCAutoreleasePool*,std::allocator<cocos2d::CCAutoreleasePool*>> **)this =
         __dest;
    *(vector<cocos2d::CCAutoreleasePool*,std::allocator<cocos2d::CCAutoreleasePool*>> **)(this + 4)
         = local_1c + iVar1 * 4;
    *(vector<cocos2d::CCAutoreleasePool*,std::allocator<cocos2d::CCAutoreleasePool*>> **)(this + 8)
         = __dest + (int)local_20 * 4;
  }
  else {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = puVar3[-1];
    }
    iVar1 = *(int *)(this + 4);
    *(int *)(this + 4) = iVar1 + 4;
    pCVar4 = *param_2;
    iVar2 = (int)((iVar1 + -4) - param_1) >> 2;
    if (iVar2 != 0) {
      memmove((void *)(iVar1 + iVar2 * -4),(void *)param_1,iVar2 * 4);
    }
    *(CCAutoreleasePool **)param_1 = pCVar4;
    local_20 = this;
    local_1c = (vector<cocos2d::CCAutoreleasePool*,std::allocator<cocos2d::CCAutoreleasePool*>> *)
               param_1;
  }
  return CONCAT44(local_1c,local_20);
}


