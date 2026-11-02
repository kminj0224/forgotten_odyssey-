/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143452  Symbol: CCPointEqualToPoint */

/* cocos2d::CCPoint::CCPointEqualToPoint(cocos2d::CCPoint const&, cocos2d::CCPoint const&) */

bool __thiscall
cocos2d::CCPoint::CCPointEqualToPoint(CCPoint *this,CCPoint *param_1,CCPoint *param_2)

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


