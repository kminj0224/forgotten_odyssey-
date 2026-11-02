/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00167b48  Symbol: _M_insert_aux */

/* std::vector<cocos2d::CCTouchHandler*, std::allocator<cocos2d::CCTouchHandler*>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,
   std::vector<cocos2d::CCTouchHandler*, std::allocator<cocos2d::CCTouchHandler*> > >,
   cocos2d::CCTouchHandler* const&) */

undefined8 __thiscall
std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>::_M_insert_aux
          (vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>> *this,
          __normal_iterator param_1,CCTouchHandler **param_2)

{
  vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>> *__dest;
  CCTouchHandler **ppCVar1;
  int iVar2;
  undefined4 *puVar3;
  CCTouchHandler *pCVar4;
  vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>> *local_20;
  vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>> *local_1c;
  
  puVar3 = *(undefined4 **)(this + 4);
  if (puVar3 == *(undefined4 **)(this + 8)) {
    local_20 = (vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>> *)
               _M_check_len(this,1,(char *)(DAT_00167bf8 + 0x167b7e));
    iVar2 = *(int *)this;
    __dest = local_20;
    if (local_20 != (vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>> *)0x0
       ) {
      if (DAT_00167bfc < local_20) {
        FUN_001c430c();
      }
      __dest = (vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>> *)
               operator_new((int)local_20 << 2);
    }
    if ((CCTouchHandler **)(__dest + ((int)(param_1 - iVar2) >> 2) * 4) != (CCTouchHandler **)0x0) {
      *(CCTouchHandler **)(__dest + ((int)(param_1 - iVar2) >> 2) * 4) = *param_2;
    }
    iVar2 = (int)(param_1 - (int)*(void **)this) >> 2;
    if (iVar2 != 0) {
      memmove(__dest,*(void **)this,iVar2 << 2);
    }
    local_1c = __dest + iVar2 * 4 + 4;
    iVar2 = (int)(*(int *)(this + 4) - param_1) >> 2;
    if (iVar2 != 0) {
      memmove(local_1c,(void *)param_1,iVar2 << 2);
    }
    if (*(void **)this != (void *)0x0) {
      operator_delete(*(void **)this);
    }
    *(vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>> **)this = __dest;
    *(vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>> **)(this + 4) =
         local_1c + iVar2 * 4;
    *(vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>> **)(this + 8) =
         __dest + (int)local_20 * 4;
  }
  else {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = puVar3[-1];
    }
    ppCVar1 = *(CCTouchHandler ***)(this + 4);
    *(CCTouchHandler ***)(this + 4) = ppCVar1 + 1;
    pCVar4 = *param_2;
    __copy_move_backward_a<false,cocos2d::CCTouchHandler**,cocos2d::CCTouchHandler**>
              ((CCTouchHandler **)param_1,ppCVar1 + -1,ppCVar1);
    *(CCTouchHandler **)param_1 = pCVar4;
    local_20 = this;
    local_1c = (vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>> *)param_1;
  }
  return CONCAT44(local_1c,local_20);
}


