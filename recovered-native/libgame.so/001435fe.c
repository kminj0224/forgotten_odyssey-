/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001435fe  Symbol: CCRectIntersectsRect */

/* cocos2d::CCRect::CCRectIntersectsRect(cocos2d::CCRect const&, cocos2d::CCRect const&) */

bool __thiscall cocos2d::CCRect::CCRectIntersectsRect(CCRect *this,CCRect *param_1,CCRect *param_2)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  
  uVar4 = CCRectGetMaxX(this,param_1);
  uVar1 = CCRectGetMinX((CCRect *)param_1,(CCRect *)((ulonglong)uVar4 >> 0x20));
  uVar4 = __aeabi_fcmplt((int)uVar4,uVar1);
  bVar3 = false;
  if ((int)uVar4 == 0) {
    uVar4 = CCRectGetMaxX((CCRect *)param_1,(CCRect *)((ulonglong)uVar4 >> 0x20));
    uVar1 = CCRectGetMinX(this,(CCRect *)((ulonglong)uVar4 >> 0x20));
    uVar4 = __aeabi_fcmplt((int)uVar4,uVar1);
    if ((int)uVar4 == 0) {
      uVar4 = CCRectGetMaxY(this,(CCRect *)((ulonglong)uVar4 >> 0x20));
      uVar1 = CCRectGetMinY((CCRect *)param_1,(CCRect *)((ulonglong)uVar4 >> 0x20));
      uVar4 = __aeabi_fcmplt((int)uVar4,uVar1);
      if ((int)uVar4 == 0) {
        uVar4 = CCRectGetMaxY((CCRect *)param_1,(CCRect *)((ulonglong)uVar4 >> 0x20));
        uVar1 = CCRectGetMinY(this,(CCRect *)((ulonglong)uVar4 >> 0x20));
        iVar2 = __aeabi_fcmplt((int)uVar4,uVar1);
        bVar3 = iVar2 == 0;
      }
    }
  }
  return bVar3;
}


