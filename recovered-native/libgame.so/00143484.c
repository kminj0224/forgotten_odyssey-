/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143484  Symbol: CCSizeEqualToSize */

/* cocos2d::CCSize::CCSizeEqualToSize(cocos2d::CCSize const&, cocos2d::CCSize const&) */

bool __thiscall cocos2d::CCSize::CCSizeEqualToSize(CCSize *this,CCSize *param_1,CCSize *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = __aeabi_fcmpeq(*(undefined4 *)this,*param_1);
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = __aeabi_fcmpeq(*(undefined4 *)(this + 4),param_1[1]);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}


