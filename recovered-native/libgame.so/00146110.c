/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146110  Symbol: applyLandscape */

/* cocos2d::CCGridBase::applyLandscape() */

undefined8 cocos2d::CCGridBase::applyLandscape(void)

{
  undefined4 in_r0;
  CCDirector *this;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_r1;
  
  this = (CCDirector *)CCDirector::sharedDirector();
  CCDirector::getDisplaySizeInPixels();
  iVar1 = __mulsf3(in_r0,0x3f000000);
  iVar2 = __mulsf3(in_r1,0x3f000000);
  iVar3 = CCDirector::getDeviceOrientation(this);
  if (iVar3 == 2) {
    glTranslatef(iVar1,iVar2,0);
    uVar4 = DAT_001461a4;
LAB_00146166:
    glRotatef(uVar4,0,0,0x3f800000);
    iVar3 = iVar2;
  }
  else {
    if (iVar3 == 3) {
      glTranslatef(iVar1,iVar2,0);
      uVar4 = DAT_001461a8;
      goto LAB_00146166;
    }
    if (iVar3 != 1) goto LAB_001461a2;
    glTranslatef(iVar1,iVar2,0);
    glRotatef(DAT_001461ac,0,0,0x3f800000);
    iVar3 = iVar1;
    iVar1 = iVar2;
  }
  glTranslatef(iVar3 + -0x80000000,iVar1 + -0x80000000,0);
LAB_001461a2:
  return CONCAT44(in_r1,in_r0);
}


