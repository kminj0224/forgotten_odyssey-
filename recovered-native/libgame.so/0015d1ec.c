/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d1ec  Symbol: ccpDistance */

/* cocos2d::ccpDistance(cocos2d::CCPoint const&, cocos2d::CCPoint const&) */

void cocos2d::ccpDistance(CCPoint *param_1,CCPoint *param_2)

{
  undefined8 uVar1;
  CCPoint *pCStack_18;
  CCPoint *pCStack_14;
  
  pCStack_18 = param_1;
  pCStack_14 = param_2;
  __subsf3(*param_1,*param_2);
  uVar1 = __subsf3(param_1[1],param_2[1]);
  CCPoint::CCPoint((CCPoint *)&pCStack_18,(float)uVar1,(float)((ulonglong)uVar1 >> 0x20));
  ccpLength((CCPoint *)&pCStack_18);
  return;
}


