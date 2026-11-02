/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00151328  Symbol: sideOfLine */

/* cocos2d::CCRibbon::sideOfLine(cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint
   const&) */

void __thiscall
cocos2d::CCRibbon::sideOfLine(CCRibbon *this,CCPoint *param_1,CCPoint *param_2,CCPoint *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  CCPoint local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  
  __subsf3(*param_2,*param_3);
  uVar3 = __subsf3(param_2[1],param_3[1]);
  uVar3 = CCPoint::CCPoint(local_28,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  __subsf3(*param_1,*param_2);
  uVar3 = __subsf3(param_1[1],param_2[1]);
  CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar1 = __mulsf3(local_20,local_30);
  uVar2 = __mulsf3(local_1c,local_2c);
  __addsf3(uVar1,uVar2);
  return;
}


