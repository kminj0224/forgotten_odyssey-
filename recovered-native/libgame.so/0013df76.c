/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013df76  Symbol: reverse */

/* cocos2d::CCBezierBy::reverse() */

void __thiscall cocos2d::CCBezierBy::reverse(CCBezierBy *this)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  CCPoint::CCPoint((CCPoint *)&local_28);
  CCPoint::CCPoint((CCPoint *)&local_20);
  uVar2 = CCPoint::CCPoint((CCPoint *)&local_18);
  uVar2 = CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  local_28 = local_30;
  local_24 = local_2c;
  CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  __addsf3(*(undefined4 *)(this + 0x3c),local_40);
  uVar2 = __addsf3(*(undefined4 *)(this + 0x40),local_3c);
  uVar2 = CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  local_20 = local_30;
  local_1c = local_2c;
  CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  __addsf3(*(undefined4 *)(this + 0x34),local_38);
  uVar2 = __addsf3(*(undefined4 *)(this + 0x38),local_34);
  fVar1 = (float)CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar2,
                                  (float)((ulonglong)uVar2 >> 0x20));
  local_18 = local_30;
  local_14 = local_2c;
  actionWithDuration(fVar1,*(_ccBezierConfig **)(this + 0x20));
  return;
}


