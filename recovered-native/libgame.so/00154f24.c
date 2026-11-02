/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00154f24  Symbol: postStep */

/* cocos2d::CCParticleSystemQuad::postStep() */

void cocos2d::CCParticleSystemQuad::postStep(void)

{
  undefined4 uVar1;
  int in_r0;
  
  uVar1 = DAT_00154f58;
  glBindBuffer(DAT_00154f58,*(undefined4 *)(in_r0 + 0x204));
  glBufferSubData(uVar1,0,*(int *)(in_r0 + 0x150) * 0x50,*(undefined4 *)(in_r0 + 0x1fc));
  glBindBuffer(uVar1,0);
  return;
}


