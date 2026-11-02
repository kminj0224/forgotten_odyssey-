/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001439b0  Symbol: _M_insert_aux */

/* std::vector<cocos2d::CCObject*, std::allocator<cocos2d::CCObject*>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<cocos2d::CCObject**,
   std::vector<cocos2d::CCObject*, std::allocator<cocos2d::CCObject*> > >, cocos2d::CCObject*
   const&) */

undefined8 __thiscall
std::vector<cocos2d::CCObject*,std::allocator<cocos2d::CCObject*>>::_M_insert_aux
          (vector<cocos2d::CCObject*,std::allocator<cocos2d::CCObject*>> *this,
          __normal_iterator param_1,CCObject **param_2)

{
  int iVar1;
  vector<cocos2d::CCObject*,std::allocator<cocos2d::CCObject*>> *__dest;
  int iVar2;
  undefined4 *puVar3;
  CCObject *pCVar4;
  vector<cocos2d::CCObject*,std::allocator<cocos2d::CCObject*>> *local_20;
  vector<cocos2d::CCObject*,std::allocator<cocos2d::CCObject*>> *local_1c;
  
  puVar3 = *(undefined4 **)(this + 4);
  if (puVar3 == *(undefined4 **)(this + 8)) {
    local_20 = (vector<cocos2d::CCObject*,std::allocator<cocos2d::CCObject*>> *)
               _M_check_len(this,1,(char *)(DAT_00143a6c + 0x1439f0));
    iVar1 = *(int *)this;
    __dest = local_20;
    if (local_20 != (vector<cocos2d::CCObject*,std::allocator<cocos2d::CCObject*>> *)0x0) {
      if (DAT_00143a70 < local_20) {
        FUN_001c430c();
      }
      __dest = (vector<cocos2d::CCObject*,std::allocator<cocos2d::CCObject*>> *)
               operator_new((int)local_20 << 2);
    }
    if ((CCObject **)(__dest + ((int)(param_1 - iVar1) >> 2) * 4) != (CCObject **)0x0) {
      *(CCObject **)(__dest + ((int)(param_1 - iVar1) >> 2) * 4) = *param_2;
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
    *(vector<cocos2d::CCObject*,std::allocator<cocos2d::CCObject*>> **)this = __dest;
    *(vector<cocos2d::CCObject*,std::allocator<cocos2d::CCObject*>> **)(this + 4) =
         local_1c + iVar1 * 4;
    *(vector<cocos2d::CCObject*,std::allocator<cocos2d::CCObject*>> **)(this + 8) =
         __dest + (int)local_20 * 4;
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
    *(CCObject **)param_1 = pCVar4;
    local_20 = this;
    local_1c = (vector<cocos2d::CCObject*,std::allocator<cocos2d::CCObject*>> *)param_1;
  }
  return CONCAT44(local_1c,local_20);
}


