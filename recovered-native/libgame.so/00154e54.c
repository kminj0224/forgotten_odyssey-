/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00154e54  Symbol: draw */

/* cocos2d::CCParticleSystemQuad::draw() */

void cocos2d::CCParticleSystemQuad::draw(void)

{
  bool bVar1;
  int in_r0;
  undefined4 uVar2;
  
  CCNode::draw();
  uVar2 = (**(code **)(**(int **)(in_r0 + 0x1e0) + 0x20))();
  glBindTexture(DAT_00154f08,uVar2);
  glBindBuffer(DAT_00154f0c,*(undefined4 *)(in_r0 + 0x204));
  glBufferData(DAT_00154f0c,*(int *)(in_r0 + 0x1dc) * 0x50,*(undefined4 *)(in_r0 + 0x1fc),
               DAT_00154f10);
  glVertexPointer(2,DAT_00154f14,0x14,0);
  glColorPointer(4,DAT_00154f18,0x14,8);
  glTexCoordPointer(2,DAT_00154f14,0x14,0xc);
  if ((*(int *)(in_r0 + 0x1e4) != 1) || (bVar1 = false, *(int *)(in_r0 + 0x1e8) != DAT_00154f1c)) {
    glBlendFunc(*(int *)(in_r0 + 0x1e4),*(undefined4 *)(in_r0 + 0x1e8));
    bVar1 = true;
  }
  glDrawElements(4,*(int *)(in_r0 + 0x148) * 6,DAT_00154f20,*(undefined4 *)(in_r0 + 0x200));
  if (bVar1) {
    glBlendFunc(1,DAT_00154f1c);
  }
  glBindBuffer(DAT_00154f0c,0);
  return;
}


