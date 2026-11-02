/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144eec  Symbol: setProjection */

/* cocos2d::CCDirector::setProjection(cocos2d::ccDirectorProjection) */

void __thiscall cocos2d::CCDirector::setProjection(CCDirector *this,ccDirectorProjection param_1)

{
  CCDirector *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float extraout_s4;
  float extraout_s5;
  float extraout_s6;
  float extraout_s7;
  
  uVar5 = *(undefined4 *)(this + 0x6c);
  uVar6 = *(undefined4 *)(this + 0x70);
  uVar7 = getZEye();
  fVar4 = (float)((ulonglong)uVar7 >> 0x20);
  if (param_1 == 1) {
    if (*(CCEGLView **)(this + 0x14) != (CCEGLView *)0x0) {
      CCEGLView::setViewPortInPoints
                (*(CCEGLView **)(this + 0x14),(float)uVar7,fVar4,extraout_s2,extraout_s3);
    }
    glMatrixMode(DAT_00145004);
    glLoadIdentity();
    uVar7 = __divsf3(uVar5,uVar6);
    gluPerspective((float)uVar7,(float)((ulonglong)uVar7 >> 0x20),extraout_s2_00,extraout_s3_00);
    glMatrixMode(0x1700);
    glLoadIdentity();
    fVar4 = (float)__mulsf3(uVar5,0x3f000000);
    uVar7 = __mulsf3(uVar6,0x3f000000);
    gluLookAt((float)uVar7,(float)((ulonglong)uVar7 >> 0x20),extraout_s2_01,extraout_s3_01,
              extraout_s4,extraout_s5,extraout_s6,extraout_s7,fVar4);
  }
  else if (param_1 == 2) {
    if (*(undefined4 **)(this + 0x80) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x80))();
    }
  }
  else if (param_1 == 0) {
    if (*(CCEGLView **)(this + 0x14) != (CCEGLView *)0x0) {
      CCEGLView::setViewPortInPoints
                (*(CCEGLView **)(this + 0x14),(float)uVar7,fVar4,extraout_s2,extraout_s3);
    }
    glMatrixMode(DAT_00145004);
    glLoadIdentity();
    pCVar1 = (CCDirector *)sharedDirector();
    uVar2 = getContentScaleFactor(pCVar1);
    pCVar1 = (CCDirector *)sharedDirector();
    uVar3 = getContentScaleFactor(pCVar1);
    uVar2 = __mulsf3(uVar2,DAT_00145008);
    uVar3 = __mulsf3(uVar3,0x44800000);
    glOrthof(0,uVar5,0,uVar6,uVar2,uVar3);
    glMatrixMode(0x1700);
    glLoadIdentity();
  }
  *(ccDirectorProjection *)(this + 0x60) = param_1;
  return;
}


