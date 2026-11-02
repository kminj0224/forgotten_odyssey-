/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014f2cc  Symbol: _M_check_len */

/* std::vector<cocos2d::CCMenuItem*, std::allocator<cocos2d::CCMenuItem*> >::_M_check_len(unsigned
   int, char const*) const */

uint __thiscall
std::vector<cocos2d::CCMenuItem*,std::allocator<cocos2d::CCMenuItem*>>::_M_check_len
          (vector<cocos2d::CCMenuItem*,std::allocator<cocos2d::CCMenuItem*>> *this,uint param_1,
          char *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(int *)(this + 4) - *(int *)this >> 2;
  if (DAT_0014f2fc - uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_001c4558(param_2);
  }
  uVar1 = uVar2;
  if (uVar2 < param_1) {
    uVar1 = param_1;
  }
  uVar1 = uVar1 + uVar2;
  if ((uVar1 < uVar2) || (DAT_0014f2fc < uVar1)) {
    uVar1 = DAT_0014f2fc;
  }
  return uVar1;
}


