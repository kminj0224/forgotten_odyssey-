/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001427fc  Symbol: transform */

/* cocos2d::CCNode::transform() */

void __thiscall cocos2d::CCNode::transform(CCNode *this)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  CCAffineTransform aCStack_28 [28];
  
  if (this[0xf6] != (CCNode)0x0) {
    nodeToParentTransform();
    CGAffineToGL(aCStack_28,(float *)(this + 0xb4));
    this[0xf6] = (CCNode)0x0;
  }
  glMultMatrixf(this + 0xb4);
  uVar3 = *(undefined4 *)(this + 0x18);
  iVar2 = __aeabi_fcmpeq(uVar3,0);
  if (iVar2 == 0) {
    glTranslatef(0,0,uVar3);
  }
  if ((*(int *)(this + 0x44) != 0) &&
     ((*(int *)(this + 0x48) == 0 || (*(char *)(*(int *)(this + 0x48) + 0x11) == '\0')))) {
    uVar3 = *(undefined4 *)(this + 0x58);
    iVar2 = __aeabi_fcmpeq(uVar3,0);
    if ((iVar2 == 0) || (iVar2 = __aeabi_fcmpeq(*(undefined4 *)(this + 0x5c),0), iVar2 == 0)) {
      glTranslatef(uVar3,*(undefined4 *)(this + 0x5c),0);
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    CCCamera::locate();
    if (bVar1) {
      glTranslatef(*(int *)(this + 0x58) + -0x80000000,*(int *)(this + 0x5c) + -0x80000000,0);
    }
  }
  return;
}


