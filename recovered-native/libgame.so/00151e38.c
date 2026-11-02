/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00151e38  Symbol: ~CCParticleFire */

/* cocos2d::CCParticleFire::~CCParticleFire() */

CCParticleFire * __thiscall cocos2d::CCParticleFire::~CCParticleFire(CCParticleFire *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00151e5c + 0x151e44);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x24c;
  CCParticleSystemQuad::~CCParticleSystemQuad((CCParticleSystemQuad *)this);
  return this;
}


