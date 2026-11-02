/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146214  Symbol: set3DProjection */

/* cocos2d::CCGridBase::set3DProjection() */

void cocos2d::CCGridBase::set3DProjection(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 uVar4;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s4;
  float extraout_s5;
  float extraout_s6;
  float extraout_s7;
  undefined4 local_20;
  undefined4 local_1c;
  
  CCDirector::sharedDirector();
  CCDirector::getDisplaySizeInPixels();
  uVar1 = __fixsfsi(local_20);
  uVar2 = __fixsfsi(local_1c);
  glViewport(0,0,uVar1,uVar2);
  glMatrixMode(DAT_001462ac);
  glLoadIdentity();
  uVar4 = __divsf3(local_20,local_1c);
  gluPerspective((float)uVar4,(float)((ulonglong)uVar4 >> 0x20),extraout_s2,extraout_s3);
  glMatrixMode(0x1700);
  glLoadIdentity();
  CCDirector::sharedDirector();
  CCDirector::getZEye();
  fVar3 = (float)__mulsf3(local_20,0x3f000000);
  uVar4 = __mulsf3(local_1c,0x3f000000);
  gluLookAt((float)uVar4,(float)((ulonglong)uVar4 >> 0x20),extraout_s2_00,extraout_s3_00,extraout_s4
            ,extraout_s5,extraout_s6,extraout_s7,fVar3);
  return;
}


