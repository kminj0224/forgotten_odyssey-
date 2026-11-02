/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00165fe4  Symbol: _M_insert_aux */

/* std::vector<cocos2d::CCTMXObjectGroup*, std::allocator<cocos2d::CCTMXObjectGroup*>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<cocos2d::CCTMXObjectGroup**,
   std::vector<cocos2d::CCTMXObjectGroup*, std::allocator<cocos2d::CCTMXObjectGroup*> > >,
   cocos2d::CCTMXObjectGroup* const&) */

undefined8 __thiscall
std::vector<cocos2d::CCTMXObjectGroup*,std::allocator<cocos2d::CCTMXObjectGroup*>>::_M_insert_aux
          (vector<cocos2d::CCTMXObjectGroup*,std::allocator<cocos2d::CCTMXObjectGroup*>> *this,
          __normal_iterator param_1,CCTMXObjectGroup **param_2)

{
  int iVar1;
  vector<cocos2d::CCTMXObjectGroup*,std::allocator<cocos2d::CCTMXObjectGroup*>> *__dest;
  int iVar2;
  undefined4 *puVar3;
  CCTMXObjectGroup *pCVar4;
  vector<cocos2d::CCTMXObjectGroup*,std::allocator<cocos2d::CCTMXObjectGroup*>> *local_20;
  vector<cocos2d::CCTMXObjectGroup*,std::allocator<cocos2d::CCTMXObjectGroup*>> *local_1c;
  
  puVar3 = *(undefined4 **)(this + 4);
  if (puVar3 == *(undefined4 **)(this + 8)) {
    local_20 = (vector<cocos2d::CCTMXObjectGroup*,std::allocator<cocos2d::CCTMXObjectGroup*>> *)
               _M_check_len(this,1,(char *)(DAT_001660a0 + 0x166024));
    iVar1 = *(int *)this;
    __dest = local_20;
    if (local_20 !=
        (vector<cocos2d::CCTMXObjectGroup*,std::allocator<cocos2d::CCTMXObjectGroup*>> *)0x0) {
      if (DAT_001660a4 < local_20) {
        FUN_001c430c();
      }
      __dest = (vector<cocos2d::CCTMXObjectGroup*,std::allocator<cocos2d::CCTMXObjectGroup*>> *)
               operator_new((int)local_20 << 2);
    }
    if ((CCTMXObjectGroup **)(__dest + ((int)(param_1 - iVar1) >> 2) * 4) !=
        (CCTMXObjectGroup **)0x0) {
      *(CCTMXObjectGroup **)(__dest + ((int)(param_1 - iVar1) >> 2) * 4) = *param_2;
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
    *(vector<cocos2d::CCTMXObjectGroup*,std::allocator<cocos2d::CCTMXObjectGroup*>> **)this = __dest
    ;
    *(vector<cocos2d::CCTMXObjectGroup*,std::allocator<cocos2d::CCTMXObjectGroup*>> **)(this + 4) =
         local_1c + iVar1 * 4;
    *(vector<cocos2d::CCTMXObjectGroup*,std::allocator<cocos2d::CCTMXObjectGroup*>> **)(this + 8) =
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
    *(CCTMXObjectGroup **)param_1 = pCVar4;
    local_20 = this;
    local_1c = (vector<cocos2d::CCTMXObjectGroup*,std::allocator<cocos2d::CCTMXObjectGroup*>> *)
               param_1;
  }
  return CONCAT44(local_1c,local_20);
}


