/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00154bc8  Symbol: postStep */

/* cocos2d::CCParticleSystemPoint::postStep() */

void cocos2d::CCParticleSystemPoint::postStep(void)

{
  undefined4 uVar1;
  int in_r0;
  
  uVar1 = DAT_00154bfc;
  glBindBuffer(DAT_00154bfc,*(undefined4 *)(in_r0 + 0x200));
  glBufferSubData(uVar1,0,*(int *)(in_r0 + 0x150) << 4,*(undefined4 *)(in_r0 + 0x1fc));
  glBindBuffer(uVar1,0);
  return;
}


