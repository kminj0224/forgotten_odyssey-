/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ddba  Symbol: reverse */

/* cocos2d::CCJumpBy::reverse() */

void cocos2d::CCJumpBy::reverse(void)

{
  int in_r0;
  CCPoint *pCVar1;
  float in_s0;
  float in_s1;
  undefined8 uVar2;
  CCPoint aCStack_18 [12];
  
  pCVar1 = *(CCPoint **)(in_r0 + 0x20);
  uVar2 = CCPoint::CCPoint(aCStack_18,in_s0,in_s1);
  actionWithDuration((float)uVar2,pCVar1,(float)((ulonglong)uVar2 >> 0x20),(uint)aCStack_18);
  return;
}


