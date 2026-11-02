/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00154d60  Symbol: initWithTotalParticles */

/* cocos2d::CCParticleSystemPoint::initWithTotalParticles(unsigned int) */

int cocos2d::CCParticleSystemPoint::initWithTotalParticles(uint param_1)

{
  int iVar1;
  void *pvVar2;
  uint in_r1;
  
  iVar1 = CCParticleSystem::initWithTotalParticles((CCParticleSystem *)param_1,in_r1);
  if (iVar1 != 0) {
    pvVar2 = operator_new__(*(int *)(param_1 + 0x1dc) << 4);
    *(void **)(param_1 + 0x1fc) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      CCObject::release((CCObject *)param_1);
      iVar1 = 0;
    }
    else {
      glGenBuffers(1,param_1 + 0x200);
      glBindBuffer(DAT_00154dc0,*(undefined4 *)(param_1 + 0x200));
      glBufferData(DAT_00154dc0,*(int *)(param_1 + 0x1dc) << 4,*(undefined4 *)(param_1 + 0x1fc),
                   DAT_00154dc4);
      glBindBuffer(DAT_00154dc0,0);
      iVar1 = 1;
    }
  }
  return iVar1;
}


