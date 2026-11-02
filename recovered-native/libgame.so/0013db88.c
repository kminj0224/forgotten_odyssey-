/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013db88  Symbol: reverse */

/* cocos2d::CCMoveBy::reverse() */

void cocos2d::CCMoveBy::reverse(void)

{
  int in_r0;
  CCPoint *pCVar1;
  float in_s0;
  float fVar2;
  float in_s1;
  CCPoint aCStack_10 [8];
  
  pCVar1 = *(CCPoint **)(in_r0 + 0x20);
  fVar2 = (float)CCPoint::CCPoint(aCStack_10,in_s0,in_s1);
  actionWithDuration(fVar2,pCVar1);
  return;
}


