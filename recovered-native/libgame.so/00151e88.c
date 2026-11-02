/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00151e88  Symbol: ~CCParticleSun */

/* cocos2d::CCParticleSun::~CCParticleSun() */

CCParticleSun * __thiscall cocos2d::CCParticleSun::~CCParticleSun(CCParticleSun *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00151eac + 0x151e94);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x24c;
  CCParticleSystemQuad::~CCParticleSystemQuad((CCParticleSystemQuad *)this);
  return this;
}


