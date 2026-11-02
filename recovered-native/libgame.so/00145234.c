/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00145234  Symbol: applyOrientation */

/* cocos2d::CCDirector::applyOrientation() */

undefined8 __thiscall cocos2d::CCDirector::applyOrientation(CCDirector *this)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = *(undefined4 *)(this + 0x70);
  uVar1 = *(undefined8 *)(this + 0x6c);
  iVar2 = __mulsf3(*(undefined4 *)(this + 0x6c),0x3f000000);
  iVar3 = __mulsf3(uVar4,0x3f000000);
  iVar5 = *(int *)(this + 0x84);
  if (iVar5 == 2) {
    glTranslatef(iVar2,iVar3,0);
    uVar4 = DAT_001452c8;
  }
  else {
    if (iVar5 != 3) {
      if (iVar5 != 1) {
        return uVar1;
      }
      glTranslatef(iVar2,iVar3,0);
      glRotatef(DAT_001452c0,0,0,0x3f800000);
      iVar5 = iVar2;
      iVar2 = iVar3;
      goto LAB_001452b8;
    }
    glTranslatef(iVar2,iVar3,0);
    uVar4 = DAT_001452c4;
  }
  glRotatef(uVar4,0,0,0x3f800000);
  iVar5 = iVar3;
LAB_001452b8:
  glTranslatef(iVar5 + -0x80000000,iVar2 + -0x80000000,0);
  return uVar1;
}


