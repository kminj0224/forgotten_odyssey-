/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00154c5c  Symbol: draw */

/* cocos2d::CCParticleSystemPoint::draw() */

void __thiscall cocos2d::CCParticleSystemPoint::draw(CCParticleSystemPoint *this)

{
  bool bVar1;
  undefined4 uVar2;
  
  CCNode::draw();
  if (*(int *)(this + 0x148) != 0) {
    glDisableClientState(DAT_00154d38);
    uVar2 = (**(code **)(**(int **)(this + 0x1e0) + 0x20))();
    glBindTexture(DAT_00154d3c,uVar2);
    glEnable(DAT_00154d40);
    glTexEnvi(DAT_00154d40,DAT_00154d44,1);
    glBindBuffer(DAT_00154d48,*(undefined4 *)(this + 0x200));
    glBufferData(DAT_00154d48,*(int *)(this + 0x1dc) << 4,*(undefined4 *)(this + 0x1fc),DAT_00154d4c
                );
    glVertexPointer(2,DAT_00154d50,0x10,0);
    glColorPointer(4,DAT_00154d54,0x10,8);
    glEnableClientState(DAT_00154d58);
    glPointSizePointerOES(DAT_00154d50,0x10,0xc);
    if ((*(int *)(this + 0x1e4) != 1) || (bVar1 = false, *(int *)(this + 0x1e8) != DAT_00154d5c)) {
      glBlendFunc(*(int *)(this + 0x1e4),*(undefined4 *)(this + 0x1e8));
      bVar1 = true;
    }
    glDrawArrays(0,0,*(undefined4 *)(this + 0x148));
    if (bVar1) {
      glBlendFunc(1,DAT_00154d5c);
    }
    glBindBuffer(DAT_00154d48,0);
    glDisableClientState(DAT_00154d58);
    glDisable(DAT_00154d40);
    glEnableClientState(DAT_00154d38);
  }
  return;
}


