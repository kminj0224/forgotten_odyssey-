/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001435a4  Symbol: CCRectContainsPoint */

/* cocos2d::CCRect::CCRectContainsPoint(cocos2d::CCRect const&, cocos2d::CCPoint const&) */

bool __thiscall cocos2d::CCRect::CCRectContainsPoint(CCRect *this,CCRect *param_1,CCPoint *param_2)

{
  undefined4 uVar1;
  int iVar2;
  CCRect CVar3;
  undefined8 uVar4;
  
  CVar3 = *param_1;
  uVar1 = CCRectGetMinX(this,param_1);
  uVar4 = __aeabi_fcmpge(CVar3,uVar1);
  if ((int)uVar4 != 0) {
    CVar3 = *param_1;
    uVar1 = CCRectGetMaxX(this,(CCRect *)((ulonglong)uVar4 >> 0x20));
    uVar4 = __aeabi_fcmple(CVar3,uVar1);
    if ((int)uVar4 != 0) {
      CVar3 = param_1[1];
      uVar1 = CCRectGetMinY(this,(CCRect *)((ulonglong)uVar4 >> 0x20));
      uVar4 = __aeabi_fcmpge(CVar3,uVar1);
      if ((int)uVar4 != 0) {
        CVar3 = param_1[1];
        uVar1 = CCRectGetMaxY(this,(CCRect *)((ulonglong)uVar4 >> 0x20));
        iVar2 = __aeabi_fcmple(CVar3,uVar1);
        return iVar2 != 0;
      }
    }
  }
  return false;
}


