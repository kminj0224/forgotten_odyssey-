/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00151eb0  Symbol: ~CCParticleGalaxy */

/* cocos2d::CCParticleGalaxy::~CCParticleGalaxy() */

CCParticleGalaxy * __thiscall cocos2d::CCParticleGalaxy::~CCParticleGalaxy(CCParticleGalaxy *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00151ed4 + 0x151ebc);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x24c;
  CCParticleSystemQuad::~CCParticleSystemQuad((CCParticleSystemQuad *)this);
  return this;
}


