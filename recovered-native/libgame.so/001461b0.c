/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001461b0  Symbol: set2DProjection */

/* cocos2d::CCGridBase::set2DProjection() */

undefined8 cocos2d::CCGridBase::set2DProjection(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = in_r2;
  local_14 = in_r3;
  CCDirector::sharedDirector();
  CCDirector::getWinSizeInPixels((CCDirector *)&local_18);
  glLoadIdentity();
  uVar1 = __fixsfsi(local_18);
  uVar2 = __fixsfsi(local_14);
  glViewport(0,0,uVar1,uVar2);
  glMatrixMode(DAT_0014620c);
  glLoadIdentity();
  uVar1 = DAT_00146210;
  glOrthof(0,local_18,0,local_14);
  glMatrixMode(0x1700);
  return CONCAT44(0x44800000,uVar1);
}


